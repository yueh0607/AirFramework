/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 该类主要是为了构建AsyncTask的状态机
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{
    public struct AsyncTaskMethodBuilder
    {
        private AsyncTask task;

        // 1. Static PoolGet method
        [DebuggerHidden]
        public static AsyncTaskMethodBuilder Create() => new AsyncTaskMethodBuilder(AsyncTask.Create(fromPool: true));

        public AsyncTaskMethodBuilder(AsyncTask task)
        {
            this.task = InitToken(task, Framework.Pool.Allocate<AsyncTreeTokenNode>());
        }
        private static AsyncTask InitToken(AsyncTask task, AsyncTreeTokenNode token)
        {
            task.Token?.Dispose();
            task.Token = token;
            token.Task = task;
            token.RootTask = task;
            return task;
        }

        // 2. TaskLike Task
        [DebuggerHidden]
        public AsyncTask Task => task;

        // 3. Start 构造之后开启状态机
        [DebuggerHidden]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        // 4. SetException 
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            task.SetException(exception);
        }

        // 5. SetResult 
        [DebuggerHidden]
        public void SetResult()
        {
            task.SetResult();
        }

        // 6. AwaitOnCompleted  
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

        // 7. AwaitUnsafeOnCompleted 
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            if (task.Token is not null)
            {
                task.Token.Task = awaiter as IAsyncTokenProperty;
                //$"源任务ID：{task.ID}  源任务令牌ID:{task.Token.ID} 令牌任务当前ID:{task.Token.Task.ID }  授权信息:{task.Token.Task.Authorization}".L();
            }
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine  将生成器与指定的状态机相关联
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

}
