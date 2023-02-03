using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 实现可以被GetAwaiter返回支持的Awaiter对象(当执行代码可能给程序造成负面影响时)
    /// </summary>
    public interface ICriticalAwaiter : ICriticalNotifyCompletion,IAwaiter
    {

    }

    /// <summary>
    /// 实现可以被GetAwaiter返回支持的Awaiter对象(当执行代码可能给程序造成负面影响时)
    /// </summary>
    public interface ICriticalAwaiter<T> : ICriticalNotifyCompletion,IAwaiter<T>
    {

    }
}
