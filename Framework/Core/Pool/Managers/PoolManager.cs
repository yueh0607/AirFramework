/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 建立PoolManager来管理托管池类型，允许全局申请和释放托管对象
 * 同时支持创建非托管池类型，要求用户自行取得实例并管理
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public class PoolManager : GlobalManager
    {

        private readonly Dictionary<Type, IObjectPool> pools = new Dictionary<Type, IObjectPool>();

        
        public override string Name => "PoolManager";

        #region 托管池
        /// <summary>
        /// 获取T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        
        public IGenericPool<T> GetPool<T>() where T : class, IPoolable
        {
            if (!pools.ContainsKey(typeof(T)))
            {
                pools.Add(typeof(T), new LifeCyclePool<T>(
                        Extensions.DefaltActivatorCreate<T>,
                        null,
                        (T item) => { item.OnRecycle(); },
                        (T item) => { item.OnAllocate(); }
                        ));
            }
            return pools[typeof(T)] as IGenericPool<T>;
        }
        /// <summary>
        /// 释放T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        
        public void ReleasePool<T>() where T : class, IPoolable
        {
            Type poolType = typeof(T);
            if (pools.ContainsKey(poolType))
            {
                var pool = pools[poolType];
                pools.Remove(typeof(T));
                pool.Dispose();
            }

        }
        /// <summary>
        /// 从托管池申请对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        
        
        public T Allocate<T>() where T : class, IPoolable
        {
            return GetPool<T>().Allocate();
        }
        /// <summary>
        /// 回收对象到托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        
        
        public void Recycle<T>(T item) where T : class, IPoolable
        {
            GetPool<T>().Recycle(item);
        }
        #endregion

        #region 非托管池
        /// <summary>
        /// 创建非托管通用池
        /// </summary>
        
        public GenericPool<T> CreateGenericPool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            GenericPool<T> pool = new GenericPool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
        /// <summary>
        /// 创建高效纯净池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        
        public PurePool<T> CreatePurePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            PurePool<T> pool = new PurePool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
        /// <summary>
        /// 创建带绑定的对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        
        public AutoBindPool<T> CreateAutoPoolablePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T :class, IPoolBindable
        { 
            
            AutoBindPool<T> pool = new AutoBindPool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );

            return pool;
        }

        /// <summary>
        /// 创建带绑定且可以自动处理生命周期的池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        
        public LifeCyclePool<T> CreateLifeCyclePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            LifeCyclePool<T> pool = new LifeCyclePool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
        /// <summary>
        /// 创建ID池
        /// </summary>
        /// <param name="repeatCount"></param>
        /// <returns></returns>
        
        public UIDPool CreateGUIDPool(int repeatCount=100)
        {
            return new UIDPool(repeatCount);
        }
        #endregion

        protected override void OnDispose()
        {
            foreach (var pool in pools)
            {
                pool.Value.Dispose();
            }
            pools.Clear();
        }
    }
}
