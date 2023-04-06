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
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 委托组(方法组委托)
    /// </summary>
    public partial class MessageOperator : Unit
    {

        //private Dictionary<Type, UnitList<Delegate>> events = new();
        internal DynamicQueue<Type, UnitList<Delegate>> m_events = new();

        /// <summary>
        /// 委托类型数
        /// </summary>
        public int Count => m_events.Count;
        /// <summary>
        /// 委托总数(计算重载)
        /// </summary>
        public int CountAll
        {
            get
            {
                int allCount = 0;
                foreach (var kvp in m_events)
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

        public void Clear()
        {
            m_events.ClearAndDispose();
        }

    }
}
