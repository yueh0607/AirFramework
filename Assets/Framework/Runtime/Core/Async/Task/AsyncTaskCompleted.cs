/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 这个类主要是表示任务立刻完成，比如在if里缺少await的情况可以试试用这个配位
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskUpdateMethodBuilder))]
    public class AsyncTaskUpdate : PoolableObject<AsyncTaskUpdate>, ICriticalNotifyCompletion, IAsyncTokenProperty, IUpdate
    {
        public static void Create() => Framework.Pool.Allocate<AsyncTaskUpdate>();

        [DebuggerHidden]
        public AsyncTaskUpdate GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted => true;
        private Action continuation = null;

        private AsyncTreeTokenNode token;
        public AsyncTreeTokenNode Token { get => token; set => token = value; }
        public bool Authorization { get; set; } = true;

        [DebuggerHidden]
        public void GetResult()
        {

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
        private void SetResult()
        {
            continuation?.Invoke();
            Dispose();
        }


        public override void OnAllocate()
        {

        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Token?.Dispose();
            Token = null;
        }
        public void SetException(Exception exception)
        {

        }

        void IUpdate.Update(float deltaTime)
        {
            SetResult();
        }
    }
}
