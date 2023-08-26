/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.24
 * Description : 
 * 该池的行为自动添加池绑定，对象将自动绑定该池
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 管理可以自动管理的对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class TimeManagedPool<T> : UnitTestPool<T>, ITimeManagedPool where T : class
    {

        protected int AllocateCountPerCycle { get; private set; } = 0;

        //申请
        protected override void OnItemAllocate(T item)
        {
            base.OnItemAllocate(item);
            AllocateCountPerCycle++;

#if UNITY_EDITOR
            if (refs.Count <= 0) rented.Add(new WeakReference(item));
            else
            {
                var wk = refs.Dequeue();
                wk.Target = item;
                rented.Add(wk);
            }
#endif
        }
        protected override void OnItemRecycle(T item)
        {
            base.OnItemRecycle(item);

#if UNITY_EDITOR
            try
            {
                var wk = rented.Find((x) => x.IsAlive && x.Target == item);
                rented.Remove(wk);
            }
            finally
            {

            }

#endif
        }

        public TimeManagedPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate, onDestroy, onRecycle, onAllocate)
        {

        }


        TimerCall timer;


        private float recycleTime = -1;
        public float RecycleTime
        {
            get
            {
                return recycleTime;
            }
            set
            {
                //更新回收间隔
                recycleTime = value;
                //如果大于0，则启动回收
                if (recycleTime > 0D)
                {
                    //如果计时器是空，则初始化并启动
                    if (timer == null)
                    {
                        timer = new TimerCall();
                        //HandleQueue = new HandleQueue<T>(OnDestroy,1).StartObjLife();
                        timer.OnCompleted += OnCycleRecycle;
                        timer.CallPerFrame += () =>
                        {
                            if (recycleWaitCount > 0)
                            {
                                recycleWaitCount--;
                                Unload(1);
                            }
                        };
                    }
                    //设置计时器间隔为回收周期
                    timer.Interval = recycleTime;
                    //如果不在运行，则启动计时器
                    if (timer.State != TimerState.Running)
                    {
                        //Internal.AirEngine.Update += ((IUpdate)timer).Update;
                        timer.StartLife();
                        timer.Start();
                    }

                }
                //如果周期小于等于0，则关闭计时器
                else
                {
                    timer.CloseLife();
                    timer.Reset();
                }
            }
        }
        public float RecoveryRatio { get; set; } = 0.5f;

        private int recycleWaitCount = 0;

        protected void OnCycleRecycle()
        {
            //空池销毁
            if (IsDeposit && Count == 0)
            {
                Framework.Pool.UnsafeReleasePool<T>();
                return;
            }
            int delta = Count - AllocateCountPerCycle;

            if (delta > 0)
            {
                int unloadCount = (int)(delta * RecoveryRatio);
                recycleWaitCount += unloadCount;
            }
            AllocateCountPerCycle = 0;
        }


#if UNITY_EDITOR
        private readonly List<WeakReference> alive = new List<WeakReference>();
        private readonly Queue<WeakReference> refs = new Queue<WeakReference>();
        private readonly List<WeakReference> rented = new List<WeakReference>();


        public void RemoveDeadObj()
        {
            rented.RemoveAll((x) => !x.IsAlive);
            alive.RemoveAll((x) => !x.IsAlive);
        }
        public List<WeakReference> GetAllAlive()
        {
            foreach (var item in alive)
            {
                refs.Enqueue(item);
            }
            alive.Clear();
            foreach (var item in base.pool)
            {
                WeakReference wr;
                if (refs.Count <=0) wr = new WeakReference(item);
                else
                {
                    wr = refs.Dequeue();
                    wr.Target = item;
                }
                alive.Add(wr);
            }
            return alive;
        }

        public List<WeakReference> GetAllRented() => rented;
#endif
    }

}
