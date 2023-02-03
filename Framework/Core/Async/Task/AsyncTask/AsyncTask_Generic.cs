using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder<>))]
    public class AsyncTask<T> : Entity, IAsyncTask<T>
    {
        public AsyncTask<T> GetAwaiter() => this;
        public Action continuation;
        public bool IsCompleted { get; set; }

        public T Result;

        public static AsyncTask<T> Create() => Framework.Pool.Allocate<AsyncTask<T>>();

        [DebuggerHidden]
        private async AsyncTaskVoid InnerCoroutine()
        {
            await this;
        }

        [DebuggerHidden]
        public void Coroutine()
        {
            InnerCoroutine().Coroutine();
        }


        public T GetResult()
        {
            return Result;
        }

        public void OnCompleted(Action continuation)
        {
            UnsafeOnCompleted(continuation);

        }
        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }
        public void SetResult(T result)
        {
            Result = result;
            continuation?.Invoke();
            Dispose();
        }

        public void SetException(Exception exception)
        {

        }


    }






}
