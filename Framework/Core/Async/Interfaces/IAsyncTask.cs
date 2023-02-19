using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 使用该接口统一支持异步令牌
    /// </summary>
    public interface IAsyncTokenProperty : IPoolable,IAuthorization,IUnit
    {
        AsyncTreeTokenNode Token { get; set; }
        
        void SetException(Exception exception);
    }

    /// <summary>
    /// 异步任务接口
    /// </summary>
    public interface IAsyncTask : ICriticalAwaiter
    {   
        /// <summary>
        /// 结束当前任务
        /// </summary>
        Action SetResult { get;  }

        /// <summary>
        /// 当有异常时调用
        /// </summary>
        /// <param name="exception"></param>
        void SetException(Exception exception);

        
    }
    /// <summary>
    /// 异步任务接口
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface IAsyncTask<T> : ICriticalAwaiter<T>
    {
        /// <summary>
        /// 结束当前任务
        /// </summary>
        Action<T> SetResult { get; }

        /// <summary>
        /// 当有异常时调用
        /// </summary>
        /// <param name="exception"></param>
        void SetException(Exception exception);

       
    }
}
