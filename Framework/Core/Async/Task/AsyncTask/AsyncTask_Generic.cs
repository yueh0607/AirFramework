using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder<>))]
    public class AirTask<T> : Entity, IAsyncTask<T>
    {
        public AirTask<T> GetAwaiter() => this;
        public Action continuation;
        public bool IsCompleted { get; set; }

        public T Result;

        public static AirTask<T> Create(bool fromPool)
        {
            if (fromPool)
                return Framework.Pool.Allocate<AirTask<T>>();

            return new AirTask<T>();
        }

        [DebuggerHidden]
        private async AirTaskVoid InnerCoroutine()
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
