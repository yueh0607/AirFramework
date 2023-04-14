/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 构建AsyncTask的状态机
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
            this.task = task;
        }

        // 2. TaskLike Current
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
            task.Token.SetCurrent(awaiter as IAsyncTokenProperty);

            awaiter.OnCompleted(stateMachine.MoveNext);

        }

        // 7. AwaitUnsafeOnCompleted 
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {

            task.Token.SetCurrent(awaiter as IAsyncTokenProperty);
            //if (task.Token.Current == null) "ERROR".E();
            // $"切换到{((Unit)task.Token.Current).ID}".L();
            //$"builder任务ID：{task.ID}  builder令牌ID:{task.Token.ID} buiilder当前任务ID:{((Unit)(task.Token.Current)).ID }  授权:{task.Token.Current.Authorization}".L();

            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine  将生成器与指定的状态机相关联
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

}
