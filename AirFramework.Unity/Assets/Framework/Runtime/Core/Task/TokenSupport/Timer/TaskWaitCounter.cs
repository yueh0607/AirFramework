using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public class TaskWaitCounter  :PoolableObject, ITaskTokenHolder,IRecycle
    {

        public AsyncTaskBase BindTask { get; set; } = null;
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
        public void Add()
        {
            if(Enable)
            {
                ++Current;
            }
            else
            {
                saveCount++;
            }
           
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
                BindTask.Finish(ETaskStatus.Succeed);
                Enable= false;
            }
        }
        public override void OnAllocate()
        {
        
        }
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
