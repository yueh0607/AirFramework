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
        internal readonly static Func<MessageOperatorBox<IMessage>> CreateOperator = () => new MessageOperatorBox<IMessage>();

        /// <summary>
        /// 访问或添加：获取指定接收者的委托组
        /// </summary>
        /// <param name="receiver"></param>
        /// <returns></returns>
        internal MessageOperatorBox<IMessage> GetOrAddOperator(IMessageReceiver receiver)
        {
            return eventsContainer.GetValueOrAddDefault(receiver, CreateOperator);
        }
        /// <summary>
        /// 添加：为接收者添加指定的委托
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        internal void AddToReceiver(IMessageReceiver receiver, Type deleType, Delegate dele)
        {
            eventsContainer.GetValueOrAddDefault(receiver, CreateOperator).Value.Add(dele, deleType);
        }
        /// <summary>
        /// 移除：为接收者移除指定委托
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        internal bool TryRemoveFromReceiver(IMessageReceiver receiver, Type deleType, Delegate dele)
        {
            if (eventsContainer.TryGetValue(receiver, out var group))
            {
                group.Value.Remove(dele, deleType);
                if (group.Value.Count == 0)
                {
                    eventsContainer.Remove(receiver);
                }
            }
            return true;
        }




    }
}
