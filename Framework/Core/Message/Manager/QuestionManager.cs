using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageManager : IMessageManager
    {
        #region QuestionModule
        /// <summary>
        /// 回复问题
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Reply<MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver, Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                else
                {
                    dispatchers[receiver].Value.Reply<MessageType>(message);
                }
            }
        }
        /// <summary>
        /// 取消回复
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Recall<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Recall<MessageType>();
                    CheckEmpty(receiver);
                }

            }
        }
        /// <summary>
        /// 取消全部
        /// </summary>
        /// <param name="receiver"></param>
        public void RecallAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RecallAll();
                    CheckEmpty(receiver);
                }
            }
        }
        /// <summary>
        /// 询问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public RespondType Ask<MessageType, RespondType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<RespondType>).Invoke();
            }
            return default;
        }
        public RespondType Ask<MessageType, RespondType, A>(IMessageReceiver receiver, A a) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<A, RespondType>).Invoke(a);
            }
            return default;
        }
        public RespondType Ask<MessageType, RespondType, A, B>(IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<A, B, RespondType>).Invoke(a, b);
            }
            return default;
        }
        public RespondType Ask<MessageType, RespondType, A, B, C>(IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<A, B, C, RespondType>).Invoke(a, b, c);
            }
            return default;
        }
        public RespondType Ask<MessageType, RespondType, A, B, C, D>(IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<A, B, C, D, RespondType>).Invoke(a, b, c, d);
            }
            return default;
        }
        public RespondType Ask<MessageType, RespondType, A, B, C, D, E>(IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRespondFunc<MessageType>() as Func<A, B, C, D, E, RespondType>).Invoke(a, b, c, d, e);
            }
            return default;
        }
        #endregion



    }
}
