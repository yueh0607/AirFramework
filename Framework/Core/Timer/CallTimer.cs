using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class TimerCall : PoolableObject<TimerCall>,IUpdate
    {

        private Stopwatch watch = new Stopwatch();
        /// <summary>
        /// 表示当前回调计时器的状态
        /// </summary>
        public TimerState State { get; private set; } = TimerState.Idle;
        /// <summary>
        /// 当完成时的事件
        /// </summary>
        public event Action OnCompleted;
        /// <summary>
        /// 当改变时的事件
        /// </summary>
        public event Action<TimeSpan> OnChanged;
        //预测条件
        private Predicate<TimeSpan> predicate;

        /// <summary>
        /// 开启计时，在满足condition时调用OnCompleted
        /// </summary>
        /// <param name="condition"></param>
        public void Start(Predicate<TimeSpan> condition)
        {
            predicate = condition;
            Start();
        }
        /// <summary>
        /// 开始计时，在大于这个时间时调用OnCompleted
        /// </summary>
        /// <param name="endSpan"></param>
        public void Start(TimeSpan endSpan)
        {
            Start((x)=>x>=endSpan);
        }
        /// <summary>
        /// 开始计时
        /// </summary>
        public void Start()
        {
            watch.Start();
            State= TimerState.Running;
        }
        /// <summary>
        /// 停止计时
        /// </summary>
        public void Stop()
        {
            watch.Stop();
            State= TimerState.Paused;
        }
        /// <summary>
        /// 重置计时，参数决定事件重置
        /// </summary>
        /// <param name="onlyTime"></param>
        public void Reset(bool onlyTime = false)
        {
            //暂停计时
            Stop();
            //重置计时
            watch.Reset();
            //重置事件
            if (!onlyTime)
            {
                OnChanged = null;
                OnCompleted = null;
                predicate = null;
            }
            //重置状态
            State = TimerState.Idle;
        }
        
        void IUpdate.Update()
        {
            //不在运行则返回
            if (State != TimerState.Running) return;


           //满足预测条件，则停止计时，调用完成
            if(predicate!=null&&predicate.Invoke(watch.Elapsed))
            {
                Stop();
                OnCompleted?.Invoke();
            }
            //当改变时
            if (OnChanged != null)
            {
                OnChanged(watch.Elapsed);
            }
        }

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            Reset(false);
        }
    }
}
