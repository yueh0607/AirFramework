/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 跳过一帧的任务
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskCompletedMethodBuilder))]
    public class AsyncTaskCompleted : PoolableObject<AsyncTaskCompleted>, ICriticalNotifyCompletion, IAsyncTokenProperty
    {
        public static AsyncTaskCompleted Create() => Framework.Pool.Allocate<AsyncTaskCompleted>();
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
        #endregion
       

        [DebuggerHidden]
        public void GetResult() { }

        [DebuggerHidden]
        public void OnCompleted(Action continuation)=> UnsafeOnCompleted(continuation);

        private Action continuation;
        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
            SetResult();
        }

        private void SetResult()
        {

            if (Authorization)
            {
                continuation?.Invoke();
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
            SetResult();
        }
    }
}
