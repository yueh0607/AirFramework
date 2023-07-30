/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 消息管理器的实现区,提供不能给外界任意访问的一些实现
 ********************************************************************************************/
using AirFramework.Internal;
using System;
namespace AirFramework
{

    public partial class MessageManager : IMessageReceiver
    {
        //静态创建委托，返回新的派发器
        internal readonly static Func<MessageDispatcherBox<IMessage>> CreateDispatcherBox = () => new MessageDispatcherBox<IMessage>();

        /// <summary>
        /// 基础消息注册
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void AddOperationToReceiver(Type messageType, IMessageReceiver receiver, Delegate message)
        {
            dispatchersContainer.GetValueOrAddDefault(messageType, CreateDispatcherBox).Value.AddToReceiver(receiver, message);
        }
        /// <summary>
        /// 基础消息移除
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal bool TryRemoveFromOperator(Type messageType, IMessageReceiver receiver, Delegate message)
        {
            //尝试获取派发器
            if (dispatchersContainer.TryGetValue(messageType, out var dispatcher))
            {
                //从派发器移除指定委托
                dispatcher.Value.TryRemoveFromReceiver(receiver, message);
                //移除空派发器
                if (dispatcher.Value.Count == 0)
                {
                    dispatcherPool.Recycle(dispatcher);
                    dispatchersContainer.Remove(messageType);
                }
            }
            return true;
        }
        /// <summary>
        /// 基础消息移除：移除接收者的全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        internal bool TryRemoveTypeFromReceiver(Type messageType, IMessageReceiver receiver)
        {
            //获取派发器
            if (dispatchersContainer.TryGetValue(messageType, out var dispatcher))
            {
                //移除全部委托
                dispatcher.Value.TryRemoveAllFromReceiver(receiver);
                //移除空派发器
                if (dispatcher.Value.Count == 0)
                {
                    dispatcherPool.Recycle(dispatcher);
                    dispatchersContainer.Remove(messageType);
                }
            }
            return true;
        }
        /// <summary>
        /// 基础消息移除：移除全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        internal bool TryRemoveTypeFromGlobal(Type messageType)
        {
            if(dispatchersContainer.ContainsKey(messageType))
            {
                dispatcherPool.Recycle(dispatchersContainer[messageType]);
                dispatchersContainer.Remove(messageType);
                return true;
            }
 
            return false;
        }
        /// <summary>
        /// 基础消息移除：移除全局所有消息
        /// </summary>
        internal void RemoveAllFromGlobal()
        {
            foreach(var dispatcher in dispatchersContainer)
            {
                dispatcherPool.Recycle(dispatcher.Value);
            }
            dispatchersContainer.Clear();
        }

        /// <summary>
        /// 基础消息移除：移除对象身上全部消息
        /// </summary>
        /// <param name="receiver"></param>
        internal bool TryRemoveAllFromReceiver(IMessageReceiver receiver)
        {
            var tempQueue = Framework.Pool.Allocate<UnitQueue<Type>>();
            foreach (var tempDispatcher in dispatchersContainer)
            {
                tempDispatcher.Value.Value.TryRemoveAllFromReceiver(receiver);
                if (tempDispatcher.Value.Value.Count == 0)
                {
                    tempQueue.Value.Enqueue(tempDispatcher.Key);
                }
            }
            while (tempQueue.Value.Count > 0) dispatchersContainer.Remove(tempQueue.Value.Dequeue());
            tempQueue.Dispose();
            return true;
        }


        /// <summary>
        /// 消息移除：移除全局所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public bool TryRemoveTypeFromGlobal<T>() where T : IMessage
        {
            return TryRemoveTypeFromGlobal(typeof(T));
        }

        /// <summary>
        /// 消息移除：移除该对象所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="receiver"></param>
        public bool TryRemoveTypeFromReceiver<T>(IMessageReceiver receiver) where T : IMessage
        {
            return TryRemoveTypeFromReceiver(typeof(T), receiver);
        }

    }
}
