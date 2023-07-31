using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;

namespace AirFramework
{
    public struct AirTaskBuilder
    {

        // 1. Static GetFromPool method
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AirTaskBuilder Create() => new AirTaskBuilder(Framework.Pool.Allocate<AirTask>());


        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public AirTaskBuilder(AirTask task) => this.task = task;


        private readonly AirTask task;



        [DebuggerHidden]
        public AirTask Task => task;



        // 3. Start 构造之后开启状态机
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        // 4. SetException 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetException(Exception exception)
        {

            task.Finish(ETaskStatus.Failed);
            task.PostException(ExceptionDispatchInfo.Capture(exception));
        }

        // 5. SetResult 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetResult()
        {
            task.Finish(ETaskStatus.Succeed);
        }

        // 6. AwaitOnCompleted  
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            Task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 7. AwaitUnsafeOnCompleted 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            Task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

    public struct AirTaskBuilder<T>
    {

        // 1. Static GetFromPool method
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AirTaskBuilder<T> Create() => new AirTaskBuilder<T>(Framework.Pool.Allocate<AirTask<T>>());
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public AirTaskBuilder(AirTask<T> task) => this.task = task;

        private readonly AirTask<T> task;
        // 2. TaskLike Current
        [DebuggerHidden]
        public AirTask<T> Task => task;


        // 3. Start 构造之后开启状态机
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        // 4. SetException 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetException(Exception exception)
        {
            // ExceptionDispatchInfo dispatcher = ExceptionDispatchInfo.Capture(exception);
            //UnityEngine.Debug.LogError(exception.ToString());
            task.Finish(ETaskStatus.Failed);
            task.PostException(ExceptionDispatchInfo.Capture(exception));
            //dispatcher.Throw();
        }

        // 5. SetResult 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetResult(T result)
        {
            task.Result = result;
            task.Finish(ETaskStatus.Succeed);
        }

        // 6. AwaitOnCompleted  
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            Task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 7. AwaitUnsafeOnCompleted 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {

            Task.Token.Current = awaiter as IAsyncTokenProperty;
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        // 9. SetStateMachine 
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }

}
