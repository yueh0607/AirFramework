using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 用于实现委托链,防止委托拼接产生的GC，只允许存储同类委托
    /// </summary>
    public class DelegateChain : Unit,IInitialized
    {
        
        bool initialized = false;
        /// <summary>
        /// 委托链是否初始化
        /// </summary>
        public bool Initialized => initialized;

        /// <summary>
        /// 此方式初始化可以直接使用
        /// </summary>
        /// <param name="chainHead"></param>
        public DelegateChain(Delegate chainHead)
        {
            AddAndSetType(chainHead);
        }
        /// <summary>
        /// 提示：如果您这样初始化，则需要调用AddAndSetType方法，否则您的Add和Remove将可能抛出异常
        /// </summary>
        public DelegateChain()
        {

        }
        /// <summary>
        /// 添加并设置委托链类型
        /// </summary>
        /// <param name="chainHead"></param>
        /// <returns></returns>
        public DelegateChain AddAndSetType(Delegate chainHead)
        {
            ChainType = chainHead.GetType();
            Add(chainHead);
            initialized= true;
            return this;
        }
        /// <summary>
        /// 委托链类型
        /// </summary>
        public Type ChainType{  get;protected set; } = typeof(Delegate);


        private LinkedList<Delegate> delegates = new LinkedList<Delegate>();

        /// <summary>
        /// 委托链委托数量
        /// </summary>
        public int Count => delegates.Count;

        /// <summary>
        /// 从委托链中删除，类型不匹配抛出异常
        /// </summary>
        /// <param name="message"></param>
        /// <exception cref="ArgumentException"></exception>
        public void Remove(params Delegate[] message)
        {
            foreach (var del in message)
            {
                if (message.GetType() == ChainType)
                    delegates.Remove(del);
                else throw new ArgumentException("The delegation chain type does not match");
            }
        }
        /// <summary>
        /// 添加到委托链，类型不匹配抛出异常
        /// </summary>
        /// <param name="message"></param>
        /// <exception cref="ArgumentException"></exception>
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
