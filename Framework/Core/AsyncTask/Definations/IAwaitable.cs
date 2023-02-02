using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;


/******************************************************************************
 * 注意，实现该文件内接口方可完成编译器对Awaiter的要求，方法和属性均为编译器调用
 * 请谨慎使用接口要求实现的内容
*/


namespace AirFramework
{
    /// <summary>
    /// 实现接口以获得支持await关键字的类型
    /// </summary>
    /// <typeparam name="TAwaiter"></typeparam>
    public interface IAwaitable<out TAwaiter>  where TAwaiter: IAwaiter
    {
        /// <summary>
        /// 编译器方法要求：当使用await关键字时，自动调用方法返回Awaiter
        /// </summary>
        TAwaiter GetAwaiter();
    }

    /// <summary>
    /// 实现接口以获得支持await关键字的类型
    /// </summary>
    /// <typeparam name="TAwaiter"></typeparam>
    /// <typeparam name="TResult"></typeparam>
    public interface IAwaitable<out TAwaiter,out TResult> : IAwaitable<TAwaiter> where TAwaiter : IAwaiter<TResult>
    {

    }
}
