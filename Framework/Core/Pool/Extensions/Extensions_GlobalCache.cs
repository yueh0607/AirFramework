using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
       

        #region 提供全局可用的临时键值存储
        private static Dictionary<object,object> globalTemp = new Dictionary<object ,object>();
        /// <summary>
        /// 更新临时键值对的值
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
        /// 获取临时键值对的值
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
        public static bool ContainGloablCache(this object key)
        {
            return globalTemp.ContainsKey(key);
        }
        /// <summary>
        /// 移除临时键值对的值
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
        /// 清空全部临时键值对
        /// </summary>
        public static void ClearAllGlobalCache()
        {
            globalTemp.Clear();
        }
        /// <summary>
        /// 清空临时键值对
        /// </summary>
        /// <param name="any"></param>
        public static void ClearAllGlobalCache(this object any)
        {
            ClearAllGlobalCache();
        }
        #endregion
    }
}
