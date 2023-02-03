using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public class AsyncTask : Entity, IAsyncTask
    {
        public static AsyncTask Create() => Framework.Pool.Allocate<AsyncTask>();

        public AsyncTask GetAwaiter() => this;

        public Action continuation;
        public Exception Exception { get; private set; }

        public bool IsCompleted { get; set; }



        [DebuggerHidden]
        private async AsyncTaskVoid InnerCoroutine()
        {
            await this;
        }

        /// <summary>
        /// 以协程方式运行
        /// </summary>
        [DebuggerHidden]
        public void Coroutine()
        {
            InnerCoroutine().Coroutine();
        }



        public void OnCompleted(Action continuation)
        {
            UnsafeOnCompleted(continuation);
        }

        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }

        /// <summary>
        /// 当执行出现异常时调用
        /// </summary>
        /// <param name="exception"></param>
        public void SetException(Exception exception)
        {
            this.Exception = exception;
        }

        /// <summary>
        /// 状态机调用此方法获取状态
        /// </summary>
        /// <returns></returns>
        public IAsyncTask GetResult()
        {
            return this;
        }

        /// <summary>
        /// 设置结果代表结束当前await
        /// </summary>
        public void SetResult()
        {
            continuation?.Invoke();
            Dispose();
        }

    }

}
