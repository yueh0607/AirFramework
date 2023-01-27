using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageManager : IMessageManager
    {
        #region EventModule
        /// <summary>
        /// 注册事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Register<MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);

                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver, Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                dispatchers[receiver].Value.Register<MessageType>(message);
            }
        }
        /// <summary>
        /// 移除该对象该类型的某事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Remove<MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Remove<MessageType>(message);
                    CheckEmpty(receiver);
                }
            }
        }
        /// <summary>
        /// 移除该对象的该类型事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Remove<MessageType>();
                    CheckEmpty(receiver);
                }
            }
        }
        /// <summary>
        /// 移除对象全部事件
        /// </summary>
        /// <param name="receiver"></param>
        public void RemoveAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Dispose();
                    //dispatchers.Remove(receiver);
                    dispatchers.Remove(receiver);
                }
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Send<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke();
                }
            }
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        public void Send<MessageType, A>(IMessageReceiver receiver, A a) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke(a);
                }
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
        public void Send<MessageType, A, B>(IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke(a, b);
                }
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
        public void Send<MessageType, A, B, C>(IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke(a, b, c);
                }
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
        public void Send<MessageType, A, B, C, D>(IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke(a, b, c, d);
                }
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
        public void Send<MessageType, A, B, C, D, E>(IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.GetDelegateChain<MessageType>().Invoke(a, b, c, d, e);
                }
            }
        }

        #endregion

    }
}
