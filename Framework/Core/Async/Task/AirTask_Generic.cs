using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;

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
        
        [DebuggerHidden]
        public bool IsCompleted { get; set; }

        public T Result;

        public AirTask()
        {
            SetResult = SetResultMethod;
        }

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

        #region OnCompleted
        public Action continuation;
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

        #endregion
        public Action<T> SetResult { get; private set; }
        [DebuggerHidden]
        private void SetResultMethod(T result)
        {
            Result = result;
            continuation?.Invoke();
            IsCompleted = true;
            Dispose();
        }



        [DebuggerHidden]
        public ExceptionDispatchInfo Exception { get; private set; }
        /// <summary>
        /// 当执行出现异常时状态机调用
        /// </summary>
        /// <param name="exception"></param>
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            if (IsCompleted)
            {
                throw new InvalidOperationException("Cannot set exceptions for completed tasks.");
            }
            IsCompleted = true;


        }


    }






}
