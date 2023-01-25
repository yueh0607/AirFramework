using AirFramework.Assets.Framework.Core.Message;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace AirFramework
{
    public class MessageDispatcher
    {
        private Dictionary<IMessageReceiver,DelegateChain> pool= new();

        //private static DelegateChain CreateDelChain() { return new DelegateChain(); }
        

        public void Register<MessageType>(IMessageReceiver receiver,Action<MessageType> message) where MessageType : class,IMessage
        {
            lock (pool)
            {
                if (pool.ContainsKey(receiver))
                {
                    pool[receiver].Add(message);
                }
                else pool.Add(receiver, Framework.UnitPool.Allocate<UnitDelegateChain>().Value.AddAndSetType(message));
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver,Action<MessageType> message) where MessageType : class,IMessage
        {
            lock (pool)
            {
                if (pool.ContainsKey(receiver))
                {
                    pool[receiver].Remove(message);
                    if (pool[receiver].Count == 0)
                    {
                        Remove<MessageType>(receiver);
                    }
                }
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class,IMessage
        {
            lock (pool)
            {
                if (pool.ContainsKey(receiver))
                {
                    DelegateChain dc = pool[receiver];
                    pool.Remove(receiver);
                    dc.Dispose();
                }
            }
        }
        public void Invoke<MessageType>(IMessageReceiver receiver,MessageType message) where MessageType : class,IMessage
        {
            if(pool.ContainsKey(receiver))
            {
                pool[receiver].Invoke(message);
            }  
        }
    }
}
