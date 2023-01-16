using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class Modules : Unit, IModules
    {
        /// <summary>
        /// 线程安全，缓加载
        /// </summary>
        private readonly Lazy<Dictionary<Type, IModule>> moduleContainer = new();

        /// <summary>
        /// 销毁时调用
        /// </summary>
        protected override void OnDispose()
        {
            moduleContainer.Value.Clear();
        }

        /// <summary>
        /// 如果不存在则创建模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        void IModules.CreateModule<T>()
        {
            if(!moduleContainer.Value.ContainsKey(typeof(T)))
            {
                moduleContainer.Value.Add(typeof(T), Activator.CreateInstance<T>());
            }
        }


        /// <summary>
        /// 获取模块，如果不存在则创建模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        T IModules.GetModule<T>()
        {
            if (!moduleContainer.Value.ContainsKey(typeof(T)))
            {
                moduleContainer.Value.Add(typeof(T), Activator.CreateInstance<T>());
            }
            return (T)moduleContainer.Value[typeof(T)];
        }
    }
}
