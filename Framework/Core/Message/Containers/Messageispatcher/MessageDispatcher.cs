/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.30
 * Description : 
 * 抽象模型消息派发器，负责处理每类消息的派发任务，可以指定接收者与派发类型
 */


using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 消息分发器
    /// </summary>
    public class MessageDispatcher : Unit
    {

        /// <summary>
        /// 有效委托组数量
        /// </summary>
        public int Count => events.Count;

        private Dictionary<IMessageReceiver, UnitDelegateGroup> events = new();


        /// <summary>
        /// 访问：获取指定接收者的委托派发组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public UnitDelegateGroup GetGroup(IMessageReceiver receiver)
        {
            if (events.ContainsKey(receiver)) return events[receiver];
            return null;
        }
        /// <summary>
        /// 访问或添加：获取指定接收者的委托派发组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public UnitDelegateGroup GetOrAddGroup(IMessageReceiver receiver)
        {
            if (!events.ContainsKey(receiver))
            {
                events.Add(receiver, Framework.Pool.Allocate<UnitDelegateGroup>());
            }
            return events[receiver];
        }
        /// <summary>
        /// 添加：为接收者添加指定的委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public void Add(IMessageReceiver receiver, Type deleType,Delegate dele)
        {
            if (!events.ContainsKey(receiver))
            {
                events.Add(receiver, Framework.Pool.Allocate<UnitDelegateGroup>());
            }
            events[receiver].Value.Add(dele,deleType);
        }
        /// <summary>
        /// 移除：为接收者移除指定委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public void Remove(IMessageReceiver receiver,Type deleType, Delegate dele)
        {
            if (events.ContainsKey(receiver))
            {
                var group = events[receiver];
                group.Value.Remove(dele,deleType);
                if (group.Value.Count == 0)
                {
                    events.Remove(receiver);
                    group.Dispose();
                }
            }
        }
        /// <summary>
        /// 移除：为接收者移除全部委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public void Remove(IMessageReceiver receiver)
        {
            if (events.ContainsKey(receiver))
            {
                events[receiver].Dispose();
                events.Remove(receiver);
            }
        }
        /// <summary>
        /// 清空全部委托派发
        /// </summary>
        public void Clear()
        {
            foreach (var group in events)
            {
                group.Value.Dispose();
            }
            events.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }

        
        
    }
}
