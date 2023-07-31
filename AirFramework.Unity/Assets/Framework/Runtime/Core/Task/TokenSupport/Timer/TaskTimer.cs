using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

namespace AirFramework
{
    public class TaskTimer :PoolableObject, IUpdate,ITaskTokenHolder,IRecycle
    {
        public AirTaskBase BindTask { get; set; } = null;

        public float Current { get; private set; } = 0;
        public float Max { get; set; } = 1;

        public bool Enable { get; set; } = false;
  
        public override void OnAllocate()
        {
   
        }
        public override void OnRecycle()
        {
            Enable = false;
            Current = 0;
            Max = 1;
            BindTask= null;
        }

        void ITaskCancel.OnTaskCancel()
        {
            BindTask.Finish(ETaskStatus.Failed);
            Dispose();
        }

        void ITaskContinue.OnTaskContinue()
        {
            Enable = true;
        }

        void ITaskPause.OnTaskPause()
        {
            Enable= false;
        }

        void IUpdate.Update(float deltaTime)
        {
            if (!Enable) return;
            Current += deltaTime;
            UnityEngine. Debug.Log("CurrentTime :{Current}");
            if(Current >= Max)
            {
                //UnityEngine.Debug.Log($"尝试完成任务:{BindTask.ID}");
                //保证在执行Completed的时候值是等于Max的
                Enable= false;
                BindTask.Finish(ETaskStatus.Succeed);
                Dispose();
            }
        }
    }
}
