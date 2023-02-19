using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 此分部类负责对象池
    /// </summary>
    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAsyncTokenProperty
    {
        [DebuggerHidden]
        internal static AutoBindPool<AsyncTask> AsyncTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(() => new AsyncTask(), null);
        [DebuggerHidden]
        public static AsyncTask Create(bool fromPool = false)
        {
            if (fromPool)
            {
                return AsyncTaskPool.Allocate();
            }
            return new AsyncTask();
        }
        [DebuggerHidden]
        public override void OnAllocate()
        {
            IsCompleted = false;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Token?.Dispose();
            continuation = null;
            Token = null;
            Exception = null;

        }
    }


    /// <summary>
    /// OnCompleted
    /// </summary>
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAuthorization, IAsyncTokenProperty
    {

        /// <summary>
        /// 获取等待器
        /// </summary>
        /// <returns></returns>
        [DebuggerHidden]
        public AsyncTask GetAwaiter() => this;

        /// <summary>
        /// 该方法通过协程方式调用
        /// </summary>
        [DebuggerHidden]
        public async void Coroutine()
        {
            await this;
        }

        #region Completed


        [DebuggerHidden]
        public bool IsCompleted { get; set; } = false;

        //在结束时调用，无论是否成功
        public event Action OnAsyncCompleted = null;

        private Action continuation;
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



        #region Token
        /// <summary>
        /// 异步令牌，与AsyncToken作用相同
        /// </summary>
        public AsyncTreeTokenNode Token { get; set; } = null;

        private bool authorization = true;
        /// <summary>
        /// 授权状态，代表当前任务是否被挂起，也决定了状态机是否能够继续前进
        /// </summary>
        public bool Authorization { get => authorization; set => authorization = value; }
        #endregion


        
    }

    /// <summary>
    /// SetResult/SetException
    /// </summary>
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAuthorization, IAsyncTokenProperty
    {
        

        /// <summary>
        /// 返回await结果，非必要禁止手动调用
        /// </summary>
        [DebuggerHidden]
        public void GetResult()
        {
        }

        public AsyncTask()
        {
            SetResult = SetResultMethod;
        }
        /// <summary>
        /// 结束当前await并设置结果，调用该方法即代表任务结束，允许手动调用提前结束或者当异步结束自动调用
        /// </summary>
        [DebuggerHidden]
        public Action SetResult { get; private set; }
        [DebuggerHidden]
        private void SetResultMethod()
        {
            if(IsCompleted) throw new InvalidOperationException("AsyncTask dont allow SetResult repeatly.");
            IsCompleted = true;
            if (Authorization)
            {
                //执行await以后的代码
                continuation?.Invoke();
            }
            OnAsyncCompleted?.Invoke();
            //回收到Pool
            this.Dispose();
            
        }

        /// <summary>
        /// 代表过程出现的异常
        /// </summary>
        [DebuggerHidden]
        public ExceptionDispatchInfo Exception { get; private set; }
        /// <summary>
        /// 为当前任务设置异常，一种情况为手动调用设置，另一种为异步过程出现异常
        /// </summary>
        /// <param name="exception"></param>
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
           
            SetResultMethod();

        }
    }

}
