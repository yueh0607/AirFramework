using System;
using System.Collections.Generic;
using System.Reflection;
namespace AirFramework
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
    public class FrameworkInitializeAttribute : Attribute
    {

    }
    public class FrameworkInitializer
    {
        private static Dictionary<Type, object> bucket = new();

        internal static void CreateByReflection(Type type)
        {
            if (type.IsAbstract || type.IsInterface) return;
            bool result = type.GetCustomAttribute<FrameworkInitializeAttribute>() != null;
            if (result)
            {
                var obj = Activator.CreateInstance(type);
                obj.StartObjLife();
                bucket.TryAdd(type, obj);
            }
        }

        public static bool Exist(Type type) => bucket.ContainsKey(type);
        public static bool Exist<T>() => Exist(typeof(T));


        /// <summary>
        /// 尝试安全卸载
        /// </summary>
        /// <param name="type"></param>
        public static void Unload(Type type)
        {
            if (bucket.ContainsKey(type))
            {
                bucket[type].CloseObjLife();
                bucket.Remove(type);
            }
        }
        /// <summary>
        /// 尝试安全卸载
        /// </summary>
        /// <param name="type"></param>
        public static void Unload<T>() => Unload(typeof(T));
        public static void UnloadAll()
        {
            foreach (var x in bucket)
            {
                x.Value.CloseObjLife();
            }
            bucket.Clear();
        }
        /// <summary>
        /// 尝试获取，可能为default
        /// </summary>
        /// <param name="type"></param>
        public static object GetToObject(Type type)
        {
            bucket.TryGetValue(type, out object result);
            return result;
        }
        /// <summary>
        /// 尝试获取，可能为default
        /// </summary>
        /// <param name="type"></param>
        public static object GetToObject<T>()
        {
            return GetToObject(typeof(T));
        }
        /// <summary>
        /// 尝试获取，可能为default
        /// </summary>
        /// <param name="type"></param>
        public static T GetToGeneric<T>()
        {
            if (bucket.TryGetValue(typeof(T), out var result))
            {
                return (T)result;
            }
            return default(T);
        }


    }
}
