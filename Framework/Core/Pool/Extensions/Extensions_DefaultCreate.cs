/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 在对象池使用过程中，传入创建方式是不可避免的，这里提供默认的创建方式供用户传入对象池
 */


using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 使用new创建T对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T DefaultNewCreate<T>() where T : new()
        {
            return new T();
        }
        /// <summary>
        /// 使用Activator.CreateInstance创建T对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T DefaltActivatorCreate<T> ()
        {
            return Activator.CreateInstance<T>();
        }       
    }
}
