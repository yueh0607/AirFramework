
using System;
using System.Collections.Generic;
using System.Linq;

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : Unit, IMessageReceiver
    {
        #region Fields And Life 基础字段/属性/生命
        /// <summary>
        /// 消息派发器存储器
        /// </summary>
        private Dictionary<Type, UnitMessageDispatcher> dispatchers = new();
        /// <summary>
        /// Dispose时调用移除全部消息派发器
        /// </summary>
        protected override void OnDispose()
        {
            UnRegister();
        }
        #endregion

        #region Register/UnRegister 中心功能的基本实现-只允许在Framework内访问这些底层功能
        /// <summary>
        /// 基础消息注册
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="message"></param>
        internal void Register(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {

            if (!dispatchers.ContainsKey(messageType))
            {
                dispatchers.Add(messageType, Framework.Pool.Allocate<UnitMessageDispatcher>());
            }
            dispatchers[messageType].Value.Add(receiver, deleType, message);

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
            if (dispatchers.ContainsKey(messageType))
            {
                var dispatcher = dispatchers[messageType];
                dispatcher.Value.Remove(receiver, deleType, message);
                if (dispatcher.Value.Count == 0)
                {
                    dispatchers.Remove(messageType);
                    dispatcher.Dispose();
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

            if (dispatchers.ContainsKey(messageType))
            {
                var dispatcher = dispatchers[messageType];
                dispatcher.Value.Remove(receiver);
                if (dispatcher.Value.Count == 0)
                {
                    dispatchers.Remove(messageType);
                    dispatcher.Dispose();
                }
            }
        }
        /// <summary>
        /// 基础消息移除：移除全部该类型消息
        /// </summary>
        /// <param name="messageType"></param>
        internal void UnRegister(Type messageType)
        {

            if (dispatchers.ContainsKey(messageType))
            {
                var dispatcher = dispatchers[messageType];
                dispatchers.Remove(messageType);
                dispatcher.Dispose();
            }
        }
        /// <summary>
        /// 基础消息移除：移除全局所有消息
        /// </summary>
        internal void UnRegister()
        {
            foreach (var dispatcher in dispatchers)
            {
                dispatcher.Value.Dispose();
            }
            dispatchers.Clear();
        }



        /// <summary>
        /// 基础消息移除：移除对象身上全部消息
        /// </summary>
        /// <param name="receiver"></param>
        internal void UnRegister(IMessageReceiver receiver)
        {
            //此方式调用Linq产生GCAlloc弃用
            ////在foreach内无法判空移除，采用for位置指针遍历
            //for (int i = 0; i < dispatchers.Count; ++i)
            //{
            //    var dispatcher = dispatchers.ElementAt(i);
            //    dispatcher.Value.Value.Remove(receiver);
            //    if(dispatcher.Value.Value.Count==0)
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
        /// <summary>
        /// 基础分发器访问：获取指定类型消息分发器
        /// </summary>
        /// <param name="messageType"></param>
        /// <returns></returns>
        internal UnitMessageDispatcher GetDispatcher(Type messageType)
        {
            dispatchers.TryGetValue(messageType, out var dispatcher);
            return dispatcher;
        }
        /// <summary>
        /// 基础消息操作者访问：申请指定类型的消息操作者，receiver为空时为全局消息操作者
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="receiver"></param>
        /// <returns></returns>
        internal UnitDelegateGroup Operator(Type messageType, IMessageReceiver receiver=null)
        {
            return GetOrAddDispatcher(messageType).Value.GetOrAddGroup(receiver??this);
        }
        internal UnitMessageDispatcher GetOrAddDispatcher(Type messageType)
        {
            if(!dispatchers.ContainsKey(messageType))
            {
                dispatchers.Add(messageType, Framework.Pool.Allocate<UnitMessageDispatcher>());
            }
            return dispatchers[messageType];
        }
        #endregion

        #region Generic And Internal 中心功能的internal泛型实现
        /// <summary>
        /// 基础分发器访问：获取指定类型的消息分发器
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        internal UnitMessageDispatcher GetDispatcher<MessageType>() where MessageType : IMessage
        {
            return GetDispatcher(typeof(MessageType));
        }
        #endregion

        #region Generic And Extensions 中心功能的public泛型实现

        /// <summary>
        /// 消息操作者访问：申请指定类型的消息操作者，receiver为默认时返回全局操作者
        /// </summary>
        /// <typeparam name="MessageType">操作者类型</typeparam>
        /// <param name="receiver">操作对象</param>
        /// <returns></returns>
        public UnitDelegateGroup Operator<MessageType>(IMessageReceiver receiver=null) where MessageType : IMessage
        {
            return Operator(typeof(MessageType), receiver);
        }

        /// <summary>
        /// 消息移除：移除全局所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void Remove<T>() where T : IMessage
        {
            UnRegister(typeof(T));
        }

        /// <summary>
        /// 消息移除：移除该对象所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="receiver"></param>
        public void Remove<T>(IMessageReceiver receiver) where T : IMessage
        {
            UnRegister(typeof(T), receiver);
        }

        #endregion

    }
}
