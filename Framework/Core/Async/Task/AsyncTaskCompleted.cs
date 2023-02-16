using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{


    [AsyncMethodBuilder(typeof(AsyncTaskCompletedMethodBuilder))]
    public class AsyncTaskCompleted : PoolableObject<AsyncTaskCompleted>,ICriticalNotifyCompletion
    {
        


        public static void Create() =>Framework.Pool.Allocate<AsyncTaskCompleted>();

        [DebuggerHidden]
        public AsyncTaskCompleted GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted => true;


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


        [DebuggerHidden]
        public override void OnAllocate()
        {
            
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            
        }
    }
}
