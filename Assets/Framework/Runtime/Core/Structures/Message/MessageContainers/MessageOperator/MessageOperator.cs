/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 消息操作器定义
 ********************************************************************************************/

using System;
namespace AirFramework
{
    /// <summary>
    /// 委托组(方法组委托)
    /// </summary>
    public partial class MessageOperator : Unit
    {
        internal DynamicQueue<Type, UnitList<Delegate>> eventsContainer = new();

        /// <summary>
        /// 委托类型数
        /// </summary>
        public int Count => eventsContainer.Count;
        /// <summary>
        /// 委托总数(计算重载),复杂度O(n)
        /// </summary>
        public int CountAll
        {
            get
            {
                int allCount = 0;
                foreach (var kvp in eventsContainer)
                {
                    allCount += kvp.Value.Value.Count;
                }
                return allCount;
            }
        }

        protected override void OnDispose()
        {
            Clear();
        }

        /// <summary>
        /// 清空操作器
        /// </summary>
        internal void Clear()
        {
            eventsContainer.ClearAndDispose();
        }

    }
}
