﻿/********************************************************************************************
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
    public class TimeRecyclePool<T> : GenericPool<T>, ITimeRecyclePool where T : class
    {

        #region 管理逻辑
        //  private HandleQueue<T> HandleQueue { get; set; }
        protected int AllocateCount { get; private set; } = 0;

        //申请
        private void OnExitPool(T item)
        {
            AllocateCount++;
        }

        public TimeRecyclePool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate, onDestroy, onRecycle, onAllocate)
        {
            base.OnAllocate += OnExitPool;
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
                        Internal.Starter.UpdateEvent += ((IUpdate)timer).Update;
                        timer.Start();
                        // HandleQueue.StartObjLife();
                    }

                }
                //如果周期小于等于0，则关闭计时器
                else
                {
                    Internal.Starter.UpdateEvent -= ((IUpdate)timer).Update;
                    timer.Reset();
                    //HandleQueue.CloseObjLife();
                }
            }
        }
        public float RecoveryRatio { get; set; } = 0.5f;

        private int recycleWaitCount = 0;

        #region 回收周期函数
        protected void OnCycleRecycle()
        {
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
                recycleWaitCount += unloadCount;
            }
            AllocateCount = 0;
        }


        #endregion

        #endregion
    }

}
