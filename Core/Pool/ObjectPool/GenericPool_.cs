using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 提供公有无参构造的类型池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class GenericPool_<T>:GenericPool<T> where T : class,new()
    {
        /// <summary>
        /// 默认创建器为new的构造函数
        /// </summary>
        /// <param name="onDestroy">销毁时调用</param>
        /// <param name="onRelease">放回时调用</param>
        /// <param name="onAllocate">申请时调用</param>
        public GenericPool_(Action<T> onDestroy=null,Action<T> onRelease=null,Action<T> onAllocate=null) :base(()=> { return new T(); },onDestroy,onRelease,onAllocate)
        { 

        }
    }
}
