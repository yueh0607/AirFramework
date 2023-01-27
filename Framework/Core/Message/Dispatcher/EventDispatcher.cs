
using System;
using System.Collections.Generic;

namespace AirFramework
{
    public partial class MessageDispatcher :Unit//, IMessageDispatcher
    {

        

        #region EventPart
        /// <summary>
        /// 用于存储Event
        /// </summary>
        private Dictionary<Type,UnitDelegateChain> pool= new();
                                                                                                  
        /// <summary>
        /// 以MessageType注册message
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void Register<MessageType>(Delegate message) where MessageType : IMessage
        {
            lock (pool)
            {
                Type tp = typeof(MessageType);
                if (pool.ContainsKey(tp))
                {
                    pool[tp].Value.Add(message);
                }
                else
                {
                    UnitDelegateChain udc = Framework.Pool.Allocate<UnitDelegateChain>();
                    udc.Value.AddAndSetType(message);
                    pool.Add(tp, udc); 
                }
            }
        }
        /// <summary>
        /// 移除具体Message监听
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void Remove<MessageType>(Delegate message) where MessageType : IMessage
        {
            lock (pool)
            {
                Type tp = typeof(MessageType);
                if (pool.ContainsKey(tp))
                {
                    pool[tp].Value.Remove(message);
                    if (pool[tp].Value.Count == 0)
                    {
                        Remove<MessageType>();
                    }
                }
            }
        }
        /// <summary>
        /// 移除某类Message监听
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        public void Remove<MessageType>() where MessageType : IMessage
        {
            lock (pool)
            {
                Type tp = typeof(MessageType);
                if (pool.ContainsKey(tp))
                {
                    pool[tp].Dispose();
                    pool.Remove(tp);
                    //dc.Dispose();
                }
            }
        }
        /// <summary>
        /// 移除全部监听
        /// </summary>
        public void RemoveAll()
        {
            lock (pool)
            {
                foreach (var tp in pool)
                {
                    tp.Value.Dispose();
                }
                pool.Clear();
            }
        }
        /// <summary>
        /// 获取此类消息的委托链
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public DelegateChain GetDelegateChain<MessageType>() where MessageType : IMessage
        {
            Type tp = typeof(MessageType);
            if(pool.ContainsKey(tp))
            {
                return pool[tp].Value;
            }
            return null;
        }
        #endregion
        
        
    }
}
