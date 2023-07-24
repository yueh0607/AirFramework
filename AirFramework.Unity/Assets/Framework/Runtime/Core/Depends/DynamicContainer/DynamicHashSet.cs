/********************************************************************************************
 * Date : 2023.1.30
 * Description : 
 * 可顺序遍历且可以随机移除的队列
 * 
 * 遍历方法例程：
 * 
            _modules.ResetTraversalCount();
            int traversalCount = _modules.TraversalCount;    
            for (int i = 0; i < traversalCount; ++i)
            {
                if (_modules.TryDequeue(out IModule module))
                {
                    module.OnUpdate();
                    _modules.TryEnqueue( module);
                }
            }
 * 
 * 
 ********************************************************************************************/


using System;
using System.Collections;
using System.Collections.Generic;
namespace AirFramework
{
    public class DynamicHashSet<T> : IEnumerable<T> where T : notnull
    {

        //队列顺序
        private readonly Queue<T> queue;
        //实际存储键值对，即时
        private readonly HashSet<T> hashSet;
        //临时移除状态
        private readonly Dictionary<T, int> state;

        /// <summary>
        /// 真正剩余元素数量
        /// </summary>
        public int Count => hashSet.Count;

        /// <summary>
        /// 遍历出队的次数
        /// </summary>
        public int TraversalCount { get; private set; } = 0;

        /// <summary>
        /// 刷新遍历数量，在每次遍历之前都要进行一次刷新以校准遍历数量
        /// </summary>
        public int ResetTraversalCount() => TraversalCount = queue.Count;

        public DynamicHashSet()
        {
            queue = new Queue<T>();
            hashSet = new HashSet<T>();
            state = new Dictionary<T, int>();
        }

        /// <summary>
        /// 通过自定义比较器来提高比较效率的构造方式
        /// </summary>
        /// <param name="equalityComparer"></param>
        public DynamicHashSet(IEqualityComparer<T> equalityComparer)
        {
            queue = new Queue<T>();
            hashSet = new HashSet<T>(equalityComparer);
            state = new Dictionary<T, int>(equalityComparer);
        }


        /// <summary>
        /// 入队
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        public void Enqueue(T key)
        {
            if (TryEnqueue(key)) return;
            throw new ArgumentException("Same key exists");
        }
        /// <summary>
        /// 尝试入队
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public bool TryEnqueue(T key)
        {
            if (!hashSet.TryAdd(key)) return false;
            queue.Enqueue(key);
            return true;
        }
        /// <summary>
        /// 从队中移除
        /// </summary>
        /// <param name="key"></param>
        public void Remove(T key)
        {
            if (!TryRemove(key)) throw new ArgumentException("error remove key ");
        }
        /// <summary>
        /// 尝试从队中移除
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public bool TryRemove(T key)
        {
            if (hashSet.Contains(key))
            {
                hashSet.Remove(key);
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
        public bool TryPeek(out T result)
        {
            do
            {
                if (queue.TryPeek(out var key))
                {
                    if (state.TryGetValue(key, out int count))
                    {
                        state[key] = --count;
                        if (TraversalCount > 0) TraversalCount--;
                        if (count == 0) state.Remove(key);
                        queue.Dequeue();
                    }
                    else return hashSet.TryGetValue(key, out result);
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
        public T Peek()
        {
            if (TryPeek(out var result)) return result;
            throw new InvalidOperationException("The operation on an empty container is invalid");
        }

        /// <summary>
        /// 尝试出队
        /// </summary>
        /// <param name="result"></param>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool TryDequeue(out T result)
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
                        result = default;
                        return false;
                    }
                }
                if (hashSet.Contains(key))
                {
                    result = key;
                    hashSet.Remove(key);
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
        public T Dequeue()
        {
            if (TryDequeue(out var result))
            {
                return result;
            }
            throw new InvalidOperationException("The operation on an empty container is invalid");
        }


        /// <summary>
        /// 是否存在Key对象
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public bool Contains(T key) => hashSet.Contains(key);

        /// <summary>
        /// 清空
        /// </summary>
        public void Clear()
        {
            hashSet.Clear();
            queue.Clear();
            state.Clear();
        }


        /// <summary>
        /// 无序遍历  不可动态随机移除  迭代器
        /// </summary>
        /// <returns></returns>
        public IEnumerator<T> GetEnumerator()
        {
            return hashSet.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return hashSet.GetEnumerator();
        }
    }
}


