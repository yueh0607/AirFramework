/********************************************************************************************
 * Author : yueh0607
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
    public class AsyncTaskCompleted : PoolableObject<AsyncTaskCompleted>,ICriticalNotifyCompletion,IAsyncTokenProperty
    {
        public static void Create() =>Framework.Pool.Allocate<AsyncTaskCompleted>();

        [DebuggerHidden]
        public AsyncTaskCompleted GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted => true;


        private AsyncTreeTokenNode token;
        public AsyncTreeTokenNode Token { get => token; set => token=value; }
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
    }
}
