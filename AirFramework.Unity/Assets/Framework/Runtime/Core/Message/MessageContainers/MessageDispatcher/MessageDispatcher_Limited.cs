/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 派发器方法定义，实现一些受限访问的方法
 ********************************************************************************************/

using AirFramework.Internal;
using System;
namespace AirFramework
{
    public partial class MessageDispatcher : Unit
    {

        //这里使用静态创建方法来简化下面获取Dispatcher的代码，同时避免GC
        internal readonly static Func<MessageOperatorBox<IMessage>> CreateOperator = () =>Framework.Message.operatorPool.Allocate();

        /// <summary>
        /// 访问或添加：获取指定接收者的委托组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        internal MessageOperatorBox<IMessage> GetOrAddOperator(IMessageReceiver receiver)
        {
            return EventsContainer.GetValueOrAddDefault(receiver, CreateOperator);
        }
        /// <summary>
        /// 访问或添加：尝试获取指定接收者的委托组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        internal MessageOperatorBox<IMessage> GetOperatorOrDefault(IMessageReceiver receiver)
        {
            if (EventsContainer.TryGetValue(receiver, out var result))
            {
                return result;
            }
            return null;
        }

        /// <summary>
        /// 添加：为接收者添加指定的委托
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        internal void AddToReceiver(IMessageReceiver receiver, Delegate dele)
        {
            EventsContainer.GetValueOrAddDefault(receiver, CreateOperator).Value.Add(dele);
        }
        /// <summary>
        /// 移除：为接收者移除指定委托
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        internal bool TryRemoveFromReceiver(IMessageReceiver receiver, Delegate dele)
        {
            if (EventsContainer.TryGetValue(receiver, out var group))
            {
                group.Value.Remove(dele);
                if (group.Value.Count == 0)
                {
                    Framework.Message.operatorPool.Recycle(group);
                    EventsContainer.Remove(receiver);
                }
            }
            return true;
        }
        /// <summary>
        /// 移除：为接收者移除全部委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public bool TryRemoveAllFromReceiver(IMessageReceiver receiver)
        {
            if(EventsContainer.ContainsKey(receiver))
            {
                Framework.Message.operatorPool.Recycle(EventsContainer[receiver]);
                EventsContainer.Remove(receiver);
                return true;
            }
            return false;
        }
    }
}
