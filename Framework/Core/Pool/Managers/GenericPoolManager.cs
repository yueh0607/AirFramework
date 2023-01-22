using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class GenericPoolManager : Unit,IGenericPoolManager
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
        public IObjectPool GetPool<T>() where T : class, IPoolable
        {
            lock (_lock)
            {
                if (!pools.ContainsKey(typeof(T)))
                {
                    pools.Add(typeof(T), new GenericPool<T>(
                            () => { return Activator.CreateInstance<T>(); },
                            null,
                            (T item) => { item.OnAllocate(); },
                            (T item) => { item.OnRecycle(); }
                            ));
                }
                return pools[typeof(T)];
            }
        }

        public T Allocate<T> () where T : class,IPoolable
        {
            return (T)(GetPool<T>().AllocateObj());
        }
        public void Recycle<T>(T item) where T : class,IPoolable
        {
            GetPool<T>().RecycleObj(item);
        }

        protected override void OnDispose()
        {
            pools.Clear();
        }
    }
}
