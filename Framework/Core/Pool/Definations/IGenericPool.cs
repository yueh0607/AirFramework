/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 在Object的基础上，为通用对象池增加泛型功能，任意object对象池均可以通过泛型使用
 */


using System.Diagnostics;

namespace AirFramework
{

    public interface IGenericPool<T> : IObjectPool
    {
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public T Allocate();
        /// <summary>
        /// 回收对象
        /// </summary>
        /// <param name="item"></param>
        public void Recycle(T item);
    }
}
