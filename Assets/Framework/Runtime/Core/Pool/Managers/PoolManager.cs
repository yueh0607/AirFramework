/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 建立PoolManager来管理托管池类型，允许全局申请和释放托管对象
 * 同时支持创建非托管池类型，要求用户自行取得实例并管理
 * 自动回收机制：为了不与UnityAPI耦合，采用纯时间管理，机制如下
 *      如果用户长时间令池处于低效率状态，则释放数量 = （总数量 - 峰值速率）* 0.5
 *      如果池在达到闲置阈值时，自动销毁整个池      
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    public partial class PoolManager : GlobalManager
    {

        private readonly Dictionary<Type, IObjectPool> pools = new Dictionary<Type, IObjectPool>();
        private readonly Dictionary<Type, bool> lifes = new();
        
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
            ReleasePool(typeof(T));

        }


        /// <summary>
        /// 释放T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>

        private void ReleasePool(Type poolType)
        {
           
            if (pools.ContainsKey(poolType))
            {
                pools.RemoveAndDispose(poolType);
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
