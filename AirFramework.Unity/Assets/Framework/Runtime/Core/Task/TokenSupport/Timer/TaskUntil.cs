﻿using System;

namespace AirFramework
{

    public class TaskUntil : PoolableObject, ITaskTokenHolder, IRecycle, IUpdate
    {

        public AirTaskBase BindTask { get; set; } = null;
        public Func<bool> Condition = null;

        private bool enable = false;
        public bool Enable
        {
            get => enable;
            set => enable = value;
        }

        public override void OnAllocate()
        {

        }
        public override void OnRecycle()
        {
            Enable = false;
            BindTask = null;
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
            Enable = false;
        }

        public void Update(float deltaTime)
        {
            if (Enable)
            {
                if (Condition())
                {
                    Enable = false;
                    BindTask.Finish(ETaskStatus.Succeed);
                }
            }
        }
    }
}