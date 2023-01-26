using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class MessageManager : Unit,IMessageManager
    {
        // MessageDispatcher dispatcher = new();

        private Dictionary<IMessageReceiver, UnitMessageDispatcher> dispatchers = new();

        private readonly object _locker = new object();

        public void Register<MessageType>(IMessageReceiver receiver, Action<MessageType> message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);

                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver, Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                dispatchers[receiver].Value.Register(message);
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver, Action<MessageType> message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver)) dispatchers[receiver].Value.Remove(message);
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver)) dispatchers[receiver].Value.Remove<MessageType>();
            }
        }
        public void RemoveAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Dispose();
                    dispatchers.Remove(receiver);
                }
            }
        }
        public void Send<MessageType>(IMessageReceiver receiver, MessageType message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                Type tp = typeof(MessageType);
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Invoke(message);
                }
            }
        }

        protected override void OnDispose()
        {
            lock(_locker)
            {
                foreach(var x in dispatchers) x.Value.Dispose();
                dispatchers.Clear();
            }
        }
    }
}
