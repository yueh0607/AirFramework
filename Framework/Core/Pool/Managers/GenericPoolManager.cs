/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 建立PoolManager来管理托管池类型，允许全局申请和释放托管对象
 * 同时支持创建非托管池类型，要求用户自行取得实例并管理
 * 对该类型Dispose并不会引起管理器失效，而是清空全部池
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class GenericPoolManager : Unit, IGenericPoolManager
    {
        private readonly Dictionary<Type, IObjectPool> pools = new Dictionary<Type, IObjectPool>();

        public IGenericPool<T> GetPool<T>() where T : class, IPoolable
        {
            if (!pools.ContainsKey(typeof(T)))
            {
                pools.Add(typeof(T), new GenericPool<T>(
                        Extensions.DefaltActivatorCreate<T>,
                        null,
                        (T item) => { item.OnRecycle(); },
                        (T item) => { item.OnAllocate(); }
                        ));
            }
            return pools[typeof(T)] as GenericPool<T>;
        }

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
        public T Allocate<T>() where T : class, IPoolable
        {
            return (T)(GetPool<T>().AllocateObj());
        }

        public void Recycle<T>(T item) where T : class, IPoolable
        {
            GetPool<T>().RecycleObj(item);
        }

        protected override void OnDispose()
        {
            foreach (var pool in pools)
            {
                pool.Value.Dispose();
            }
            pools.Clear();
        }



        public GenericPool<T> CreatePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            GenericPool<T> pool = new GenericPool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
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

    }
}
