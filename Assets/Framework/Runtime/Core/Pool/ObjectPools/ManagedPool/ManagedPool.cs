/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.24
 * Description : 
 * 该池的行为自动添加池绑定，对象将自动绑定该池
 */

using System;
using System.Timers;

namespace AirFramework
{
    /// <summary>
    /// 管理可以自动管理的对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class ManagedPool<T> : GenericPool<T>,IManagedPool where T : class, IPoolable
    {

        #region 管理逻辑
        //回收
        public void OnEnterPool(T item)
        {
            item.IsRecycled = true;
            item.OnRecycle();
        }

        //申请
        public void OnExitPool(T item)
        {
            item.IsRecycled = false;
            item.ThisPool = this;
            item.OnAllocate();
        }

        public ManagedPool(Func<T> onCreate = null, Action<T> onDestroy = null) : base(onCreate, onDestroy, null, null)
        {
            base.onRecycle += OnEnterPool;
            base.onAllocate += OnExitPool;


        }
        #endregion


        #region 回收逻辑


        private Timer timer = null;

        private double recycleTime = -1;
        public double RecycleTime
        {
            get
            {
                return recycleTime;
            }
            set
            {
                recycleTime = value;
                if (recycleTime > 0d)
                {
                    if (timer == null)
                    {
                        timer = new Timer(recycleTime);
                        timer.Elapsed += (s, o) => { OnCycleRecycle(); };
                    }
                    timer.Interval = recycleTime;
                    if (!timer.Enabled)
                    {
                        timer.Start();
                    }

                }
                else
                {
                    timer.Stop();
                }
            }
        }
        public float RecoveryRatio { get; set; } = 0.5f;


        #region 回收周期函数
        protected async void OnCycleRecycle()
        {
            //空池销毁
            if (IsDeposit&&Count == 0)
            {
                Framework.Pool.UnsafeReleasePool<T>();
                return;
            }

            int delta = Count - AllocateCount;
            if (delta > 0)
            {
                await UnloadAsync((int)(delta * RecoveryRatio));
            }
            AllocateCount = 0;
            await Async.Complete();
        }
        #endregion

        #endregion
    }
}
