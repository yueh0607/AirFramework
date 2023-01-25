using AirFramework.Assets.Framework.Core.Message;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class MessageDispatcher
    {
        public Dictionary<IMessageReceiver,DelegateChain> pool= new();

        public void Register<MessageType>(IMessageReceiver receiver,Action<MessageType> message) where MessageType : class,IMessage
        {
            if(pool.ContainsKey(receiver))
            {
                pool[receiver].Add(message);
            }
            else pool.Add(receiver,new DelegateChain(message));
        }
        public void Remove<MessageType>(IMessageReceiver receiver,Action<MessageType> message) where MessageType : class,IMessage
        {
            if(pool.ContainsKey(receiver))
            {
                pool[receiver].Remove(message);
                if (pool[receiver].Count==0)
                {
                    pool.Remove(receiver);
                }
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class,IMessage
        {
            if(pool.ContainsKey(receiver))
            {
                pool.Remove(receiver);
            }
        }

        public void Invoke<MessageType>(IMessageReceiver receiver,MessageType message) where MessageType : class,IMessage
        {
            pool[receiver].Invoke(message);
        }
    }
}
