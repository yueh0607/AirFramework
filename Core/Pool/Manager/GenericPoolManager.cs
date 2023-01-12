using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Pool
    {
        /// <summary>
        /// 创建实现IPoolable接口的类型的对象池，如果存在则抛出异常,默认创建器为new
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void CreateGenericPool<T>(Action<T> onDestroy = null) where T : class, IPoolable<T>,new()
        {
            CreateGenericPool(()=> { return new T(); },onDestroy);
        }

        /// <summary>
        /// 创建实现IPoolable接口的类型对象池，如果存在则抛出异常
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void CreateGenericPool<T>(Func<T> onCreate, Action<T> onDestroy = null) where T : class, IPoolable<T>
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                throw new InvalidOperationException("There is a same type pool in Manager!");
            }
            pools.Value.Add(typeof(T), new PoolablePool<T>(onCreate, onDestroy));
        }
        /// <summary>
        /// 创建自定义行为对象池，存在则抛出异常，默认创建器为new
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRelease"></param>
        /// <param name="onAllocate"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void CreateGenericPool<T>(Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class,new()
        {
            CreateGenericPool(()=> { return new T(); },onDestroy,onRelease,onAllocate);
        }
        /// <summary>
        /// 创建自定义行为对象池，如果已经存在则抛出异常
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRelease"></param>
        /// <param name="onAllocate"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void CreateGenericPool<T>(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class
        {
            if (pools.Value.ContainsKey(typeof(T)))
            {
                throw new InvalidOperationException("There is a same type pool in Manager!");
            }
            pools.Value.Add(typeof(T), new GenericPool<T>(onCreate, onDestroy, onRelease, onAllocate));
        }



        /// <summary>
        /// 创建实现IPoolable的对象池，如果已经存在则不创建,默认创建器为new
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        public static void TryCreateGenericPool<T>(Action<T> onDestroy = null) where T : class, IPoolable<T>,new()
        {
            TryCreateGenericPool(()=> { return new T(); },onDestroy);
        }
        /// <summary>
        /// 创建实现IPoolable的对象池，如果已经存在则不创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        public static void TryCreateGenericPool<T>(Func<T> onCreate, Action<T> onDestroy = null) where T : class, IPoolable<T>
        {
            if (!pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value.Add(typeof(T), new PoolablePool<T>(onCreate, onDestroy));
            }
        }


        /// <summary>
        /// 创建自定义行为对象池，如果已经存在则不创建,默认创建器为new
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        public static void TryCreateGenericPool<T>( Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class,new()
        {
            TryCreateGenericPool(onDestroy, onRelease, onAllocate);
        }
        /// <summary>
        /// 创建自定义行为对象池，如果已经存在则不创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        public static void TryCreateGenericPool<T>(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null) where T : class
        {
            if (!pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value.Add(typeof(T), new GenericPool<T>(onCreate, onDestroy, onRelease, onAllocate));
            }
        }
    }
}
