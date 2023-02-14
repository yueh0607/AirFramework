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

        public AsyncToken Token { get; set; } = null;

        public bool Authorization => Token == null || Token.IsRunning;

        //private int id;
        public AirTask()
        {
            //id = Framework.index++;
           // $"{id}.Task.Construct".L();
            SetResult = SetResultMethod;
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

            //$"{id}.UnsafeOnCompleted".L();
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
            if (Authorization)
            {
                //执行await以后的代码
                continuation?.Invoke();
                OnAsyncCompleted?.Invoke();
                //回收到Pool
                this.Dispose();
            }
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
            
        }

    }

}
