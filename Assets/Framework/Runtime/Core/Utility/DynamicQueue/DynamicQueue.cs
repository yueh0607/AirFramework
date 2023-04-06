/********************************************************************************************
 * Date : 2023.1.30
 * Description : 
 * 可顺序遍历且可以随机移除的队列
 ********************************************************************************************/


using System;
using System.Collections;
using System.Collections.Generic;

namespace AirFramework
{
    public class DynamicQueue<T, K>:IEnumerable<KeyValuePair<T,K>> where T : notnull
    {
        private Queue<T> queue;
        private Dictionary<T, K> dictionary;
        private Dictionary<T, int> state;
        
        public DynamicQueue()
        {
            queue = new Queue<T>();
            dictionary = new Dictionary<T, K>();
            state = new Dictionary<T, int>();
        }

        public int Count => dictionary.Count;



        public int TraversalCount { get; private set; } = 0;
       
        public void RefreshTraversalCount()=>TraversalCount=queue.Count;


        /// <summary>
        /// 入队
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        public void Enqueue(T key, K value)
        {

            if (TryEnqueue(key, value)) return;
            throw new ArgumentException("Same key exists");


        }
        public bool TryEnqueue(T key,K value)
        {
            if (!dictionary.TryAdd(key, value))
            {
                return false;
            }
            queue.Enqueue(key);
            return true;
        }
        /// <summary>
        /// 从队中移除
        /// </summary>
        /// <param name="key"></param>
        public void Remove(T key)
        {
            if(!TryRemove(key))
            {
                throw new ArgumentException("error remove key ");
            }
        }
        public bool TryRemove(T key)
        {
            if (dictionary.ContainsKey(key))
            {
                dictionary.Remove(key);
                //Count--;
                if (state.ContainsKey(key)) state[key]++;
                else state.Add(key, 1);

                return true;
            }

            return false;
        }

        /// <summary>
        /// 尝试获取队首
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool TryPeek(out K result)
        {
            do
            {
                if (queue.TryPeek(out var key))
                {
                    if (state.TryGetValue(key, out int count))
                    {
                        state[key] = --count;
                        if(TraversalCount >0) TraversalCount--;
                        if (count == 0) state.Remove(key);
                        queue.Dequeue();
                    }
                    else return dictionary.TryGetValue(key, out result);
                }
                else
                {
                    result = default;
                    return false;
                }
            }
            while (true);
        }
        /// <summary>
        /// 获取队首
        /// </summary>
        /// <returns></returns>
        /// <exception cref="InvalidOperationException"></exception>
        public K Peek()
        {
            if (TryPeek(out var result)) return result;
            throw new InvalidOperationException("Empty Pool");
        }
        /// <summary>
        /// 尝试出队
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool TryDequeue(out K result)
        {
            return TryDequeue(out result, out _ );
        }
        
        public bool TryDequeue(out K result ,out T k)
        {
            if (queue.TryDequeue(out var key))
            {
                while (state.TryGetValue(key, out var count))
                {
                    state[key] = --count;
                    if (TraversalCount > 0) TraversalCount--;
                    if (count == 0) state.Remove(key);
                    if (!queue.TryDequeue(out key))
                    {
                        result = default(K);
                        k = default;
                        return false;
                    }
                }
                if (dictionary.TryGetValue(key, out result))
                {
                    k = key;
                    dictionary.Remove(key);
                    return true;
                }
            }

            result = default;
            k = default;
            return false;
        }
    
        /// <summary>
        /// 出队
        /// </summary>
        /// <returns></returns>
        /// <exception cref="InvalidOperationException"></exception>
        public K Dequeue()
        {
            if (TryDequeue(out var result))
            {
                return result;
            }
            throw new InvalidOperationException("Empty Queue");
        }

        /// <summary>
        /// 访问以K为键的对象
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public K this[T key]
        {
            get => dictionary[key];
            set => dictionary[key] = value;
        }
        /// <summary>
        /// 是否存在以K为键的对象
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public bool ContainsKey(T key) => dictionary.ContainsKey(key);


        public void Clear()
        {
            dictionary.Clear();
            queue.Clear();
            state.Clear();
        }

        public IEnumerator<KeyValuePair<T, K>> GetEnumerator()
        {
            return dictionary.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return dictionary.GetEnumerator();
        }
    }
}


