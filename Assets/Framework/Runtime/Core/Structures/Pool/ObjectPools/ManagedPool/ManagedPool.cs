/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.24
 * Description : 
 * 该池的行为自动添加池绑定，对象将自动绑定该池
 */

using System;
namespace AirFramework
{
    /// <summary>
    /// 管理可以自动管理的对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class ManagedPool<T> : GenericPool<T>, IManagedPool where T : class, IPoolable
    {

        #region 管理逻辑

        protected int AllocateCount { get; private set; } = 0;
        //回收
        public void OnEnterPool(T item)
        {

            item.IsRecycled = true;
            item.OnRecycle();
        }

        //申请
        public void OnExitPool(T item)
        {
            AllocateCount++;
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


        private TimerCall timer;

        private float recycleTime = -1;
        public float RecycleTime
        {
            get
            {
                return recycleTime;
            }
            set
            {
                recycleTime = value;
                if (recycleTime > 0D)
                {
                    if (timer == null)
                    {
                        timer = new TimerCall();

                        timer.OnCompleted += OnCycleRecycle;
                    }
                    timer.Interval = recycleTime;
                    if (timer.State != TimerState.Running)
                    {
                        timer.Start();
                    }

                }
                else
                {
                    timer.Reset();
                }
            }
        }
        public float RecoveryRatio { get; set; } = 0.5f;


        #region 回收周期函数
        protected async void OnCycleRecycle()
        {
            await Async.Complete();
            //空池销毁
            if (IsDeposit && Count == 0)
            {
                Framework.Pool.UnsafeReleasePool<T>();
                return;
            }

            int delta = Count - AllocateCount;

            if (delta > 0)
            {
                int unloadCount = (int)(delta * RecoveryRatio);

                if (unloadCount > 3)
                    await UnloadAsync(unloadCount);
                else Unload(unloadCount);
            }
            AllocateCount = 0;

        }


        #endregion

        #endregion
    }
}
