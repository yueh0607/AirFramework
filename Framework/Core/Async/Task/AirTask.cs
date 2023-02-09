using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
  
    public partial class AirTask :  PoolableObject<AirTask>, IAsyncTask
    {
        [DebuggerHidden]
        internal static AutoBindPool<AirTask> AirTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(()=>new AirTask(), null);
        [DebuggerHidden]
        public static AirTask Create(bool fromPool=false)
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
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            IsCompleted= false;
            continuation = null;
            Exception = null;
        }



    }

    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder))]
    public partial class AirTask : PoolableObject<AirTask>, IAsyncTask
    {

        [DebuggerHidden]
        public AirTask GetAwaiter() => this;

        public Action continuation;
        [DebuggerHidden]
        public Exception Exception { get; private set; }
        [DebuggerHidden]
        public bool IsCompleted { get; set; }
        

        [DebuggerHidden]
        public async void Coroutine()
        {
            await this;
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

        /// <summary>
        /// 当执行出现异常时状态机调用
        /// </summary>
        /// <param name="exception"></param>
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            IsCompleted= true;
            this.Exception = exception;
        }

        [DebuggerHidden]
        public void GetResult()
        {

        }

        /// <summary>
        /// 结束当前await，如果不手动结束，状态机也会调用结束
        /// </summary>
        [DebuggerHidden]
        public void SetResult()
        {
            
            IsCompleted = true;
            //执行await以后的代码
            continuation?.Invoke();
            //回收到Pool
            this.Dispose();
         
        }
    }

}
