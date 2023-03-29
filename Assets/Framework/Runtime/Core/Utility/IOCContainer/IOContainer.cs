/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.16
 * Blog : https://blog.csdn.net/qq_46273241/article/details/128756319
 * Description : 
 * IOCContainer主要用于实现类型之间依赖的解除，让类依赖于接口和容器，实现控制反转
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 依赖注入容器
    /// </summary>
    public sealed class IOContainer
    {
        private Dictionary<Type, object> container = new Dictionary<Type, object>();

        /// <summary>
        /// 注册：通过反射建立依赖映射 T1-K
        /// </summary>
        /// <typeparam name="TInterface">接口类型</typeparam>
        /// <typeparam name="KClass">依赖类型</typeparam>

        public void Register<TInterface, KClass>() where KClass : class, TInterface
        {
            Register<TInterface>(Activator.CreateInstance<KClass>());
        }
        /// <summary>
        /// 注册：建立依赖并绑定到具体实例
        /// </summary>
        /// <typeparam name="TInterface"></typeparam>
        /// <param name="instance"></param>

        public void Register<TInterface>(TInterface instance)
        {
            Type key = typeof(TInterface);
            if (container.ContainsKey(key)) container[key] = instance;
            else container.Add(key, instance);
        }

        /// <summary>
        /// 解析：解析对应接口类型的依赖实例
        /// </summary>
        /// <typeparam name="TInterface"></typeparam>
        /// <returns></returns>
        /// <exception cref="NullReferenceException"></exception>

        public TInterface Reslove<TInterface>() where TInterface : class
        {
            if (container.ContainsKey(typeof(TInterface)))
            {
                return container[typeof(TInterface)] as TInterface;
            }
            throw new InvalidOperationException("No such relationship in this IOCContainer!");
        }
    }
}
