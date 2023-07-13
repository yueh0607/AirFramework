using System;
namespace AirFramework
{
    public static class DynamicDictionaryExtensions
    {
        /// <summary>
        /// 从动态字典获取一个值，如果值不存在则返回传入的默认值
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="dictionary"></param>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public static K GetValueOrDefault<T, K>(this DynamicDictionary<T, K> dictionary, T key, K value = default)
        {
            if (dictionary.ContainsKey(key))
            {
                return dictionary[key];
            }
            return value;

        }
        /// <summary>
        /// 从动态字典获取一个值，如果不存在则添加指定值后返回该值
        /// </summary>
        /// <typeparam name="T">键类型</typeparam>
        /// <typeparam name="K">值类型</typeparam>
        /// <param name="dictionary">动态字典</param>
        /// <param name="key">键</param>
        /// <param name="value">默认值</param>
        /// <returns>值</returns>
        public static K GetValueOrAddDefault<T, K>(this DynamicDictionary<T, K> dictionary, T key, K value = default)
        {
            if (dictionary.ContainsKey(key))
            {
                return dictionary[key];
            }
            dictionary.Enqueue(key, value);
            return dictionary[key];
        }
        /// <summary>
        /// 从动态字典获取一个值，如果不存在则添加指定值后返回该值
        /// </summary>
        /// <typeparam name="T">键类型</typeparam>
        /// <typeparam name="K">值类型</typeparam>
        /// <param name="dictionary">动态字典</param>
        /// <param name="key">键</param>
        /// <param name="value">默认值</param>
        /// <returns>值</returns>
        public static K GetValueOrAddDefault<T, K>(this DynamicDictionary<T, K> dictionary, T key, Func<K> getter = null)
        {
            if (dictionary.ContainsKey(key))
            {
                return dictionary[key];
            }

            dictionary.Enqueue(key, getter == null ? default : getter());
            return dictionary[key];
        }

        /// <summary>
        /// 尝试从动态字典获取一个值，如果该值存在则返回true并传出Value
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="dictionary"></param>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public static bool TryGetValue<T, K>(this DynamicDictionary<T, K> dictionary, T key, out K value)
        {
            if (dictionary.ContainsKey(key))
            {
                value = dictionary[key];
                return true;
            }
            value = default;
            return false;
        }

        /// <summary>
        /// 尝试从动态字典移除一个值并调用Dispose，如果该值存在则返回true
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="dictionary"></param>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public static bool TryRemoveAndDispose<T, K>(this DynamicDictionary<T, K> dictionary, T key) where K : IDisposable
        {
            if (dictionary.TryGetValue(key, out var value))
            {
                value.Dispose();
                return true;
            }
            return false;
        }

        /// <summary>
        /// 从动态字典移除一个值并调用其Dispose方法，如果该值不存在将引发异常
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="dictionary"></param>
        /// <param name="key"></param>
        public static void RemoveAndDispose<T, K>(this DynamicDictionary<T, K> dictionary, T key) where K : IDisposable
        {
            dictionary.Remove(key);
            dictionary[key].Dispose();
        }

        /// <summary>
        /// 清空动态字典并调用所有元素的Dispose方法s
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="dictionary"></param>
        public static void ClearAndDispose<T, K>(this DynamicDictionary<T, K> dictionary) where K : IDisposable
        {
            while (dictionary.Count > 0)
            {
                dictionary.Dequeue().Dispose();
            }
        }
    }
}
