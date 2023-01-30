using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        


        #region 提供默认的创建实例方法
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
        #endregion

        
    }
}
