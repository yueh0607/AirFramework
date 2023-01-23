using System;
using System.Collections.Generic;


namespace AirFramework
{
    public class MyUnit : UnitPoolObject<MyUnit>
    {
        public override void OnAllocateItem()
        {
            throw new NotImplementedException();
        }

        public override void OnRecycleItem()
        {
            throw new NotImplementedException();
        }
    }

    public class MessageAlloter
    {
        private readonly Dictionary<IMessage, DelegateChain> pool = new();

        public void Register(IMessage messageType, Delegate message)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Add(message);
            }
            pool.Add(messageType, new DelegateChain(message));
        }
        public void Remove(IMessage messageType, Delegate message)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Remove(message);
            }
            if (pool[messageType].Count == 0) pool.Remove(messageType);
        }
        public void Remove(IMessage messageType)
        {
            if (pool.ContainsKey(messageType))
            {
                pool.Remove(messageType);
            }
        }
         
        
        public void Invoke(IMessage messageType)
        {
            if(pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke();
            }
        }
        public void Invoke<A>(IMessage messageType,A a)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke(a);
            }
        }
        public void Invoke<A,B>(IMessage messageType, A a,B b)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke(a,b);
            }
        }
        public void Invoke<A, B, C>(IMessage messageType, A a, B b, C c)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke(a, b, c);
            }
            //.
        }
        public void Invoke<A, B, C, D>(IMessage messageType, A a, B b, C c,D d)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke(a, b, c ,d);
            }
        }
        public void Invoke<A, B, C, D , E>(IMessage messageType, A a, B b, C c, D d,E e)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Invoke(a, b, c, d,e);
            }
        }

    }
}
