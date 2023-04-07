using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;
namespace AirFramework
{
    [AttributeUsage(AttributeTargets.Class)]
    public class AutoInitializeByFrameworkAttribute:Attribute{}
    public class GameBucket
    {
        private static Dictionary<Type, object> bucket = new();

        internal static void CreateByReflection()
        {
            var assemblies = AppDomain.CurrentDomain.GetAssemblies();
            foreach(var assembly in assemblies)
            {
                var types = assembly.GetTypes();
                foreach(var type in types)
                {
                    bool result = type.GetCustomAttribute<AutoInitializeByFrameworkAttribute>()!=null;
                    if (result) bucket.TryAdd(type, Activator.CreateInstance(type).StartLifeCycle());
                }
            }
        }


        public static bool Initialized { get; private set; } = false;
        internal static void TryCreateByReflection()
        {
            if(Initialized) return;
            Initialized = true;
            CreateByReflection();
        }
   
        public static bool Exist(Type type) => bucket.ContainsKey(type);
        public static bool Exist<T>()=>Exist(typeof(T));


        /// <summary>
        /// 尝试安全卸载
        /// </summary>
        /// <param name="type"></param>
        public static void Unload(Type type)
        {
            if(bucket.ContainsKey(type))
            {
                bucket[type].CloseLifeCycle();
                bucket.Remove(type);
            }
        }
        /// <summary>
        /// 尝试安全卸载
        /// </summary>
        /// <param name="type"></param>
        public static void Unload<T>() => Unload(typeof(T));
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
            if(bucket.TryGetValue(typeof(T),out var result))
            {
                return (T)result;
            }
            return default(T);
        }
    }
}
