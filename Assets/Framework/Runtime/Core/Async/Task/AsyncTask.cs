/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 使用内部对象池进行任务回收利用，消除异步任务的GC
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;

namespace AirFramework
{
    /// <summary>
    /// 此分部类负责对象池
    /// </summary>
    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public partial class AsyncTask : PoolableObject<AsyncTask>, IAsyncTask, IAsyncTokenProperty
    {
        [DebuggerHidden]
        internal static ManagedPool<AsyncTask> AsyncTaskPool { get; } = Framework.Pool.CreateAutoBindablePool(() => new AsyncTask(), null);
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
        public event Action OnTaskCompleted = null;

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
        } 

        private Action setResult = null;
        /// <summary>
        /// 结束当前await并设置结果
        /// </summary>
        [DebuggerHidden]
        public Action SetResult
        {
            get
            {
                if (setResult == null)
                {
                    setResult = SetResultMethod;
                }
                return setResult;
            }
        }
        [DebuggerHidden]
        private void SetResultMethod()
        {
            if (IsCompleted) throw new InvalidOperationException("AsyncTask dont allow SetResult repeatly.");
            IsCompleted = true;
            if (Authorization)
            {
                //执行await以后的代码
                continuation?.Invoke();
            }
            OnTaskCompleted?.Invoke();
            //回收到Pool
            this.Dispose();

        }

       
        [DebuggerHidden]
        public ExceptionDispatchInfo Exception { get; private set; }
        /// <summary>
        /// 为当前任务设置异常，一种情况为手动调用设置，另一种为异步过程出现异常,取消也是异常
        /// </summary>
        /// <param name="exception"></param>
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            SetResultMethod();
        }
    }

}
