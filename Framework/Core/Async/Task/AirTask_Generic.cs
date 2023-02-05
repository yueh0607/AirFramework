using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{


    public partial class AirTask<T> : PoolableObject<AirTask<T>>, IAsyncTask<T>
    {

        internal static AutoBindPool<AirTask<T>> AirTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(Extensions.DefaultNewCreate<AirTask<T>>, null);

        public static AirTask<T> Create(bool fromPool)
        {
            if (fromPool)
            {
                return AirTaskPool.Allocate();
            }
            return new AirTask<T>();
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            continuation = null;
            this.Exception = null;
        }

    }


    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder<>))]
    public partial class AirTask<T> : PoolableObject<AirTask<T>>, IAsyncTask<T>
    {
        public AirTask<T> GetAwaiter() => this;
        public Action continuation;
        public bool IsCompleted { get; set; }
        public Exception Exception { get; private set; }
        public T Result;

   

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
            this.Exception= exception;
        }


    }






}
