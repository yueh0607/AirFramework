﻿using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{
    public struct AsyncTaskMethodBuilder
    {
        private AsyncTask task;

        // 1. Static Create method 编译器调用静态创建方法来创建Builder
        [DebuggerHidden]
        public static AsyncTaskMethodBuilder Create() => new AsyncTaskMethodBuilder(AsyncTask.Create(fromPool:true));

        //2.Construct Method 构造Builder时调用
        public AsyncTaskMethodBuilder(AsyncTask task)
        {  
            this.task =  task.InitToken(Framework.Pool.Allocate<AsyncTreeTokenNode>());
        }


        // . TaskLike Task property.
        [DebuggerHidden]
        public AsyncTask Task
        {
            get
            {
                return task;
            }
        }

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
