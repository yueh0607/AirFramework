﻿
using System;

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {


        internal UnitDelegateGroup Operator(Type messageType,IMessageReceiver receiver = null) 
        {
            return dispatchers.GetValueOrAddDefault(messageType, GetDispatcherFromPool).Value.GetOrAddGroup(receiver??this);
        }

        /// <summary>
        /// 消息操作者访问：申请指定类型的消息操作者，receiver为默认时返回全局操作者
        /// </summary>
        /// <typeparam name="MessageType">操作者类型</typeparam>
        /// <param name="receiver">操作对象</param>
        /// <returns></returns>
        public UnitDelegateGroup Operator<MessageType>(IMessageReceiver receiver=null) where MessageType : IMessage
        {
            return Operator(typeof(MessageType),receiver);
        }
        /// <summary>
        /// 消息派发器访问：获取指定类型的消息派发器
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public UnitMessageDispatcher Dispatcher<MessageType>() where MessageType : IMessage
        {
            return dispatchers.GetValueOrAddDefault(typeof(MessageType),GetDispatcherFromPool);
        }


    }
}
