using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitPoolManager : Unit,IUnitPoolManager
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
        public IObjectPool GetPool<T>() where T : Unit, IUnitPoolable,new()
        {
            lock (_lock)
            {
                if (!pools.ContainsKey(typeof(T)))
                {
                    pools.Add(typeof(T), new UnitPool<T>());
                }
                return pools[typeof(T)];
            }
        }
        public T Allocate<T>() where T : Unit, IUnitPoolable,new()
        {
            return (T)(GetPool<T>().AllocateObj());
        }
        public void Recycle<T>(T item) where T : Unit, IUnitPoolable, new()
        {
            GetPool<T>().RecycleObj(item);
        }

        protected override void OnDispose()
        {
           // lock (_lock) foreach (var i in pools) i.Dispose();
            pools.Clear();
        }
    }
}
