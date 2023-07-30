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
using System.Reflection;

namespace AirFramework
{
    public partial class PoolManager : AbstractModule
    {

        private readonly Dictionary<Type, ITimeManagedPool> pools = new Dictionary<Type, ITimeManagedPool>();

        public float DefaultRecycleCycleTime = 60.0_000F;
        public float DefaultRecycleRatio = 0.5F;

        /// <summary>
        /// 获取T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>

        public IGenericPool<T> GetOrCreatePool<T>() where T : class
        {
            var type = typeof(T);
            if (!pools.ContainsKey(type))
            {
                var pool = new LifeCyclePool<T>(
                        Pool.DefaltActivatorCreate<T>,
                        null
                        );
                pools.Add(type, pool);

                var settings = type.GetCustomAttribute<PoolSettings>();
                if (settings != null && !settings.UsePool)
                {
                    return null;
                }
                if (settings == null)
                {
                    pools[type].RecycleTime = DefaultRecycleCycleTime;
                    pools[type].RecoveryRatio = DefaultRecycleRatio;
                }
                else
                {
                    pools[type].RecycleTime = settings.RecycleInterval;
                    pools[type].RecoveryRatio = settings.RecycleRatio;
                }

                pool.IsDeposit = true;
            }
            return pools[typeof(T)] as IGenericPool<T>;
        }

        //不安全的反射GetPool
        private IObjectPool GetOrCreatePool(Type type)
        {
            if (!pools.ContainsKey(type))
            {
                //Pool
                Type tp = typeof(LifeCyclePool<>).MakeGenericType(type);
                var pool = (ITimeManagedPool)Activator.CreateInstance(tp, Prefix_FuncCreator.GetFunc(type), null, null, null);
                pools.Add(type, pool);
                var settings = type.GetCustomAttribute<PoolSettings>();

                if (settings != null && !settings.UsePool)
                {
                    return null;
                }

                if (settings == null)
                {
                    pools[type].RecycleTime = DefaultRecycleCycleTime;
                    pools[type].RecoveryRatio = DefaultRecycleRatio;
                }
                else
                {
                    pools[type].RecycleTime = settings.RecycleInterval;
                    pools[type].RecoveryRatio = settings.RecycleRatio;
                }
                pool.IsDeposit = true;
            }
            return pools[type];
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
        /// 释放T类型的托管池
        /// </summary>
        /// <typeparam name="T"></typeparam>

        public void ReleasePool<T>() where T : class => ReleasePool(typeof(T));

        /// <summary>
        /// 不安全的释放池,需要自行保证T是IPoolable
        /// </summary>
        /// <typeparam name="T"></typeparam>
        internal void UnsafeReleasePool<T>() where T : class => ReleasePool(typeof(T));




        /// <summary>
        /// 从托管池申请对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>

        public T Allocate<T>() where T : class
        {

            var pool = GetOrCreatePool<T>();
            if(pool == null)
            {
                var item = Activator.CreateInstance<T>();
                if(item is IAllocate it)
                {
                    it.OnAllocate();
                }
                return item;
            }
            return pool.Allocate();
        }

        /// <summary>
        /// 强行回收对象到真实类型对应托管池
        /// </summary>
        /// <param name="item"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public void Recycle(object item)
        {
            var type = item.GetType();
            var pool = GetOrCreatePool(type);
            if (pool == null)
            {
                if (item is IRecycle it)
                {
                    it.OnRecycle();
                    
                }
                return;
            }
            pool.RecycleObj(item);
        }

        /// <summary>
        /// 使用委托遍历全部池以进行批量设置
        /// </summary>
        /// <param name="action"></param>
        public void ForeachPools(Action<ITimeManagedPool> action)
        {
            if (action == null) return;
            foreach (var x in pools)
            {
                action(x.Value);
            }
        }

        public override void OnCreate()
        {

        }

        public override void Update(float deltaTime)
        {

        }

        protected override void OnDispose()
        {
            pools.ClearAndDispose();
        }
    }
}
