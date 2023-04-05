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

        public int MaxCount => queue.Count;

        /// <summary>
        /// 入队
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        public void Enqueue(T key, K value)
        {

            if (!dictionary.TryAdd(key, value)) return;
            queue.Enqueue(key);

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
            if (queue.TryDequeue(out var key))
            {
                while (state.TryGetValue(key, out var count))
                {
                    state[key] = --count;
                    if (count == 0) state.Remove(key);
                    if (!queue.TryDequeue(out key))
                    {

                        result = default(K);
                        return false;
                    }
                }
                if (dictionary.TryGetValue(key, out result))
                {
                    dictionary.Remove(key);
                    return true;
                }
            }

            result = default;
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
    }
}
