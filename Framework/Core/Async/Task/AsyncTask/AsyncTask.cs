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
        /// 协程启动
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
        public void SetException(Exception exception)
        {
            this.Exception = exception;
        }

        public IAsyncTask GetResult()
        {
            return this;
        }
        public void SetResult()
        {
            continuation?.Invoke();
            Dispose();
        }

    }

}
