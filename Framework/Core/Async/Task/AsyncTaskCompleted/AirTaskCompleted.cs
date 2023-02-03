using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{


    [AsyncMethodBuilder(typeof(AsyncAirTaskCompletedMethodBuilder))]
    public class AirTaskCompleted : Entity, ICriticalNotifyCompletion
    {
        [DebuggerHidden]
        public AirTaskCompleted GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted => true;

        [DebuggerHidden]
        public void GetResult()
        {
            Dispose();
        }

        [DebuggerHidden]
        public void OnCompleted(Action continuation)
        {
        }

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
        }
    }
}
