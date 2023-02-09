using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IAsyncTask : ICriticalAwaiter
    {   
        /// <summary>
        /// 结束当前任务
        /// </summary>
        void SetResult();

        /// <summary>
        /// 当有异常时调用
        /// </summary>
        /// <param name="exception"></param>
        void SetException(Exception exception);


    }


    public interface IAsyncTask<T> : ICriticalAwaiter<T> 
    {
        /// <summary>
        /// 结束当前任务
        /// </summary>
        void SetResult(T result);

        /// <summary>
        /// 当有异常时调用
        /// </summary>
        /// <param name="exception"></param>
        void SetException(Exception exception);

    }
}
