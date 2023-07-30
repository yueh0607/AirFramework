using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public class TaskWaitCounter<T>  :PoolableObject, ITaskTokenHolder,IRecycle
    {

        public AsyncTask<T[]> BindTask { get; set; } = null;
        public int Current { get; private set; } = 0;

        private bool enable = false;
        public bool Enable 
        {
            get => enable;
            set
            {
                enable = value;
                if(enable)
                {
                    Refresh(true);
                }
            }
        }

        public int TriggerCount { get; set; } = 1;

        private int saveCount = 0;

        public T[] Results { get; private set; } = null;

    
        public int AllTaskCount
        {
            get 
            {
                return Results == null ? 0:Results.Length;
            }

            set
            {
                if(value<0) value= 0;
                Results = new T[value];
            }
        
        }
            
         

        public void Add(int index,T value)
        {
            if(index< 0 || index >= Results.Length) throw new IndexOutOfRangeException("index must in range[0,AllTaskCount-1]");
       
            if(Enable)
            {
                ++Current;
            }
            else
            {
                saveCount++;
            }
            if (saveCount + Current <= TriggerCount)
                Results[index] = value;

            Refresh(false);
        }

        void Refresh(bool clearSave = false)
        {
            if(clearSave) 
            {
                Current+=saveCount;
                saveCount = 0;
            }
            if (Current >= TriggerCount)
            {
                BindTask.Result = Results;
                BindTask.Finish(ETaskStatus.Succeed);
                Enable= false;
            }
        }


        public override void OnAllocate() { }
        public override void OnRecycle()
        {
            Enable = false;
            TriggerCount = 1;
            Current= 0;
            saveCount= 0;
            BindTask = null;
        }

        void ITaskCancel.OnTaskCancel()
        {
            BindTask.Finish(ETaskStatus.Failed);
            Dispose();
        }

        void ITaskContinue.OnTaskContinue()
        {
            Enable= true;
        }

        void ITaskPause.OnTaskPause()
        {
            Enable= false;
        }

    
    }
}
