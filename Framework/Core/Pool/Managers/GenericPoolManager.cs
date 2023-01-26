using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class GenericPoolManager : Unit, IGenericPoolManager
    {
        private readonly Dictionary<Type, IObjectPool> pools = new Dictionary<Type, IObjectPool>();

        /// <summary>
        /// 自旋锁
        /// </summary>
        private readonly object _lock = new object();

        /// <summary>
        /// 获取池，需要实现IPoolable
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public IGenericPool<T> GetPool<T>() where T : class, IPoolable
        {
            lock (_lock)
            {
                if (!pools.ContainsKey(typeof(T)))
                {
                    pools.Add(typeof(T), new GenericPool<T>(
                            () => { return Activator.CreateInstance<T>(); },
                            null,
                            (T item) => { item.OnRecycle(); },
                            (T item) => { item.OnAllocate(); }
                            ));
                }
                return pools[typeof(T)] as GenericPool<T>;
            }
        }
        /// <summary>
        /// 从全局对象池申请对象，如果无则创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T Allocate<T>() where T : class, IPoolable
        {
            return (T)(GetPool<T>().AllocateObj());
        }
        /// <summary>
        /// 回收对象到全局对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public void Recycle<T>(T item) where T : class, IPoolable
        {
            GetPool<T>().RecycleObj(item);
        }
        /// <summary>
        /// 销毁通用对象池
        /// </summary>
        protected override void OnDispose()
        {
            pools.Clear();
        }
        /// <summary>
        /// 获取不受管理的通用池，不实现IPoolable需要传参
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public IGenericPool<T> CreatePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {

            IGenericPool<T> pool = new GenericPool<T>(
                        () => { return Activator.CreateInstance<T>(); },
                        null,
                        onRecycle,
                        onAllocate
                        );
            return pool;

        }
    }
}
