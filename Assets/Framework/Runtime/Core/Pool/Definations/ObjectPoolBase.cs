/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 建立通用的池模板，要求所有存储引用类型的对象池都自此模板派生
 */
using System;
using Timer = System.Timers.Timer;

namespace AirFramework
{
    /// <summary>
    /// 对象池基类型
    /// </summary>
    public abstract class ObjectPoolBase : Unit , IObjectPool
    {
        /// <summary>
        /// 池缓存数
        /// </summary>
        public abstract int Count { get; }
        /// <summary>
        /// 对象类型
        /// </summary>
        public abstract Type ObjectType { get; }
        /// <summary>
        /// 最大缓存容量
        /// </summary>
        public abstract int MaxCapacity { get; set; }
        /// <summary>
        /// 清空缓存
        /// </summary>
        public abstract void Clear();
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public abstract object AllocateObj();
        /// <summary>
        /// 回收对象
        /// </summary>
        public abstract void RecycleObj(object item);
        /// <summary>
        /// 预加载缓存
        /// </summary>
        /// <param name="count"></param>

        public abstract void Preload(int count);

        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public abstract void Unload(int count);

        /// <summary>
        /// 回收周期到达时调用
        /// </summary>
        protected abstract void OnCycleRecycle();

     
        private Timer timer=null;

        private double recycleTime = -1;
        public double RecycleTime
        {
            get
            {
                return recycleTime;
            }
            set
            {
                recycleTime= value;
                if(recycleTime>0d)
                {
                    if(timer==null)
                    {
                        timer=new Timer(recycleTime);
                        timer.Elapsed += (s,o)=> { OnCycleRecycle(); };
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

        public abstract AsyncTask PreloadAsync(int count);
        public abstract AsyncTask UnloadAsync(int count, int frame = 1);
    }
}