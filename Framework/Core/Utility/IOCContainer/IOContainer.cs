using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 用于实现依赖注入解耦的容器
    /// </summary>
    public class IOContainer
    {
        private Dictionary<Type, object> container = new Dictionary<Type, object>();

        /// <summary>
        /// 建立依赖 T，绑定到K
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="K"></typeparam>
        public void Register<T,K>()   where K : class, T 
        {
            Register<T>(Activator.CreateInstance<K>());
        }
        /// <summary>
        /// 建立依赖T，绑定到具体实例
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        public void Register<T>(T instance) 
        {
            Type key = typeof(T);
            if (container.ContainsKey(key)) container[key] = instance;
            else container.Add(key, instance);
        }

        public T Reslove<T>() where T : class
        {
            if (container.ContainsKey(typeof(T)))
            {
                return container[typeof(T)] as T;
            }
            throw new NullReferenceException("No such relationship in this IOCContainer!");
        }


    }
}
