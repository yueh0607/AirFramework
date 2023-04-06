
using System;

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {

        internal static Func<UnitMessageDispatcher> GetDispatcherFromNew = () => new UnitMessageDispatcher();

        /// <summary>
        /// 基础消息注册
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void Add(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {
            m_dispatchers.GetValueOrAddDefault(messageType, GetDispatcherFromNew).Value.Add(receiver, deleType, message);
        }
        /// <summary>
        /// 基础消息移除
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void Remove(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {
            if (m_dispatchers.TryGetValue(messageType, out var dispatcher))
            {
                dispatcher.Value.Remove(receiver, deleType, message);
                if (dispatcher.Value.Count == 0)
                {
                    m_dispatchers.Remove(messageType);   //dispose
                }
            }
        }
        /// <summary>
        /// 基础消息移除：移除接收者的全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        internal void RemoveAll(Type messageType, IMessageReceiver receiver)
        {

            if (m_dispatchers.TryGetValue(messageType, out var dispatcher))
            {
                dispatcher.Value.Remove(receiver);
                if (dispatcher.Value.Count == 0)
                {
                    m_dispatchers.Remove(messageType);  //dispose
                }
            }
        }
        /// <summary>
        /// 基础消息移除：移除全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        internal void RemoveAll(Type messageType)
        {
            m_dispatchers.TryRemove(messageType);  //dispose
        }
        /// <summary>
        /// 基础消息移除：移除全局所有消息
        /// </summary>
        internal void RemoveAll()
        {
            m_dispatchers.Clear();   //dispose
        }

        /// <summary>
        /// 基础消息移除：移除对象身上全部消息
        /// </summary>
        /// <param name="receiver"></param>
        internal void RemoveAllFromReceiver(IMessageReceiver receiver)
        {
            var queue = Framework.Pool.Allocate<UnitQueue<Type>>();
            foreach (var dispatcher in m_dispatchers)
            {
                dispatcher.Value.Value.Remove(receiver);
                if (dispatcher.Value.Value.Count == 0)
                {
                    queue.Value.Enqueue(dispatcher.Key);
                }
            }
            while (queue.Value.Count > 0) m_dispatchers.Remove(queue.Value.Dequeue());
            queue.Dispose();
        }

    }
}
