/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.30
 * Description : 
 * 抽象模型消息派发器，负责处理每类消息的派发任务，可以指定接收者与派发类型
 */


using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    /// <summary>
    /// 消息分发器
    /// </summary>
    public partial class MessageDispatcher : Unit
    {

        //这里使用静态创建方法来简化下面获取Dispatcher的代码，同时避免GC分配
        internal static Func<UnitDelegateGroup> GetGroupFromPool = () => Framework.Pool.Allocate<UnitDelegateGroup>();


        /// <summary>
        /// 访问：获取指定接收者的委托派发组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public UnitDelegateGroup GetGroup(IMessageReceiver receiver)
        {
            return events.GetValueOrDefault(receiver, null);
        }
        /// <summary>
        /// 访问或添加：获取指定接收者的委托派发组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public UnitDelegateGroup GetOrAddGroup(IMessageReceiver receiver)
        {
            return events.GetValueOrAddDefault(receiver, GetGroupFromPool);
        }
        /// <summary>
        /// 添加：为接收者添加指定的委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public void Add(IMessageReceiver receiver, Type deleType, Delegate dele)
        {
            events.GetValueOrAddDefault(receiver, GetGroupFromPool).Value.Add(dele, deleType);
        }
        /// <summary>
        /// 移除：为接收者移除指定委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public void Remove(IMessageReceiver receiver, Type deleType, Delegate dele)
        {
            if (events.TryGetValue(receiver, out var group))
            {
                group.Value.Remove(dele, deleType);
                if (group.Value.Count == 0)
                {
                    events.RemoveAndDispose(receiver);
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
            events.TryRemoveAndDispose(receiver);
        }


    }
}
