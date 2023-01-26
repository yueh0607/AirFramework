using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static void Recycle<T>(this T item) where T : class,IPoolable
        {
            Framework.Pool.Recycle(item);
        }
        
        /// <summary>
        /// 使用new创建对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T DefaultNewCreate<T>() where T : new()
        {
            return new T();
        }
        /// <summary>
        /// 使用Activator.CreateInstance创建对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T DefaltActivatorCreate<T> ()
        {
            return Activator.CreateInstance<T>();
        }


       
        private static Dictionary<object,object> globalTemp = new Dictionary<object ,object>();

        public static void PushGlobalCache<T>(this T value,object key)
        {
            globalTemp.TryAdd(key, value);
        }
        public static T PullGlobalCache<T>(this object key)
        {
            if( globalTemp.ContainsKey(key))
            {
                return (T)globalTemp[key];
            }
            return default;
        }
        public static void ClearGlobalCache<T>(this object key)
        {
            if (globalTemp.ContainsKey(key))
            {
                globalTemp.Remove(key);
            }
        }
        public static void ClearAllGlobalCache<T>(this object key)
        {
            globalTemp.Clear();
        }
    }
}
