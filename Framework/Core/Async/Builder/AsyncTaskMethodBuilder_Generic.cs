using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{


    public struct AsyncTaskMethodBuilder<T>
    {
        private AsyncTask<T> task;
        // 1. Static Create method.

        [DebuggerHidden]
        public static AsyncTaskMethodBuilder<T> Create()
        {

            return new AsyncTaskMethodBuilder<T>(AsyncTask<T>.Create(fromPool: true));
        }
        public AsyncTaskMethodBuilder(AsyncTask<T> task)
        {
            this.task = task.InitToken(Framework.Pool.Allocate<AsyncTreeTokenNode>());
        }

        // 2. TaskLike Task property.
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

            if (task.Token is not null)
            {
                task.Token.Task = awaiter as IAsyncTokenProperty;
            }
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 6. AwaitUnsafeOnCompleted
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) 
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            if (task.Token is not null)
            {
                task.Token.Task = awaiter as IAsyncTokenProperty;
                //$"源任务ID：{task.ID}  源任务令牌ID:{task.Token.ID} 令牌任务当前ID:{task.Token.Task.ID}  授权信息:{task.Token.Task.Authorization}".L();
            }
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
