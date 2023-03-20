/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.2.25
 * Description : 
 * 该类主要是为了构建AsyncTaskCompleted的状态机
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;

namespace AirFramework
{
    public struct AsyncTaskUpdateMethodBuilder
    {
        // 1. Static PoolGet method.
        [DebuggerHidden]
        public static AsyncTaskUpdateMethodBuilder Create()
        {
            return new AsyncTaskUpdateMethodBuilder();
        }

        private AsyncTaskUpdate task;
        //2.Task-Like
        public AsyncTaskUpdate Task => task;
       
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
            if (task.Token is not null)
            {
                task.Token.Task = awaiter as IAsyncTokenProperty;
                //$"源任务ID：{task.ID}  源任务令牌ID:{task.Token.ID} 令牌任务当前ID:{task.Token.Task.ID }  授权信息:{task.Token.Task.Authorization}".L();
            }
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 6. AwaitUnsafeOnCompleted
        [DebuggerHidden]
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter :  ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            if (task.Token is not null)
            {
                task.Token.Task = awaiter as IAsyncTokenProperty;
                //$"源任务ID：{task.ID}  源任务令牌ID:{task.Token.ID} 令牌任务当前ID:{task.Token.Task.ID }  授权信息:{task.Token.Task.Authorization}".L();
            }
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
