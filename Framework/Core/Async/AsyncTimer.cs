using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class AsyncTimerCall : PoolableObject<AsyncTimerCall>,IUpdate
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
            //(predicate - watch.Elapsed).L();
            if(watch.Elapsed>predicate)
            {
                //"cLICK".L();
                watch.Stop();
                watch.Reset();
                OnCompleted?.Invoke();
                this.Dispose();
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
