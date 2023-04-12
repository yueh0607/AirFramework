using System;
using System.Diagnostics;

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
    public sealed class TimerCall : PoolableObject<TimerCall>, IUpdate
    {

       
        private bool OnceRecycle { get; set; } = false;

        public TimerState State { get; private set; } = TimerState.Idle;
        public float Time { get; private set; } = 0;

        public event Action OnCompleted=null;
        public float EndTime { get; private set; } = 1f;


        
        public void Reset()
        {
            State= TimerState.Idle;
            EndTime = 1f;
        }
        public void Pause()
        {
            State= TimerState.Paused;
        }
        public void Start(float endTime,Action onCompleted=null,bool onceRecycle = false)
        {
            OnceRecycle= onceRecycle;
            OnCompleted+=onCompleted;
            State= TimerState.Running;
        }

        void IUpdate.Update(float deltaTime)
        {
            if (State != TimerState.Running) return;
            Time+=deltaTime;
            if(Time>EndTime)
            {
                OnCompleted?.Invoke();

                if(OnceRecycle)
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
    }
}
