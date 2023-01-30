using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor;
using UnityEditor.VersionControl;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 结构模型 - 消息类型/接收者对象/方法组/方法列表
    /// </summary>
    public partial class MessageManager : Unit, IMessageReceiver
    {
 
        /// <summary>
        /// 存储消息
        /// </summary>
        private Dictionary<Type, UnitMessageDispatcher> dispatchers = new();

        protected override void OnDispose()
        {
            UnRegister();
        }

        #region Subscribe/UnSubscribe
        
        internal void Register(Type messageType, IMessageReceiver receiver, Type deleType, Delegate message)
        {

            if (!dispatchers.ContainsKey(messageType))
            {
                dispatchers.Add(messageType, Framework.Pool.Allocate<UnitMessageDispatcher>());
            }
            dispatchers[messageType].Value.Add(receiver, deleType, message);

        }
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
        internal void UnRegister(Type messageType, IMessageReceiver receiver, Type deleType)
        {
            if (dispatchers.ContainsKey(messageType))
            {
                var dispatcher = dispatchers[messageType];
                dispatcher.Value.Remove(receiver, deleType);

                if (dispatcher.Value.Count == 0)
                {
                    dispatchers.Remove(messageType);
                    dispatcher.Dispose();
                }
            }
        }
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
        internal void UnRegister(Type messageType)
        {

            if (dispatchers.ContainsKey(messageType))
            {
                var dispatcher = dispatchers[messageType];
                dispatchers.Remove(messageType);
                dispatcher.Dispose();
            }
        }
        internal void UnRegister()
        {
            foreach (var dispatcher in dispatchers)
            {
                dispatcher.Value.Dispose();
            }
            dispatchers.Clear();
        }

        internal UnitMessageDispatcher GetDispatcher(Type messageType)
        {
            dispatchers.TryGetValue(messageType, out var dispatcher);
            return dispatcher;
        }
        #endregion

        #region Generic

        public UnitMessageDispatcherContanier Operator<MessageType>(IMessageReceiver receiver = null) where MessageType : IMessage
        {
            var contanier = Framework.Pool.Allocate<UnitMessageDispatcherContanier>();
            contanier.Value.TypeValue = typeof(MessageType);
            contanier.Value.Receiver = receiver ?? this;
            return contanier;
        }
        public void Remove<T>() where T : IMessage
        {
            UnRegister(typeof(T));
        }


        
        internal UnitMessageDispatcher GetDispatcher<MessageType>() where MessageType : IMessage
        {
            return GetDispatcher(typeof(MessageType));
        }


        #endregion

    }
}
