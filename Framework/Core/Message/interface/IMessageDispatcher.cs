
using System;

namespace AirFramework
{
    public interface IMessageDispatcher
    {
        public void Register<MessageType>(Action<MessageType> message) where MessageType : IMessage
        ;
        public void Remove<MessageType>(Action<MessageType> message) where MessageType : IMessage
        ;
        public void Remove<MessageType>() where MessageType : IMessage;
        public void Invoke<MessageType>(MessageType message) where MessageType : IMessage;

        public int CountAll { get; }
        public void RemoveAll();

        public void Reply<RespondType, MessageType>(Func<MessageType, RespondType> message);
        public void Recall<MessageType>() where MessageType : IMessage;
        public RespondType Ask<MessageType, RespondType>(MessageType message) where MessageType : IMessage;
        public void RecallAll();

    }
}
