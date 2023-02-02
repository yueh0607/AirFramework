using System;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    public struct AirTaskMethodBuilder
    {
        public static AirTaskMethodBuilder Create() => new();

        private AirTask task;

        /// <summary>
        /// 编译器事件： 返回任务，无论是否已经完成
        /// </summary>
        public AirTask Task { get => task; }

        /// <summary>
        /// 编译器事件：开启状态机
        /// </summary>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="stateMachine"></param>
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        /// <summary>
        /// 编译器事件：执行完成时调用
        /// </summary>
        /// <typeparam name="TAwaiter"></typeparam>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="awaiter"></param>
        /// <param name="stateMachine"></param>
        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        /// <summary>
        /// 编译器事件：该状态尚未执行完毕，获得控制权（MoveNext方法）
        /// </summary>
        /// <typeparam name="TAwaiter"></typeparam>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="awaiter"></param>
        /// <param name="stateMachine"></param>
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.UnsafeOnCompleted(stateMachine.MoveNext);
        }

        /// <summary>
        /// 编译器事件：设置执行过程出现的异常
        /// </summary>
        /// <param name="exception"></param>
        public void SetException(Exception exception)
        {
            task.Awaiter.SetException(exception);
        }
        /// <summary>
        /// 编译器事件：设置结果
        /// </summary>
        public void SetResult()
        {
            task.Awaiter.SetResult();
        }
        /// <summary>
        /// 编译器事件：设置状态机
        /// </summary>
        /// <param name="stateMachine"></param>
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }



    public struct AirTaskMethodBuilder<TResult>
    {
        public static AirTaskMethodBuilder<TResult> Create() => new();

        private AirTask<TResult> task;

        /// <summary>
        /// 编译器事件： 返回任务，无论是否已经完成
        /// </summary>
        public AirTask<TResult> Task => task;

        /// <summary>
        /// 编译器事件：开启状态机
        /// </summary>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="stateMachine"></param>
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        /// <summary>
        /// 编译器事件：执行完成时调用
        /// </summary>
        /// <typeparam name="TAwaiter"></typeparam>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="awaiter"></param>
        /// <param name="stateMachine"></param>
        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        /// <summary>
        /// 编译器事件：该状态尚未执行完毕，获得控制权（MoveNext方法）
        /// </summary>
        /// <typeparam name="TAwaiter"></typeparam>
        /// <typeparam name="TStateMachine"></typeparam>
        /// <param name="awaiter"></param>
        /// <param name="stateMachine"></param>
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.UnsafeOnCompleted(stateMachine.MoveNext);
        }

        /// <summary>
        /// 编译器事件：设置执行过程出现的异常
        /// </summary>
        /// <param name="exception"></param>
        public void SetException(Exception exception)
        {
            task.Awaiter.SetException(exception);
        }
        /// <summary>
        /// 编译器事件：设置结果
        /// </summary>
        public void SetResult(TResult result)
        {
            task.Awaiter.SetResult(result);
        }
        /// <summary>
        /// 编译器事件：设置状态机
        /// </summary>
        /// <param name="stateMachine"></param>
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }

    }
}



