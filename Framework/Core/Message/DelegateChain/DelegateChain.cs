using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class DelegateChain : Unit
    {

        public DelegateChain(params Delegate[] chain)
        {
            Add(chain);
        }

        public Type ChainType{  get;set; }


        LinkedList<Delegate> delegates = new LinkedList<Delegate>();


        public int Count => delegates.Count;
        //public LinkedList<Delegate> DelegateList => delegates;

        public void Remove(params Delegate[] message)
        {
            foreach (var del in message)
            {
                if (message.GetType() == ChainType)
                    delegates.Remove(del);
                else throw new ArgumentException("All Delegates in chain must be same type");
            }
        }
        public void Add(params Delegate[] message)
        {
            foreach (var del in message)
            {
                if (del.GetType() == ChainType)
                    delegates.AddLast(del);
                else throw new ArgumentException("All Delegates in chain must be same type");
            }
        }
        public void Clear() { delegates.Clear(); }

        protected override void OnDispose()
        {
            Clear();
        }

        public void Invoke()
        {
            foreach(var del in delegates)
            {
                (del as Action)?.Invoke();
            }
        }
        public void Invoke<A>(A a)
        {
            foreach (var del in delegates)
            {
                (del as Action<A>)?.Invoke(a);
            }
        }
        public void Invoke<A,B>(A a,B b)
        {
            foreach (var del in delegates)
            {
                (del as Action<A,B>)?.Invoke(a,b);
            }
        }
        public void Invoke<A, B,C >(A a, B b,C c)
        {
            foreach (var del in delegates)
            {
                (del as Action<A, B,C>)?.Invoke(a, b,c);
            }
        }
        public void Invoke<A, B, C,D>(A a, B b, C c,D d)
        {
            foreach (var del in delegates)
            {
                (del as Action<A, B, C,D>)?.Invoke(a, b, c,d);
            }
        }
        public void Invoke<A, B, C, D,E>(A a, B b, C c, D d,E e)
        {
            foreach (var del in delegates)
            {
                (del as Action<A, B, C, D,E>)?.Invoke(a, b, c, d,e);
            }
        }
    }
}
