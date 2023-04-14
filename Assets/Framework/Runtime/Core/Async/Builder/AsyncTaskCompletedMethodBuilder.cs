/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 构建AsyncTaskCompleted的状态机
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;

namespace AirFramework
{
    public struct AsyncTaskCompletedMethodBuilder
    {
        // 1. Static PoolGet method.
        [DebuggerHidden]
        public static AsyncTaskCompletedMethodBuilder Create()
        {
            return new AsyncTaskCompletedMethodBuilder(AsyncTaskCompleted.Create());
        }
        public AsyncTaskCompletedMethodBuilder(AsyncTaskCompleted task)
        {
            this.task = task;
        }


        private AsyncTaskCompleted task;

        //2.Current-Like
        public AsyncTaskCompleted Task => task;

        // 3. SetException
        [DebuggerHidden]
        public void SetException(Exception exceptions)
        {
        }

        // 4. SetResult
        [DebuggerHidden]
        public void SetResult()
        {
        }

        // 5. AwaitOnCompleted
        [DebuggerHidden]
        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 6. AwaitUnsafeOnCompleted
        [DebuggerHidden]
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.UnsafeOnCompleted(stateMachine.MoveNext);
        }

        // 7. Start
        [DebuggerHidden]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        // 8. SetStateMachine
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {
        }
    }
}
