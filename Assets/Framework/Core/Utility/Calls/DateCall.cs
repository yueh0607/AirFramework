using System;

namespace AirFramework
{
    public class DateCall : PoolableObject<TimerCall>, IUpdate
    {
        bool Broadcast { get; set; } = true;

        public event Action<DateTime> OnChanged;

        private Predicate<DateTime> condition;

        public TimerState State { get; set; } = TimerState.Idle;

        private void Open()
        {
            Broadcast = true;
            State = TimerState.Running;
        }
        /// <summary>
        /// 开启广播,不传参默认无广播条件
        /// </summary>
        /// <param name="condition"></param>
        public void Open(Predicate<DateTime> condition = null)
        {
            this.condition = condition;
            Open();
        }

        /// <summary>
        /// 关闭广播
        /// </summary>
        public void Close()
        {
            Broadcast = false;
            State = TimerState.Paused;
        }

        void IUpdate.Update()
        {
            if (!Broadcast) return;
            if (condition == null || condition(DateTime.Now))
            {
                OnChanged(DateTime.Now);
            }
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Broadcast = false;
            condition = null;
            OnChanged = null;
            State = TimerState.Idle;
        }
    }
}
