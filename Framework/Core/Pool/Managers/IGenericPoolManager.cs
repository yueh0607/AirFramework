using System;

namespace AirFramework
{
    public interface IGenericPoolManager
    {
        /// <summary>
        /// 从对象池管理器获取托管池，需要实现IPoolable
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public IGenericPool<T> GetPool<T>() where T : class, IPoolable;
        /// <summary>
        /// 从对象池管理器获取非托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public IGenericPool<T> CreatePool<T>(Func<T> onCreate=null, Action<T> onDestroy=null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T :class;
       
        /// <summary>
        /// 从对象池申请托管对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T Allocate<T>() where T : class, IPoolable;
       
        /// <summary>
        /// 将托管对象回收到对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public void Recycle<T>(T item) where T : class, IPoolable;
        /// <summary>
        /// 释放某个托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void ReleasePool<T>() where T : class, IPoolable;


    }
}
