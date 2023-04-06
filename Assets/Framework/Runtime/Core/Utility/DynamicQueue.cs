/********************************************************************************************
 * Date : 2023.1.30
 * Description : 
 * 可顺序遍历且可以随机移除的队列
 ********************************************************************************************/


using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class DynamicQueue<T, K> where T : notnull
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
            if (dictionary.ContainsKey(key))
            {
                dictionary.Remove(key);
                //Count--;
                if (state.ContainsKey(key)) state[key]++;
                else state.Add(key, 1);
            }
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

        /// <summary>
        /// 尝试队首重排，如果入队失败，则发出异常
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool TryRequeue(out K result)
        {
            bool x = TryDequeue(out result, out var key);
            if (!x) return false;
            Enqueue(key, result);
            return true;
            
        }


        /// <summary>
        /// 从队首出队并放到队尾
        /// </summary>
        /// <returns></returns>
        public K Requeue()
        {
            if(TryRequeue(out var result))
            {
                return result;
            }
            throw new ApplicationException("Requeue defeated");
        }
    }
}
