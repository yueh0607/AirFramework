using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 纯净池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class SuperPurePool<T> : Unit, IPool<T>
    {
        /// <summary>
        /// 缓存数量
        /// </summary>
        public int Count => queue.Count;


        private Queue<T> queue = new Queue<T>();


        

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public T Allocate()
        {
            if (Count == 0) throw new InvalidOperationException("Empty Pool Error");
            var item = queue.Dequeue();
            return item;
        }
        /// <summary>
        /// 回收对象
        /// </summary>
        /// <param name="item"></param>
        public void Recycle(T item)
        {

            queue.Enqueue(item);
        }
        /// <summary>
        /// 清空缓存
        /// </summary>
        public void Clear()
        {
            queue.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }

        
        public SuperPurePool()
        {
            
        }
    }
}
