/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 通过继承并指定新的默认创建方法，来实现一个通过new创建对象的GenericPool
 * 原GenericPool通过Activator创建对象效率较差
 */


using System.Diagnostics;

namespace AirFramework
{
    /// <summary>
    /// new创建的通用泛型池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class GenericPool_<T> : GenericPool<T> where T : class, new()
    {
        
        public GenericPool_():base()
        {
            base.onCreate = Extensions.DefaultNewCreate<T>;
        }
    }
}
