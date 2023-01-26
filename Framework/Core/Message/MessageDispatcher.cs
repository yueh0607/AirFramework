
using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class MessageDispatcher :Unit, IMessageDispatcher
    {
        private Dictionary<Type,UnitDelegateChain> pool= new();
        public int CountAll => pool.Count + questions.Count;                                                                                             
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
                else
                {
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









        private Dictionary<Type,Delegate> questions = new Dictionary<Type,Delegate>();

        public void Reply<RespondType,MessageType>(Func<MessageType,RespondType> message)
        {
            lock(questions)
            {
                Type tp = typeof(MessageType);
                if(questions.ContainsKey(tp))
                {
                    questions[tp] = message;
                }
                else
                {
                    questions.Add(tp, message);
                }
            }
        }
        public void Recall<MessageType>()
        {
            lock (questions)
            {
                if(questions.ContainsKey(typeof(MessageType)))
                {
                    questions.Remove(typeof(MessageType));
                }
            }
        }
        public RespondType Ask<MessageType,RespondType>(MessageType message) where MessageType : class,IMessage
        {
            Type  tp= typeof(MessageType);
            if (pool.ContainsKey(tp))
            {
                return (questions[tp] as Func<MessageType,RespondType>).Invoke(message);
            }
            return default;
        }
        public void RecallAll()
        {
            lock (questions)
            {
                foreach(var tp in pool)
                {
                    tp.Value.Dispose();
                }
                questions.Clear();
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
                questions.Clear();

            }
        }
    }
}
