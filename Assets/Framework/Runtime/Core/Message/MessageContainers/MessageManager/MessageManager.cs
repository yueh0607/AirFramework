
using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {
        /// <summary>
        /// 消息派发器存储器
        /// </summary>
        private Dictionary<Type, UnitMessageDispatcher> dispatchers = new();



        public override string Name => "MessageManager";


        protected override void OnDispose()
        {
            RemoveAll();
        }



        /// <summary>
        /// 消息移除：移除全局所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void RemoveAll<T>() where T : IMessage
        {
            RemoveAll(typeof(T));
        }

        /// <summary>
        /// 消息移除：移除该对象所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="receiver"></param>
        public void RemoveAll<T>(IMessageReceiver receiver) where T : IMessage
        {
            RemoveAll(typeof(T), receiver);
        }


    }
}
