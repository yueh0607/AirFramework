using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework.Assets.Framework.Core
{
    public struct AsyncSVoidMethodBuilder
    {
        public static AsyncSVoidMethodBuilder Create()
        {
            return default(AsyncSVoidMethodBuilder);
        }

        public AirVoid Task => default(AirVoid);  //无需返回值

        public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
        {
            stateMachine.MoveNext();
        }

        public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.OnCompleted(stateMachine.MoveNext);
        }

        public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine)
            where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
        {
            awaiter.UnsafeOnCompleted(stateMachine.MoveNext);
        }

        public void SetException(Exception exception)
        {
            Log.Error($"SVoid SetException:{exception}");
        }

        public void SetResult()
        {

        }

        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {

        }
    }


    [AsyncMethodBuilder(typeof(AsyncSVoidMethodBuilder))]
    public struct AirVoid
    {
        public void Coroutine() { }
    }
}
