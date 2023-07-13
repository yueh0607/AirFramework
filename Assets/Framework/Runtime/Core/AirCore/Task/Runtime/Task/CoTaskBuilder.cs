using CoFramework.Tasks.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;

namespace CoFramework.Tasks
{
    public struct CoTaskBuilder
    {

        // 1. Static Create method
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTaskBuilder Create() => new CoTaskBuilder(CoTask.Create());


        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CoTaskBuilder(CoTask task) => this.task = task;


        private readonly CoTask task;



        [DebuggerHidden]
        public CoTask Task => task;



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

    public struct CoTaskBuilder<T>
    {

        // 1. Static Create method
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTaskBuilder<T> Create() => new CoTaskBuilder<T>(CoTask<T>.Create());
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CoTaskBuilder(CoTask<T> task) => this.task = task;

        private readonly CoTask<T> task;
        // 2. TaskLike Current
        [DebuggerHidden]
        public CoTask<T> Task => task;


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
