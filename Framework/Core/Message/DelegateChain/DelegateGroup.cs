/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.30
 * Description : 
 * 建立一个Unit容器来存储一个方法组，存储每个方法的多个重载
 * 对容器的每个操作都会影响来着容器的任意引用
 * 如Get拿到委托列表后Clear容器会导致Get到的List被回收，Remove和Add将可能导致List元素数量变化
 */


using System;
using System.Collections.Generic;
using System.Threading;

namespace AirFramework
{
    /// <summary>
    /// 用于存储方法组的事件，包含一个方法的多个重载
    /// </summary>
    public class DelegateGroup : Unit
    {
        private Dictionary<Type, UnitList<Delegate>> events = new();

        public int Count => events.Count;


        //自旋锁
        //private readonly object locker = new object();

        /// <summary>
        /// 用于向事件组添加新的委托
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Add(Delegate dele, Type deleType)
        {
            //Monitor.Enter(locker);
            if (!events.ContainsKey(deleType))
            {
                events.Add(deleType, Framework.Pool.Allocate<UnitList<Delegate>>());
            }
            events[deleType].Value.Add(dele);
            //Monitor.Exit(locker);
        }
        /// <summary>
        /// 从事件组移除委托
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Remove(Delegate dele, Type deleType)
        {
            //Monitor.Enter(locker);
            if (events.ContainsKey(deleType))
            {
                events[deleType].Value.Remove(dele);
                if (events[deleType].Value.Count == 0)
                {
                    //此处先回收到池无所谓，因为此时不会有其他访问请求
                    events[deleType].Dispose();
                    events.Remove(deleType);
                }
            }
            //Monitor.Exit(locker);
        }

        /// <summary>
        /// 添加新的委托，通过GetType取得类型
        /// </summary>
        /// <param name="dele"></param>
        public void Add(Delegate dele)
        {
            Add(dele, dele.GetType());
        }
        /// <summary>
        /// 添加新的委托，通过typeof取得类型
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <param name="dele"></param>
        public void Add<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Add(dele, typeof(DelegateType));
        }
        /// <summary>
        /// 存在则移除委托，通过GetType取得类型
        /// </summary>
        /// <param name="dele"></param>
        public void Remove(Delegate dele)
        {
            Remove(dele, dele.GetType());
        }
        /// <summary>
        /// 存在则移除委托，typeof取得类型
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <param name="dele"></param>
        public void Remove<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Remove(dele, typeof(DelegateType));
        }
        /// <summary>
        /// 移除该类型委托
        /// </summary>
        /// <param name="deleType"></param>
        public void Remove(Type deleType)
        {
            //Monitor.Enter(locker);
            if (events.ContainsKey(deleType))
            {
                events[deleType].Dispose();
                events.Remove(deleType);
            }
            //Monitor.Exit(locker);
        }
        /// <summary>
        /// 移除该类型委托
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void Remove<T>()
        {
            Remove(typeof(T));
        }


        /// <summary>
        /// 返回同类型可空委托列表，禁止长期持有返回值的引用，该引用在对象池回收后无效，且可能存在元素的数量改变
        /// </summary>
        /// <param name="deleType"></param>
        /// <returns></returns>
        public List<Delegate> Get(Type deleType)
        {
            events.TryGetValue(deleType, out var result);
            return result?.Value;

        }


        /// <summary>
        /// 返回同类型可空委托列表，禁止长期持有返回值的引用，该引用在对象池回收后无效，且可能存在元素的数量改变
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <returns></returns>
        public List<Delegate> Get<DelegateType>()
        {
            return Get(typeof(DelegateType));
        }
        /// <summary>
        /// 清空委托组,同样影响Get拿到的值
        /// </summary>
        public void Clear()
        {
            //lock (locker)
            //{
                foreach (var dele in events)
                {
                    dele.Value.Dispose();
                }
                events.Clear();
           // }
        }

        protected override void OnDispose()
        {
            Clear();
        }
    }
}
