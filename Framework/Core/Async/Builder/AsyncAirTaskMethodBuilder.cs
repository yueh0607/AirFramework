using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security;


namespace AirFramework
{
    internal struct AsyncAirTaskMethodBuilder
    {
        private AirTask task;

        // 1. Static Create method 编译器调用静态创建方法来创建Builder
        [DebuggerHidden]
        public static AsyncAirTaskMethodBuilder Create() => new AsyncAirTaskMethodBuilder(AirTask.Create(fromPool:true));

        //2.Construct Method 构造Builder时调用
        public AsyncAirTaskMethodBuilder(AirTask task) => this.task = task;


        // . TaskLike Task property.
        [DebuggerHidden]
        public AirTask Task => task;

        // 3. Start 构造之后开启状态机
        [DebuggerHidden]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        // 4. SetException 当出现异常时编译器调用，将异常绑定到任务
        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            task.SetException(exception);
        }

        // 5. SetResult 当任务成功完成时编译器调用这个方法,将该任务标记为已成功完成
        [DebuggerHidden]
        public void SetResult()
        {
            task.SetResult();
        }

        // 6. AwaitOnCompleted  在SetResult之后编译器调用OnCompleted
        [DebuggerHidden]

        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 7. AwaitUnsafeOnCompleted 同OnCompleted
        [SecuritySafeCritical]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : Entity, ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine  将生成器与指定的状态机相关联
        [DebuggerHidden]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

}
