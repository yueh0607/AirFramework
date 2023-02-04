using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{
  
    public partial class AirTask :  PoolableObject<AirTask>, IAsyncTask
    {
    
        /// <summary>
        /// 创建非托管池
        /// </summary>
        internal static AutoBindPool<AirTask> AirTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(Extensions.DefaultNewCreate<AirTask>, null);

        public static AirTask Create(bool fromPool)
        {
            if (fromPool)
            {
                return AirTaskPool.Allocate();
            }
            return new AirTask();
        }

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            continuation = null;
            Exception = null;
        }

    }

    [AsyncMethodBuilder(typeof(AsyncAirTaskMethodBuilder))]
    public partial class AirTask : PoolableObject<AirTask>, IAsyncTask
    {
        
        
        public AirTask GetAwaiter() => this;

        public Action continuation;
        public Exception Exception { get; private set; }

        public bool IsCompleted { get; set; }
        

        [DebuggerHidden]
        private async AirTaskVoid InnerCoroutine()
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
        /// 当执行出现异常时状态机调用
        /// </summary>
        /// <param name="exception"></param>
        public void SetException(Exception exception)
        {
            this.Exception = exception;
        }

        public void GetResult()
        {

        }

        /// <summary>
        /// 结束当前await，如果不手动结束，状态机也会调用结束
        /// </summary>
        public void SetResult()
        {
            //执行await以后的代码
            continuation?.Invoke();
            //回收到Pool
            this.Dispose();
        }
    }

}
