
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IMessageDispatcher
    {
        public void Register<MessageType>(Action<MessageType> message) where MessageType : class, IMessage
        ;
        public void Remove<MessageType>(Action<MessageType> message) where MessageType : class, IMessage
        ;
        public void Remove<MessageType>() where MessageType : class, IMessage;
        public void Invoke<MessageType>(MessageType message) where MessageType : class, IMessage;
    }
}
