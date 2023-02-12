using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{


    [AsyncMethodBuilder(typeof(AsyncAirTaskCompletedMethodBuilder))]
    public class AirTaskCompleted : PoolableObject<AirTaskCompleted>,ICriticalNotifyCompletion
    {
        


        public static void Create() =>Framework.Pool.Allocate<AirTaskCompleted>();

        [DebuggerHidden]
        public AirTaskCompleted GetAwaiter() => this;

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
