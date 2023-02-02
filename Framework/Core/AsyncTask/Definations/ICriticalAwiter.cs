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
    /// 编译器要求：严格的/危险的Awaiter
    /// </summary>
    public interface ICriticalAwaiter : IAwaiter ,ICriticalNotifyCompletion
    {
     
    }

    /// <summary>
    /// 编译器要求：严格的/危险的Awaiter
    /// </summary>
    /// <typeparam name="TResult"></typeparam>
    public interface ICriticalAwiater<out TResult> : IAwaiter<TResult>, ICriticalNotifyCompletion
    {
        
    }
}
