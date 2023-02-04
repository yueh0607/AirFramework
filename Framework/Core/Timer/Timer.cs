using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{


    public class Timer :PoolableObject<AirFramework.Timer>, IUpdate
    {
        float startValue,currentValue;
        Predicate<float> predicate;   
        public TimerState State { get; private set; } = TimerState.Idle;

        public Timer()
        {
            Init();
        }
        internal void Init()
        {
            State = TimerState.Idle;
            startValue = GetGlobalSecond();
            currentValue = GetGlobalSecond();
        }

        /// <summary>
        /// 该方法返回系统时间(ms)，每24.5天从0溢出
        /// </summary>
        /// <returns></returns>
        internal static int GetGlobalTick()
        {
            return Environment.TickCount&int.MaxValue;
        }
        /// <summary>
        /// 返回系统开始时间(s),每24.5天溢出
        /// </summary>
        /// <returns></returns>
        internal static float GetGlobalSecond()
        {
            return (GetGlobalTick() / 1000f);
        }


        void IUpdate.Update()
        {
            if (!State.IsRunning()) return;
            currentValue = GetGlobalSecond();
            OnTickChanged(currentValue);
            if(predicate!=null&&predicate(currentValue)) OnCompleted();
        }


        void Start(Predicate<float> condition)
        {
            predicate= condition;
            Start();
        }
        void Start()
        {
            if(!State.AllowStart()) throw new InvalidOperationException("Error Operation to Timer");
            State = TimerState.Started;
        }
        void Pause()
        {
            if (!State.AllowPause()) throw new InvalidOperationException("Error Operation to Timer");
            State = TimerState.Paused;
        }
        void Stop()
        {
            if (!State.AllowStop()) throw new InvalidOperationException("Error Operation to Timer");
            State = TimerState.Stoped;
        }

        public override void OnAllocate()
        {
            Init();
        }

        public override void OnRecycle()
        {
            
        }

        public event Action<float> OnTickChanged;
        public event Action OnCompleted;




    }
}
