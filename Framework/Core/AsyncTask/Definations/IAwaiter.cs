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
    /// 编译器接口要求：实现本接口即可实现Awaiter，被GetAwiter支持
    /// </summary>
    public interface IAwaiter : INotifyCompletion
    {
        /// <summary>
        /// 编译器属性要求
        /// </summary>
        bool IsCompleted { get; }

        /// <summary>
        /// 编译器方法要求
        /// </summary>
        void GetResult();

    }

    /// <summary>
    /// 编译器接口要求：实现本接口即可实现Awaiter，被GetAwiter支持
    /// </summary>
    /// <typeparam name="TResult"></typeparam>

    public interface IAwaiter<out TResult> : IAwaiter
    {
        /// <summary>
        /// 编译器方法要求
        /// </summary>
        /// <returns></returns>
        new TResult GetResult();
        
    }
}
