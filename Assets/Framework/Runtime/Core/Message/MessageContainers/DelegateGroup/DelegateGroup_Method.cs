/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.30
 * Description : 
 * 建立一个容器来存储多种类型的委托，这样就可以支持重载和多态
 * 对容器的每个操作都会影响来着容器的任意引用
 * 如Get拿到委托列表后Clear容器会导致Get到的List被回收，Remove和Add将可能导致List元素数量变化
 */


using System;
using System.Collections.Generic;
 
namespace AirFramework
{
    /// <summary>
    /// 委托组(方法组委托)
    /// </summary>
    public partial class DelegateGroup : Unit
    {
        internal static Func<UnitList<Delegate>> GetUnitListFromPool = () => Framework.Pool.Allocate<UnitList<Delegate>>();


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
            m_events.TryRemoveAndDispose(deleType);
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
        /// <typeparam name="DelegateType"></typeparam>
        /// <returns></returns>
        public List<Delegate> Get<DelegateType>()
        {
            return GetDelegateList(typeof(DelegateType));
        }
        /// <summary>
        /// 添加委托
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Add(Delegate dele, Type deleType)
        {
            m_events.GetValueOrAddDefault(deleType, GetUnitListFromPool).Value.Add(dele);
        }
        /// <summary>
        /// 移除委托
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Remove(Delegate dele, Type deleType)
        {
            if (m_events.TryGetValue(deleType, out var kvp))
            {
                kvp.Value.Remove(dele);
                if (kvp.Value.Count == 0)
                {
                    m_events.RemoveAndDispose(deleType);
                }
            }
        }

        /// <summary>
        /// 返回同类型可空委托列表，禁止长期持有返回值的引用，该引用在对象池回收后无效，且可能存在元素的数量改变
        /// </summary>
        /// <param name="deleType"></param>
        /// <returns></returns>
        public List<Delegate> GetDelegateList(Type deleType)
        {
            return m_events.GetValueOrDefault(deleType)?.Value;
        }



    }
}
