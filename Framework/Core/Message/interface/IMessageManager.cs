using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IMessageManager
    {
        public void Register<MessageType>(IMessageReceiver receiver, Action<MessageType> message) where MessageType : class, IMessage;
        public void Remove<MessageType>(IMessageReceiver receiver, Action<MessageType> message) where MessageType : class, IMessage
        ;
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage;
        public void RemoveAll(IMessageReceiver receiver);
        public void Send<MessageType>(IMessageReceiver receiver, MessageType message) where MessageType : class, IMessage;



        public void Reply<RespondType, MessageType>(IMessageReceiver receiver, Func<MessageType, RespondType> message) where MessageType : class, IMessage;
        public void Recall<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage;
        public void RecallAll(IMessageReceiver receiver) ;
        public RespondType Ask<MessageType, RespondType>(IMessageReceiver receiver, MessageType message) where MessageType : class, IMessage;
    }
}
