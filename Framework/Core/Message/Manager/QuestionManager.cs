using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageManager //: IMessageManager
    {
        #region Response
        /// <summary,TResult>
        /// 回复问题
        /// </summary,TResult>
        /// <typeparam name="MessageType",TResult></typeparam,TResult>
        /// <param name="receiver",TResult></param,TResult>
        /// <param name="message",TResult></param,TResult>
        public void Response(IMessageReceiver receiver, Type messageType, Delegate message)
        {
            lock (_locker)
            {
                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver, Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                dispatchers[receiver].Value.AddRequest(messageType, message);
            }
        }
        public void Response<MessageType,TResult>(IMessageReceiver receiver, Delegate message)
        {
            Response(receiver,typeof(MessageType), message);
        }

        public void Response<A,TResult>(IMessageReceiver receiver,Type messageType, Func<A,TResult> message)
        {
            Response(receiver, messageType, message);
        }
        public void Response<A,B,TResult>(IMessageReceiver receiver, Type messageType, Func<A,B,TResult> message)
        {
            Response(receiver, messageType, message);
        }
        public void Response<A, B,C,TResult>(IMessageReceiver receiver, Type messageType, Func<A, B,C,TResult> message)
        {
            Response(receiver, messageType, message);
        }
        public void Response<A, B, C,D,TResult>(IMessageReceiver receiver, Type messageType, Func<A, B, C,D,TResult> message)
        {
            Response(receiver, messageType, message);
        }
        public void Response<A, B, C, D,E,TResult>(IMessageReceiver receiver, Type messageType, Func<A, B, C, D,E,TResult> message)
        {
            Response(receiver, messageType, message);
        }
        public void Response<A, B, C, D, E,F,TResult>(IMessageReceiver receiver, Type messageType, Func<A, B, C, D, E,F,TResult> message)
        {
            Response(receiver, messageType, message);
        }


        #endregion


        #region Recall
        /// <summary,TResult>
        /// 取消回复
        /// </summary,TResult>
        /// <typeparam name="MessageType",TResult></typeparam,TResult>
        /// <param name="receiver",TResult></param,TResult>
        public void Recall(IMessageReceiver receiver,Type messageType) 
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RemoveRequest(messageType);
                    CheckEmpty(receiver);
                }
            }
        }

        public void Recall<MessageType,TResult>(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RemoveRequest(typeof(MessageType));
                    CheckEmpty(receiver);
                }
            }
        }
        /// <summary,TResult>
        /// 取消全部
        /// </summary,TResult>
        /// <param name="receiver",TResult></param,TResult>
        public void RecallAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RecallAllRequests();
                    CheckEmpty(receiver);
                }
            }
        }

        #endregion
        #region Ask


        /// <summary,TResult>
        /// 询问
        /// </summary,TResult>
        /// <typeparam name="MessageType",TResult></typeparam,TResult>
        /// <typeparam name="",TResult></typeparam,TResult>
        /// <param name="receiver",TResult></param,TResult>
        /// <returns,TResult></returns,TResult>
        public  TResult Request<TResult>(IMessageReceiver receiver,Type messageType)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return(dispatchers[receiver].Value.GetRequest(messageType) as Func<TResult>).Invoke();
            }
            return default;
        }
        public  TResult Request<A, TResult>(IMessageReceiver receiver, Type messageType, A a)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRequest(messageType) as Func<A, TResult>).Invoke(a);
            }
            return default;
        }
        public  TResult Request<A, B, TResult>(IMessageReceiver receiver,Type messageType, A a, B b)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRequest(messageType) as Func<A, B, TResult>).Invoke(a, b);
            }
            return default;
        }
        public  TResult Request<A, B, C,TResult>(IMessageReceiver receiver,Type messageType, A a, B b, C c)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRequest(messageType) as Func<A, B, C, TResult>).Invoke(a, b, c);
            }
            return default;
        }
        public  TResult Request< A, B, C, D,TResult>(IMessageReceiver receiver, Type messageType, A a, B b, C c, D d) 
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRequest(messageType) as Func<A, B, C, D, TResult>).Invoke(a, b, c, d);
            }
            return default;
        }
        public  TResult Request< A, B, C, D, E,TResult>(IMessageReceiver receiver, Type messageType, A a, B b, C c, D d, E e) 
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver].Value.GetRequest(messageType) as Func<A, B, C, D, E, TResult>).Invoke(a, b, c, d, e);
            }
            return default;
        }
        #endregion



    }
}
