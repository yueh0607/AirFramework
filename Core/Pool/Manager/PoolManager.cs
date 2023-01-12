using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Progress;

namespace AirFramework
{
    public static partial class Pool
    {
        private static readonly Lazy<Dictionary<Type, IObjectPool>> pools = new Lazy<Dictionary<Type, IObjectPool>>();

        /// <summary>
        /// 销毁对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <exception cref="InvalidOperationException"></exception>
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
        /// <summary>
        /// 存在则销毁对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public static void TryDispose<T>()
        {
            if (!pools.Value.ContainsKey(typeof(T)))
            {
                pools.Value[typeof(T)].Clear();
                pools.Value.Remove(typeof(T));
            }
        }

        /// <summary>
        /// 申请一个T类型对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        /// <exception cref="InvalidOperationException"></exception>
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
        /// <summary>
        /// 放回一个T类型对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        /// <exception cref="InvalidOperationException"></exception>
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

        /// <summary>
        /// 获取一个对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        /// <exception cref="InvalidOperationException"></exception>
        public static IObjectPool Get<T>()
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
