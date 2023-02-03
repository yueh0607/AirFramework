using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 实现此接口使得一个对象可以被await关键字所支持
    /// </summary>
    /// <typeparam name="TAwaiter"></typeparam>
    /// <typeparam name="TResult"></typeparam>
    public interface IAwaitable<out TAwaiter> where TAwaiter : IAwaiter
    {
        /// <summary>
        /// 获取一个实现IAwaiter对象
        /// </summary>
        /// <returns></returns>
        TAwaiter GetAwaiter();
    }
    /// <summary>
    /// 实现此接口使得一个对象可以被await关键字所支持
    /// </summary>
    /// <typeparam name="TAwaiter"></typeparam>
    /// <typeparam name="TResult"></typeparam>
    public interface IAwaitable<out TAwaiter,out TResult> where TAwaiter : IAwaiter<TResult>
    {
        /// <summary>
        /// 获取一个实现IAwaiter<TResult>对象
        /// </summary>
        /// <returns></returns>
        TAwaiter GetAwaiter();
    }

}
