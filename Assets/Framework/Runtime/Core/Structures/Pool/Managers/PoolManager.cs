/********************************************************************************************
 * Author : YueZhenpeng
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
    public partial class PoolManager 
    {

        private readonly Dictionary<Type, IManagedPool> pools = new Dictionary<Type, IManagedPool>();

        public float DefaultRecycleCycleTime = 60_000F;
        public float DefaultRecycleRatio = 0.5F;


        #region 托管池


        #region GetPool
        /// <summary>
        /// 获取T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>

        public IGenericPool<T> GetPool<T>() where T : class, IPoolable
        {
            var type = typeof(T);
            if (!pools.ContainsKey(type))
            {
                var pool = new LifeCyclePool<T>(
                        Pool.DefaltActivatorCreate<T>,
                        null
                        );
                pools.Add(type, pool);
                pools[type].RecycleTime = DefaultRecycleCycleTime;
                pools[type].RecoveryRatio = DefaultRecycleRatio;
                pool.IsDeposit = true;
            }
            return pools[typeof(T)] as IGenericPool<T>;
        }

        private IObjectPool GetPool(Type type)
        {
            if (!pools.ContainsKey(type))
            {
                //Pool
                Type tp = typeof(LifeCyclePool<>).MakeGenericType(type);
                var pool = (IManagedPool)Activator.CreateInstance(tp, Prefix_FuncCreator.GetFunc(type), null, null, null);
                pools.Add(type, pool);
                pools[type].RecycleTime = DefaultRecycleCycleTime;
                pools[type].RecoveryRatio = DefaultRecycleRatio;
                pool.IsDeposit = true;
            }
            return pools[type];
        }


        #endregion


        #region ReleasePool
        /// <summary>
        /// 释放T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>

        public void ReleasePool<T>() where T : class, IPoolable
        {
            ReleasePool(typeof(T));

        }
        internal void UnsafeReleasePool<T>() where T : class
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
        #endregion

        #region CoreBehaviour
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
        /// 强行回收对象到真实类型对应池
        /// </summary>
        /// <param name="item"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public void RecycleOrigin(object item)
        {
            if (item is not IPoolable) throw new InvalidOperationException("The managed pool must implement the IPoolable interface");

            GetPool(item.GetType()).RecycleObj(item);
        }

        #endregion

        #region Extensions
        public void ForeachPools(Action<IManagedPool> action)
        {
            if (action == null) return;
            foreach (var x in pools)
            {
                action(x.Value);
            }
        }


        #endregion

        #endregion


    }
}
