
using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class MessageDispatcher :Unit, IMessageDispatcher
    {
        private Dictionary<Type,UnitDelegateChain> pool= new();
                                                                                                    
        //private static DelegateChain CreateDelChain() { return new DelegateChain(); }

        public void Register<MessageType>(Action<MessageType> message) where MessageType : class,IMessage
        {
            lock (pool)
            {
                Type tp = typeof(MessageType);
                if (pool.ContainsKey(tp))
                {
                    pool[tp].Value.Add(message);
                }
                else {
                    UnitDelegateChain udc = Framework.Pool.Allocate<UnitDelegateChain>();
                    udc.Value.AddAndSetType(message);
                    pool.Add(tp, udc); 
                }
            }
        }
        public void Remove<MessageType>(Action<MessageType> message) where MessageType : class,IMessage
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
        public void Remove<MessageType>() where MessageType : class,IMessage
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
        public void Invoke<MessageType>(MessageType message) where MessageType : class,IMessage
        {
            Type tp = typeof(MessageType);
            if(pool.ContainsKey(tp))
            {
                pool[tp].Value.Invoke(message);
            }
        }

        protected override void OnDispose()
        {
            lock(pool)
            {
                foreach(var tp in pool)
                {
                    tp.Value.Dispose();
                }
                pool.Clear();
            }
        }
    }
}
