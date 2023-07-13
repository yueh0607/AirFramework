using System;
namespace AirFramework
{
    public static class DynamicHashSetExtensions
    {

        /// <summary>
        /// 尝试从动态HashSet移除一个值并调用Dispose，如果该值存在则返回true
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="hashSet"></param>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public static bool TryRemoveAndDispose<T>(this DynamicHashSet<T> hashSet, T key) where T : IDisposable
        {
            if (hashSet.Contains(key))
            {
                key.Dispose();
                return true;
            }
            return false;
        }

        /// <summary>
        /// 从动态字典移除一个值并调用其Dispose方法，如果该值不存在将引发异常
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        /// <param name="hashSet"></param>
        /// <param name="key"></param>
        public static void RemoveAndDispose<T, K>(this DynamicHashSet<T> hashSet, T key) where T : IDisposable
        {
            hashSet.Remove(key);
            key.Dispose();
        }

        /// <summary>
        /// 清空动态字典并调用所有元素的Dispose方法s
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="hashSet"></param>
        public static void ClearAndDispose<T>(this DynamicHashSet<T> hashSet) where T : IDisposable
        {
            while (hashSet.Count > 0)
            {
                hashSet.Dequeue().Dispose();
            }
        }
    }
}
