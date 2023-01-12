using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Progress;

namespace AirFramework
{
    public static class Pool
    {
        private static readonly Lazy<Dictionary<Type, IPool>> pools = new Lazy<Dictionary<Type, IPool>>();

    

        public static void Create<T>(Func<T> onCreate, Action<T> onDestroy = null) where T : class, IPoolable<T>
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                throw new InvalidOperationException("There is a same type pool in Manager!");
            }
            pools.Value.Add(typeof(T), new PoolablePool<T>(onCreate, onDestroy));
        }
        public static void Create<T>(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                throw new InvalidOperationException("There is a same type pool in Manager!");
            }
            pools.Value.Add(typeof(T), new GenericPool<T>(onCreate, onDestroy, onRelease, onAllocate));
        }
        public static void TryCreate<T>(Func<T> onCreate, Action<T> onDestroy = null) where T : class, IPoolable<T>
        {
            if (!pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value.Add(typeof(T), new PoolablePool<T>(onCreate, onDestroy));
            }
        }
        public static void TryCreate<T>(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class
        {
            if (!pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value.Add(typeof(T), new GenericPool<T>(onCreate, onDestroy, onRelease, onAllocate));
            }
        }
        
        public static void Dispose<T>()
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value[typeof(T)].Clear();
                pools.Value.Remove(typeof(T));
            }
            else
            {
                throw new InvalidOperationException($"No such pool with type {typeof(T).Name}");
            }
        }
        public static T Allocate<T>() where T : class
        {
            if(pools.Value.ContainsKey(typeof(T)))
            {
                return pools.Value[typeof(T)].Allocate() as T;
            }
            else
            {
                throw new InvalidOperationException($"No such pool with type {typeof(T).Name}");
            }
        }
        public static void Release<T>(T item) where T : class
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value[typeof(T)].Release(item);
            }
            else
            {
                throw new InvalidOperationException($"No such pool with type {typeof(T).Name}");
            }
        }

        public static IPool Get<T>()
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                return pools.Value[typeof(T)];
            }
            else
            {
                throw new InvalidOperationException($"No such pool with type {typeof(T).Name}");
            }
        }
    }
}
