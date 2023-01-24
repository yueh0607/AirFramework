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
        public Dictionary<IMessageReceiver,Action<IMessage>> pool= new();

        public void Register<MessageType>(IMessageReceiver receiver,Action<MessageType> message) where MessageType : class,IMessage
        {
            if(pool.ContainsKey(receiver))
            {
                pool[receiver]=((pool[receiver] as Action<MessageType>) + message) as Action<IMessage>;
            }
            else pool.Add(receiver,message as Action<IMessage>);
        }

    }
}
