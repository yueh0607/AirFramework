using System;
using System.Collections.Generic;
using static PlasticGui.WorkspaceWindow.CodeReview.Summary.CommentSummaryData;

namespace AirFramework
{
    public class MessageManager : Unit,IMessageManager
    {
        // MessageDispatcher dispatcher = new();

        private Dictionary<IMessageReceiver, UnitMessageDispatcher> dispatchers = new();

        private readonly object _locker = new object();

        public void CheckEmpty(IMessageReceiver receiver)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                if (dispatchers[receiver].Value.CountAll == 0)
                {
                    dispatchers[receiver].Dispose();
                    dispatchers.Remove(receiver);
                }

            }
        }


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
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Remove(message);
                    CheckEmpty(receiver);
                }
            }
        }
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Remove<MessageType>();
                    CheckEmpty(receiver);
                }
            }
        }
        public void RemoveAll(IMessageReceiver receiver)
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Dispose();
                    //dispatchers.Remove(receiver);
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





        public void Reply<RespondType, MessageType>(IMessageReceiver receiver,Func<MessageType, RespondType> message) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (!dispatchers.ContainsKey(receiver))
                {
                    dispatchers.Add(receiver,Framework.Pool.Allocate<UnitMessageDispatcher>());
                }
                else
                {
                    dispatchers[receiver].Value.Reply(message);
                }
            }
        }
        public void Recall<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        {
            lock (_locker)
            {
                if (dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.Recall<MessageType>();
                    CheckEmpty(receiver);
                }
                
            }
        }
        public void RecallAll(IMessageReceiver receiver)
        {
            lock(_locker)
            {
                if(dispatchers.ContainsKey(receiver))
                {
                    dispatchers[receiver].Value.RecallAll();
                    CheckEmpty(receiver);
                }
            }
        }
        public RespondType Ask<MessageType, RespondType>(IMessageReceiver receiver,MessageType message) where MessageType : class, IMessage
        {
            if (dispatchers.ContainsKey(receiver))
            {
                return (dispatchers[receiver] as Func<MessageType, RespondType>).Invoke(message);
            }
            return default;
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
