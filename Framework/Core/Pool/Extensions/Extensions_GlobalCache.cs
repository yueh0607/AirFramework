/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 针对微小项目，提供一种键值对的全局存储方式，调用起来非常方便，采用object主要出于方便而非性能的考虑
 * 即时用户采用ValueType发生装箱，也不会造成较大影响，所以仅适合足够小型的项目
 */

using System.Collections.Generic;

namespace AirFramework
{
    public static partial class Extensions
    {
        private static Dictionary<object,object> globalTemp = new Dictionary<object ,object>();


        /// <summary>
        /// 更新键值对的值
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="value"></param>
        /// <param name="key"></param>
        public static void PushGlobalCache<T>(this T value,object key)
        {
            if(ContainGloablCache(key))
            {
                globalTemp[key] = value;
            }
            else globalTemp.Add(key, value);
        }
        /// <summary>
        /// 获取键值对的值
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="key"></param>
        /// <returns></returns>
        public static T PullGlobalCache<T>(this object key)
        {
            if( globalTemp.ContainsKey(key))
            {
                return (T)globalTemp[key];
            }
            return default;
        }
        /// <summary>
        /// 检测是否存在键值对
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public static bool ContainGloablCache(this object key)
        {
            return globalTemp.ContainsKey(key);
        }
        /// <summary>
        /// 移除键值对的值
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="key"></param>
        public static void RemoveGlobalCache<T>(this object key)
        {
            if (globalTemp.ContainsKey(key))
            {
                globalTemp.Remove(key);
            }
        }
        /// <summary>
        /// 清空全部键值对
        /// </summary>
        public static void ClearAllGlobalCache()
        {
            globalTemp.Clear();
        }
        /// <summary>
        /// 清空键值对
        /// </summary>
        /// <param name="any"></param>
        public static void ClearAllGlobalCache(this object any)
        {
            ClearAllGlobalCache();
        }
    }
}
