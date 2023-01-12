using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 池行为约束基接口
    /// </summary>
    public interface IPoolable { }

    /// <summary>
    /// 提供池管理的行为约束
    /// </summary>
    /// <typeparam name="T">受管理的对象类型</typeparam>
    public interface IPoolable<T>:IPoolable
    {
       
        /// <summary>
        /// 释放时调用
        /// </summary>
        /// <param name="item">被销毁对象的实例引用</param>
        void OnReleaseItem(T item);

        /// <summary>
        /// 申请对象时调用
        /// </summary>
        /// <param name="item">被销毁对象的实例引用</param>
        void OnAllocateItem(T item);
    }
}
