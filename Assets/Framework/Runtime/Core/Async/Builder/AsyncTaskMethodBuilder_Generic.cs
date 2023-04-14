/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 构建AsyncTaskCompleted<>的状态机
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{

    public struct AsyncTaskMethodBuilder<T>
    {
        private AsyncTask<T> task;
        // 1. Static PoolGet method.

        [DebuggerHidden]
        public static AsyncTaskMethodBuilder<T> Create()
        {
            return new AsyncTaskMethodBuilder<T>(AsyncTask<T>.Create(fromPool: true));
        }
        public AsyncTaskMethodBuilder(AsyncTask<T> task)
        {
            this.task = task;
        }

        // 2. TaskLike Current property.
        [DebuggerHidden]
        public AsyncTask<T> Task => task;


        // 3. SetException
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            task.SetException(exception);
        }

        // 4. SetResult
        [DebuggerHidden]

        public void SetResult(T ret)
        {
            task.SetResult(ret);
        }

        // 5. AwaitOnCompleted
        [DebuggerHidden]

        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {

            task.Token.Current = awaiter as IAsyncTokenProperty;

            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 6. AwaitUnsafeOnCompleted
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
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
