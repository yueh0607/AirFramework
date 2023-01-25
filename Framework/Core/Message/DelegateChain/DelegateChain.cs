using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 用于实现委托链
    /// </summary>
    public class DelegateChain : Unit
    {

        public DelegateChain(Delegate chainHead)
        {
            ChainType = chainHead.GetType();
            Add(chainHead);
        }

        public Type ChainType{  get;set; }


        private LinkedList<Delegate> delegates = new LinkedList<Delegate>();


        public int Count => delegates.Count;
        //public LinkedList<Delegate> DelegateList => delegates;






        public void Remove(params Delegate[] message)
        {
            foreach (var del in message)
            {
                if (message.GetType() == ChainType)
                    delegates.Remove(del);
                else throw new ArgumentException("The delegation chain type does not match");
            }
        }
        public void Add(params Delegate[] message)
        {
            foreach (var del in message)
            {
                if (del.GetType() == ChainType)
                    delegates.AddLast(del);
                else throw new ArgumentException("The delegation chain type does not match");
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
