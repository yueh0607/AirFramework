using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;



//开发ing



namespace AirFramework
{
    public interface IAsyncTask : ICriticalNotifyCompletion
    {
        /// <summary>
        /// 是否已经结束
        /// </summary>
        bool IsCompleted { get; set; }
        /// <summary>
        /// 获取结果
        /// </summary>
        /// <returns></returns>
        IAsyncTask GetResult();

        void SetResult();

        void SetException(Exception exception);
    }
    public interface IAsyncTask<T> : ICriticalNotifyCompletion
    {
        /// <summary>
        /// 是否已经结束
        /// </summary>
        bool IsCompleted { get; set; }
        /// <summary>
        /// 获取结果
        /// </summary>
        /// <returns></returns>
        IAsyncTask<T> GetResult();

        void SetResult(IAsyncTask<T> result);

        void SetException(Exception exception);
    }
}
