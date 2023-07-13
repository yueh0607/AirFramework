using System.Collections.Generic;

namespace AirFramework
{
    public static partial class HashSetExtensions
    {
        #region HashSet

        /// <summary>
        /// 尝试添加并返回结果
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="set"></param>
        /// <param name="key"></param>
        /// <returns></returns>
        public static bool TryAdd<T>(this ISet<T> set, T key)
        {
            if (set.Contains(key))
            {
                return false;
            }
            set.Add(key); return true;
        }

        /// <summary>
        /// 尝试移除并返回结果
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="set"></param>
        /// <param name="key"></param>
        /// <returns></returns>
        public static bool TryRemove<T>(this ISet<T> set, T key)
        {
            if (set.Contains(key))
            {
                set.Remove(key); return true;
            }
            return false;
        }


        #endregion
    }
}
