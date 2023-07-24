using System;
namespace AirFramework
{

    public enum TimerState
    {
        /// <summary>
        /// 闲置状态
        /// </summary>
        Idle,
        /// <summary>
        /// 暂停状态
        /// </summary>
        Paused,
        /// <summary>
        /// 运行状态
        /// </summary>
        Running
    }
    /// <summary>
    /// 到达指定时间自动回调
    /// </summary>
    public sealed class TimerCall : PoolableObject, IUpdate,ITaskCancelatable
    {

        private bool OnceRecycle { get; set; } = false;

        public TimerState State { get; private set; } = TimerState.Idle;
        public float Time { get; private set; } = 0;

        public event Action OnCompleted = null;
        public float Interval { get; set; } = 60f;

        public event Action CallPerFrame = null;

        public void Reset()
        {
            State = TimerState.Idle;
            Interval = 60f;
        }
        public void Pause()
        {
            State = TimerState.Paused;
        }
        public void Start(bool onceRecycle = false)
        {
            OnceRecycle = onceRecycle;
            State = TimerState.Running;
        }

        void IUpdate.Update(float deltaTime)
        {

            if (State != TimerState.Running) return;
            CallPerFrame?.Invoke();
            Time += deltaTime;
            if (Time > Interval)
            {
                OnCompleted?.Invoke();
                Time = 0;
                if (OnceRecycle)
                {
                    Dispose();
                }
            }
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Reset();
        }

        void ITaskCancelatable.OnCancel()
        {
            Reset();
            Dispose();
        }

        void ITaskCancelatable.OnPause()
        {
           Pause();
        }

        void ITaskCancelatable.OnResume()
        {
            Start();
        }
    }
}
