namespace AirFramework
{
    public class TaskTokenCatch : PoolableObject, ITaskTokenHolder, IRecycle
    {
        public AirTaskBase BindTask { get; set; } = null;

        private bool enable = false;
        private bool completed = false;
        public bool Enable
        {
            get => enable;
            set
            {
                enable = value;
                Refresh();
            }
        }


        private void Refresh()
        {
            if (enable && completed)
                BindTask.Finish(ETaskStatus.Succeed);
        }
        public void CatchNow()
        {
            completed = true;

            Refresh();

        }


        public override void OnAllocate()
        {

        }
        public override void OnRecycle()
        {
            enable = false;
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
    }
}
