/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 使用内部对象池进行任务回收利用，消除异步任务的GC
 */


using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    /// <summary>
    /// 此分部类负责对象池
    /// </summary>
    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public partial class AsyncTask : PoolableObject
    {
        public AsyncTask()=>Token = new(this, this);
        
        [DebuggerHidden]
        public override void OnAllocate()
        {
            Token.Current = this;
            Token.Root = this;
            IsCompleted = false;
            Authorization = true;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Authorization = false;
            continuation = null;
        }
    }


    public partial class AsyncTask : IAsyncTokenProperty, IAwaitable<AsyncTask>,IAsyncTask
    {
        #region Method
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

        #endregion


        #region Completed
        [DebuggerHidden]
        public bool IsCompleted { get; set; } = false;

        //在结束时调用，无论是否成功
        public event Action OnTaskCompleted = null;

        private Action continuation;
        [DebuggerHidden]
        public void OnCompleted(Action continuation) => UnsafeOnCompleted(continuation);

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation) => this.continuation = continuation;

        #endregion

        #region Token
        /// <summary>
        /// 异步令牌，与AsyncToken作用相同
        /// </summary>
        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }


        /// <summary>
        /// 授权状态，代表当前任务是否被挂起，也决定了状态机是否能够继续前进
        /// </summary>
        public bool Authorization { get; internal set; } = true;
        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }
        #endregion

        #region Result

        /// <summary>
        /// 返回await结果，非必要禁止手动调用
        /// </summary>
        [DebuggerHidden]
        public void GetResult()
        {
            // Method intentionally left empty.
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
                setResult ??= SetResultMethod;
                return setResult;
            }
        }
        [DebuggerHidden]
        private void SetResultMethod()
        {
            if (Authorization)
            {
                if (IsCompleted) throw new InvalidOperationException("AsyncTask dont allow SetResult repeatly.");
                //执行await以后的代码
                continuation?.Invoke();
                continuation = null;
            }
            IsCompleted = true;
            OnTaskCompleted?.Invoke();
            //回收到Pool
            this.Dispose();
        }

        /// <summary>
        /// 为当前任务设置异常，一种情况为手动调用设置，另一种为异步过程出现异常,取消也是异常
        /// </summary>
        /// <param name="exception"></param>
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            SetResultMethod();
            Async_Setting.ExceptionHandler?.Invoke(exception);
        }

        public void SetCancel()=>SetResultMethod();
        #endregion
    }


}
