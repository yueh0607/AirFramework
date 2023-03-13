/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.2.25
 * Description : 
 * 为了实现异步令牌取消功能，计时器需要特化以满足异步的取消挂起功能，使用StopWatch实现高精度计时功能
 */


using System;
using System.Diagnostics;

namespace AirFramework
{
    internal class AsyncTimerCall : PoolableObject<AsyncTimerCall>,IUpdate
    {
        private Stopwatch watch = new Stopwatch();

        /// <summary>
        /// 当完成时的事件
        /// </summary>
        public event Action OnCompleted;

        private IAuthorization Task { get; set; } = null;
        private TimeSpan predicate;


        public void Start(float seconds,IAuthorization task)
        {
            Start(TimeSpan.FromSeconds(seconds),task);
        }
        public void Start(TimeSpan span, IAuthorization task)
        {
            predicate= span;
            Task = task;
            watch.Start();
        }
        void IUpdate.Update()
        {
            
            if (Task == null || !Task.Authorization)
            {
                
                if(watch.IsRunning)watch.Stop();
                return;
            }
            
            if (!watch.IsRunning)watch.Start();
            if(watch.Elapsed>predicate)
            {
                watch.Stop();
                watch.Reset();
                OnCompleted?.Invoke();
            }
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Task = null;
            predicate = TimeSpan.Zero;
            watch.Stop();
            watch.Reset();
            OnCompleted = null;
        }

    }
}
