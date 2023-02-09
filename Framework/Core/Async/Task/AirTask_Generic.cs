using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{


    public partial class AirTask<T> : PoolableObject<AirTask<T>>, IAsyncTask<T>
    {
        [DebuggerHidden]
        internal static AutoBindPool<AirTask<T>> AirTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(() => new AirTask<T>(), null);
        [DebuggerHidden]
        public static AirTask<T> Create(bool fromPool = false)
        {
            if (fromPool)
            {
                return AirTaskPool.Allocate();
            }
            return new AirTask<T>();
        }
        [DebuggerHidden]
        public override void OnAllocate()
        {

        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            continuation = null;
            this.Exception = null;
            IsCompleted = false;
        }


    }


    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder<>))]
    public partial class AirTask<T> : PoolableObject<AirTask<T>>, IAsyncTask<T>
    {
        [DebuggerHidden]
        public AirTask<T> GetAwaiter() => this;
        public Action continuation;
        [DebuggerHidden]
        public bool IsCompleted { get; set; }
        [DebuggerHidden]
        public Exception Exception { get; private set; }
        public T Result;



        [DebuggerHidden]
        private async void Coroutine()
        {
            await this;
        }


        [DebuggerHidden]
        public T GetResult()
        {
            return Result;
        }
        [DebuggerHidden]
        public void OnCompleted(Action continuation)
        {
            UnsafeOnCompleted(continuation);

        }
        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }
        [DebuggerHidden]
        public void SetResult(T result)
        {
            Result = result;
            continuation?.Invoke();
            IsCompleted = true;
            Dispose();
        }
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            this.Exception = exception;
            IsCompleted = true;

        }


    }






}
