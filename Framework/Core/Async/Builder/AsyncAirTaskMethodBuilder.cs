using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{
    public struct AsyncAirTaskMethodBuilder
    {
        private AirTask task;

        // 1. Static Create method 编译器调用静态创建方法来创建Builder
        [DebuggerHidden]
        public static AsyncAirTaskMethodBuilder Create() => new AsyncAirTaskMethodBuilder(AirTask.Create(fromPool:true));

        //2.Construct Method 构造Builder时调用
        public AsyncAirTaskMethodBuilder(AirTask task)
        {
            "Builder.Construct".L();
            this.task = task;
        }


        // . TaskLike Task property.
        [DebuggerHidden]
        public AirTask Task
        {
            get

            {
                //"Builder.Task.Get".L();
                return task;
            }
        }

        // 3. Start 构造之后开启状态机
        [DebuggerHidden]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
            //"Builder.Start".L();
        }

        // 4. SetException 
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            //"Builder.SetException".L();
            task.SetException(exception);
        }

        // 5. SetResult 
        [DebuggerHidden]
        public void SetResult()
        {
            //"Builder.SetResult".L();
            task.SetResult();
        }

        // 6. AwaitOnCompleted  
        [DebuggerHidden]

        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) 
            where TAwaiter : AirTask where TStateMachine : IAsyncStateMachine
        {
            awaiter.Token = task.Token;
            awaiter.OnCompleted(stateMachine.MoveNext);
            
        }

        // 7. AwaitUnsafeOnCompleted 
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) 
            where TAwaiter : AirTask where TStateMachine : IAsyncStateMachine
        {
            awaiter.Token = task.Token;
            awaiter.OnCompleted(stateMachine.MoveNext);

        }

        // 9. SetStateMachine  将生成器与指定的状态机相关联
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {
           // "Builder.SetStateMachine".L();
        }
    }

}
