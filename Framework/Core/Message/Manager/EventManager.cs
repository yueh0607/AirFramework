using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor.VersionControl;

namespace AirFramework
{
    public partial class MessageManager
    {
        #region 注册
        /// <summary>
        /// 注册事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        /// 
        public void Subscribe(IMessageReceiver receiver, Type messageType, Delegate message)
        {
            lock (_locker)
            {
                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver, Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                dispatchers[receiver].Value.RegisterEvent(messageType, message);
            }
        }
        public void Subscribe<MessageType>(IMessageReceiver receiver, Delegate message)
        {
            Subscribe(receiver, typeof(MessageType), message);
        }
        public void Subscribe(IMessageReceiver receiver, Type messageType, Action message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }
        public void Subscribe<A>(IMessageReceiver receiver, Type messageType, Action<A> message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }
        public void Subscribe<A, B>(IMessageReceiver receiver, Type messageType, Action<A, B> message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }
        public void Subscribe<A, B, C>(IMessageReceiver receiver, Type messageType, Action<A, B, C> message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }
        public void Subscribe<A, B, C, D>(IMessageReceiver receiver, Type messageType, Action<A, B, C, D> message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }
        public void Subscribe<A, B, C, D, E>(IMessageReceiver receiver, Type messageType, Action<A, B, C, D, E> message)
        {
            Subscribe(receiver, messageType, (Delegate)message);
        }

        #endregion
        #region 移除
        /// <summary>
        /// 移除该对象该类型的某事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void UnSubscribe(IMessageReceiver receiver, Type messageType, Delegate message)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RemoveEvent(messageType, message);
                    CheckEmpty(receiver);
                }
            }
        }
        public void UnSubscribe<MessageType>(IMessageReceiver receiver, Delegate message)
        {
            UnSubscribe(receiver, typeof(MessageType), message);
        }
        public void UnSubscribe(IMessageReceiver receiver, Type messageType, Action message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }
        public void UnSubscribe<A>(IMessageReceiver receiver, Type messageType, Action<A> message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }
        public void UnSubscribe<A, B>(IMessageReceiver receiver, Type messageType, Action<A, B> message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }
        public void UnSubscribe<A, B, C>(IMessageReceiver receiver, Type messageType, Action<A, B, C> message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }
        public void UnSubscribe<A, B, C, D>(IMessageReceiver receiver, Type messageType, Action<A, B, C, D> message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }
        public void UnSubscribe<A, B, C, D, E>(IMessageReceiver receiver, Type messageType, Action<A, B, C, D, E> message)
        {
            UnSubscribe(receiver, messageType, (Delegate)message);
        }

        /// <summary>
        /// 移除该对象的该类型事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void UnSubscribe(IMessageReceiver receiver, Type messageType)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RemoveEvent(messageType);
                    CheckEmpty(receiver);
                }
            }
        }
        /// <summary>
        /// 移除对象全部事件
        /// </summary>
        /// <param name="receiver"></param>
        public void UnSubscribeAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Dispose();
                    dispatchers.Remove(receiver);
                }
            }
        }

        #endregion

        #region 发送

        private DelegateChain GetEvent(IMessageReceiver receiver, Type messageType)
        {

            if (dispatchers.ContainsKey(receiver))
            {
                return dispatchers[receiver].Value.GetEvents(messageType);
            }

            return null;

        }

        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Publish(IMessageReceiver receiver, Type messageType)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke();
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        public void Publish<A>(IMessageReceiver receiver, Type messageType, A a)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke(a);
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        public void Publish<A, B>(IMessageReceiver receiver, Type messageType, A a, B b)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke(a, b);
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        public void Publish<A, B, C>(IMessageReceiver receiver, Type messageType, A a, B b, C c)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke(a, b, c);
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <typeparam name="D"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        /// <param name="d"></param>
        public void Publish<A, B, C, D>(IMessageReceiver receiver, Type messageType, A a, B b, C c, D d)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke(a, b, c, d);
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <typeparam name="D"></typeparam>
        /// <typeparam name="E"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        /// <param name="d"></param>
        /// <param name="e"></param>
        public void Publish<A, B, C, D, E>(IMessageReceiver receiver, Type messageType, A a, B b, C c, D d, E e)
        {
            lock (_locker)
            {
                GetEvent(receiver, messageType)?.Invoke(a, b, c, d, e);
            }
        }

        #endregion

    }
}
