/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 跳过一帧的任务
 */


using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskCompletedMethodBuilder))]
    public class AsyncTaskCompleted : PoolableObject, IAsyncTokenProperty, IAsyncTask
    {
        public static AsyncTaskCompleted Create(bool fromPool = false) => fromPool ? Framework.Pool.Allocate<AsyncTaskCompleted>() : new();
        public AsyncTaskCompleted() => Token = new(this, this);


        [DebuggerHidden]
        public AsyncTaskCompleted GetAwaiter() => this;


        [DebuggerHidden]
        public bool IsCompleted { get; set; } = true;

        #region Token
        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }

        public bool Authorization { get; internal set; } = true;
        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }


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
        #endregion


        [DebuggerHidden]
        public void GetResult() { }

        [DebuggerHidden]
        public void OnCompleted(Action continuation) => UnsafeOnCompleted(continuation);


        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
            SetResult();
        }


        private Action continuation = null;

        private void SetResultMethod()
        {
            if (Authorization)
            {
                continuation?.Invoke();
                continuation = null;
            }
            Dispose();
        }
        public override void OnAllocate()
        {
            Token.Root = this;
            Token.Current = this;
            Authorization = true;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Authorization = false;
        }
        public void SetException(Exception exception)
        {
            AirFramework.Internal.Async_Tools.Capture(exception);

            SetResult();
        }
    }
}
