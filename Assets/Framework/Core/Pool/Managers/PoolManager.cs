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
using System.Reflection;
using System.Runtime.CompilerServices;
using static UnityEditor.Progress;

namespace AirFramework
{
    public partial class PoolManager : GlobalManager
    {

        private readonly Dictionary<Type, IObjectPool> pools = new Dictionary<Type, IObjectPool>();

        
        public override string Name => "PoolManager";

        #region 托管池
        /// <summary>
        /// 获取T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        
        public IGenericPool<T> GetPool<T>() where T : class,IPoolable
        {
            if (!pools.ContainsKey(typeof(T)))
            {
                pools.Add(typeof(T), new LifeCyclePool<T>(
                        Pool.DefaltActivatorCreate<T>,
                        null
                        ));
            }
            return pools[typeof(T)] as IGenericPool<T>;
        }



        private IObjectPool GetPool(Type type)
        {
            if (!pools.ContainsKey(type))
            {
                //Pool
                Type tp = typeof(LifeCyclePool<>).MakeGenericType(type);
                var pool = (IObjectPool)Activator.CreateInstance(tp,FuncCreator.GetFunc(type), null, null, null);
                pools.Add(type, pool);

            }
            return pools[type];
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
        /// <summary>
        /// 强行回收对象到源池，本步骤采用多步反射，性能损耗类似单例，仅在第一次损失较大
        /// </summary>
        /// <param name="item"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public void RecycleOrigin(object item)
        {
            if (item is not IPoolable) throw new InvalidOperationException("The managed pool must implement the IPoolable interface");
            GetPool(item.GetType()).RecycleObj(item);
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
