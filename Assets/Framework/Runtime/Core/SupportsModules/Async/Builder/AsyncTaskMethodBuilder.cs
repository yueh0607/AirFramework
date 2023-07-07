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

        // 1. Static Create method
        [DebuggerHidden]
        public static AsyncTaskMethodBuilder Create() => new(Framework.Pool.Allocate<AsyncTask>());
        public AsyncTaskMethodBuilder(AsyncTask task)
        {
            this.task = task;
        }


        private AsyncTask task;
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
            if (task == null) "Error".L();
            if (exception == null) "E".L();
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
            task.Token.Current = awaiter as IAsyncTokenProperty;

            awaiter.OnCompleted(stateMachine.MoveNext);

        }

        // 7. AwaitUnsafeOnCompleted 
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {

            task.Token.Current = awaiter as IAsyncTokenProperty;
            //if (task.Token.Current == null) "ERROR".E();
            // $"切换到{((Unit)task.Token.Current).ID}".L();
            //$"builder任务ID：{task.ID}  builder令牌ID:{task.Token.ID} buiilder当前任务ID:{((Unit)(task.Token.Current)).ID }  授权:{task.Token.Current.Authorization}".L();

            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine 
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

}
