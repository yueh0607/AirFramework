/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 操作器实现
 ********************************************************************************************/


using System;
using System.Collections.Generic;
namespace AirFramework
{
    /// <summary>
    /// 事件组(方法组事件)
    /// </summary>
    public partial class MessageOperator : Unit
    {
        internal readonly static Func<UnitList<Delegate>> GetUnitListFromPool = () => Framework.Pool.Allocate<UnitList<Delegate>>();

        /// <summary>
        /// 添加新的事件，通过GetType取得类型
        /// </summary>
        /// <param name="dele"></param>
        public void Add(Delegate dele)
        {
            Add(dele, dele.GetType());
        }
        /// <summary>
        /// 添加新的事件，通过typeof取得类型
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <param name="dele"></param>
        public void Add<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Add(dele, typeof(DelegateType));
        }
        /// <summary>
        /// 添加事件
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Add(Delegate dele, Type deleType)
        {
            if (eventsContainer == null) throw new InvalidOperationException("Add Error");
            eventsContainer.GetValueOrAddDefault(deleType, GetUnitListFromPool).Value.Add(dele);
        }
        /// <summary>
        /// 存在则移除事件，通过GetType取得类型
        /// </summary>
        /// <param name="dele"></param>
        public bool TryRemove(Delegate dele)
        {
            Remove(dele, dele.GetType());
            return true;
        }
        /// <summary>
        /// 存在则移除事件，typeof取得类型
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <param name="dele"></param>
        public bool TryRemove<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Remove(dele, typeof(DelegateType));
            return true;
        }
        /// <summary>
        /// 移除该类型事件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public bool TryRemoveType<T>()
        {
            return TryRemoveType(typeof(T));
        }

        /// <summary>
        /// 移除该类型事件
        /// </summary>
        /// <param name="deleType"></param>
        public bool TryRemoveType(Type deleType)
        {
            eventsContainer.TryRemoveAndDispose(deleType);
            return true;
        }


        public void RemoveAll()
        {
            Clear();
        }


        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="dele"></param>
        /// <param name="deleType"></param>
        public void Remove(Delegate dele, Type deleType)
        {
            if (eventsContainer.TryGetValue(deleType, out var kvp))
            {
                kvp.Value.Remove(dele);
                if (kvp.Value.Count == 0)
                {
                    eventsContainer.RemoveAndDispose(deleType);
                }
            }
        }


        /// <summary>
        /// 返回同类型可空事件列表，禁止长期持有返回值的引用
        /// </summary>
        /// <typeparam name="DelegateType"></typeparam>
        /// <returns></returns>
        public List<Delegate> GetNullableDelegateList<DelegateType>()
        {
            return GetNullableDelegateList(typeof(DelegateType));
        }


        /// <summary>
        /// 返回同类型可空事件列表，禁止长期持有返回值的引用
        /// </summary>
        /// <param name="deleType"></param>
        /// <returns></returns>
        public List<Delegate> GetNullableDelegateList(Type deleType)
        {
            return eventsContainer.GetValueOrDefault(deleType)?.Value;
        }


      
     


    }
}
