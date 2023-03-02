
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.VersionControl;

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {

        internal static Func<UnitMessageDispatcher> GetDispatcherFromPool = () => Framework.Pool.Allocate<UnitMessageDispatcher>();

        /// <summary>
        /// 基础消息注册
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void Register(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {
            dispatchers.GetValueOrAddDefault(messageType,GetDispatcherFromPool).Value.Add(receiver, deleType, message);
        }
        /// <summary>
        /// 基础消息移除
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void UnRegister(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {
            if(dispatchers.TryGetValue(messageType,out var dispatcher))
            {
                dispatcher.Value.Remove(receiver, deleType, message);
                if (dispatcher.Value.Count == 0)
                {
                    dispatchers.RemoveAndDispose(messageType);
                }
            }
        }
        /// <summary>
        /// 基础消息移除：移除接收者的全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        internal void UnRegister(Type messageType, IMessageReceiver receiver)
        {

            if (dispatchers.TryGetValue(messageType, out var dispatcher))
            {
                dispatcher.Value.Remove(receiver);
                if (dispatcher.Value.Count == 0)
                {
                    dispatchers.RemoveAndDispose(messageType);
                }
            }
        }
        /// <summary>
        /// 基础消息移除：移除全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        internal void UnRegister(Type messageType)
        {
            dispatchers.TryRemoveAndDispose(messageType);
        }
        /// <summary>
        /// 基础消息移除：移除全局所有消息
        /// </summary>
        internal void UnRegister()
        {
            dispatchers.ClearAndDispose();
        }

        /// <summary>
        /// 基础消息移除：移除对象身上全部消息
        /// </summary>
        /// <param name="receiver"></param>
        internal void UnRegister(IMessageReceiver receiver)
        {
            //此方式调用Linq产生GCAlloc弃用
            ////在foreach内无法判空移除，采用for位置指针遍历
            //for (int i = 0; i < dispatchers.CountPull; ++i)
            //{
            //    var dispatcher = dispatchers.ElementAt(i);
            //    dispatcher.Value.Value.Remove(receiver);
            //    if(dispatcher.Value.Value.CountPull==0)
            //    {
            //        dispatchers.Remove(dispatcher.Key);
            //        --i;
            //    }
            //}

            var queue = Framework.Pool.Allocate<UnitQueue<Type>>();
            foreach(var dispatcher in dispatchers)
            {
                dispatcher.Value.Value.Remove(receiver);
                if (dispatcher.Value.Value.Count == 0)
                {
                    queue.Value.Enqueue(dispatcher.Key);
                }
            }
            while(queue.Value.Count > 0) dispatchers.Remove(queue.Value.Dequeue());
            queue.Dispose();
        }
        
    }
}
