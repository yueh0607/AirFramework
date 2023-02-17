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
    /// 匹配编译器要求
    /// </summary>
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAuthorization, IAsyncTokenProperty
    {
        [DebuggerHidden]
        public AsyncTask GetAwaiter() => this;


        [DebuggerHidden]
        public bool IsCompleted { get; set; }
    }

    /// <summary>
    /// SetResult/SetException
    /// </summary>
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAuthorization, IAsyncTokenProperty
    {

        /// <summary>
        /// 返回await结果
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
            }
            OnAsyncCompleted?.Invoke();
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
            SetResultMethod();
        }
    }

    /// <summary>
    /// OnCompleted
    /// </summary>
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAuthorization,IAsyncTokenProperty
    {
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

    }


    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask,IAuthorization, IAsyncTokenProperty
    {
        public event Action OnAsyncCompleted = null;

        public AsyncTreeTokenNode Token { get; set; } = null;

        private bool authorization = true;
        public bool Authorization { get => authorization; set => authorization = value; }



        [DebuggerHidden]
        public async void Coroutine()
        {
            await this;
        }


    }

}
