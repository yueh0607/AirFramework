namespace AirFramework
{
    public class TaskFrame : PoolableObject, ITaskTokenHolder, IUpdate, IRecycle
    {

        public AirTaskBase BindTask { get; set; } = null;

        public int FrameCount { get; set; } = 1;

        public bool Enable { get; set; } = false;

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Enable = false;
            FrameCount = 1;
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

        void IUpdate.Update(float deltaTime)
        {
            if (!Enable) return;
            if (--FrameCount == 0)
            {
                Enable = false;
                BindTask.Finish(ETaskStatus.Succeed);
                Dispose();
            }
        }
    }
}
