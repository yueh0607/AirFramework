using System;

namespace AirFramework
{
    public static class DynamicQueueExtensions
    {
        public static K GetValueOrDefault<T, K>(this DynamicQueue<T, K> queue, T key, K value = default)
        {
            if (queue.ContainsKey(key))
            {
                return queue[key];
            }
            return value;

        }
        public static K GetValueOrAddDefault<T, K>(this DynamicQueue<T, K> queue, T key, K value = default)
        {
            if (queue.ContainsKey(key))
            {
                return queue[key];
            }
            queue.Enqueue(key, value);
            return queue[key];
        }
        public static K GetValueOrAddDefault<T, K>(this DynamicQueue<T, K> queue, T key, Func<K> getter = null)
        {
            if (queue.ContainsKey(key))
            {
                return queue[key];
            }

            queue.Enqueue(key, getter == null ? default : getter());
            return queue[key];
        }
        public static bool TryGetValue<T, K>(this DynamicQueue<T, K> queue, T key, out K value)
        {
            if (queue.ContainsKey(key))
            {
                value = queue[key];
                return true;
            }
            value = default;
            return false;
        }

        public static bool TryRemoveAndDispose<T, K>(this DynamicQueue<T, K> queue, T key) where K : Unit
        {
            if (queue.TryGetValue(key, out var value))
            {
                value.Dispose();
                return true;
            }
            return false;


        }

        public static void RemoveAndDispose<T, K>(this DynamicQueue<T, K> queue, T key) where K : IUnit
        {
            queue[key].Dispose();
            queue.Remove(key);
        }
        public static void ClearAndDispose<T, K>(this DynamicQueue<T, K> queue) where K : Unit
        {
            while (queue.Count > 0)
            {
                queue.Dequeue().Dispose();
            }
        }
    }
}
