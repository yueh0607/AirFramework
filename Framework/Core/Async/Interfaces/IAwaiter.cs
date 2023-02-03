using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 实现可以被GetAwaiter返回支持的Awaiter对象
    /// </summary>
    public interface IAwaiter : INotifyCompletion
    {
        /// <summary>
        /// 获取一个状态，该状态表示正在异步等待的操作已经完成（成功完成或发生了异常）；此状态会被编译器自动调用。
        /// 在实现中，为了达到各种效果，可以灵活应用其值：可以始终为 true，或者始终为 false。
        /// </summary>
        bool IsCompleted { get; set; }
        /// <summary>
        /// 此方法会被编译器在 await 结束时自动调用以获取返回值（包括异常）。
        /// </summary>
        void GetResult();
    }

    /// <summary>
    /// 实现可以被GetAwaiter返回支持的Awaiter对象
    /// </summary>
    public interface IAwaiter<T> : INotifyCompletion
    {
        /// <summary>
        /// 获取一个状态，该状态表示正在异步等待的操作已经完成（成功完成或发生了异常）；此状态会被编译器自动调用。
        /// 在实现中，为了达到各种效果，可以灵活应用其值：可以始终为 true，或者始终为 false。
        /// </summary>
        bool IsCompleted { get; set; }

        /// <summary>
        /// 此方法会被编译器在 await 结束时自动调用以获取返回值（包括异常）。
        /// </summary>
        T GetResult();
    }
}
