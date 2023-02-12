using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using UnityEngine;

namespace AirFramework
{

    public partial class AirTask : PoolableObject<AirTask>, IAsyncTask
    {
        [DebuggerHidden]
        internal static AutoBindPool<AirTask> AirTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(() => new AirTask(), null);
        [DebuggerHidden]
        public static AirTask Create(bool fromPool = false)
        {
            if (fromPool)
            {
                return AirTaskPool.Allocate();
            }
            return new AirTask();
        }
        [DebuggerHidden]
        public override void OnAllocate()
        {
            IsCompleted = false;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            continuation = null;
            Exception = null;
            OnAsyncCompleted = null;
        }
    }

    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder))]
    public partial class AirTask : PoolableObject<AirTask>, IAsyncTask
    {

        [DebuggerHidden]
        public AirTask GetAwaiter() => this;
        
        
        [DebuggerHidden]
        public bool IsCompleted { get; set; }

       

        public event Action OnAsyncCompleted = null;

        public AirTask()
        {
  
            SetResult =SetResultMethod;
        }

        [DebuggerHidden]
        public async void Coroutine()
        {
            await this;
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

        /// <summary>
        /// 返回await结果
        /// </summary>
        [DebuggerHidden]
        public void GetResult()
        {

        }


        /// <summary>
        /// 结束当前await并设置结果
        /// </summary>
        [DebuggerHidden]
        public Action SetResult { get; private set; }
        [DebuggerHidden]
        private void SetResultMethod()
        {
            if (IsCompleted)
            {
                throw new InvalidOperationException("Cannot set result for completed tasks.");
            }

            IsCompleted = true;
            OnAsyncCompleted?.Invoke();
            //执行await以后的代码
            continuation?.Invoke();
            //回收到Pool
            this.Dispose();

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
