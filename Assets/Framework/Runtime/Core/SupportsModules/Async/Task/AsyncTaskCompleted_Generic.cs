/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 跳过一帧的任务
 */


using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskCompletedMethodBuilder<>))]
    public class AsyncTaskCompleted<T> : PoolableObject, IAsyncTokenProperty, IAsyncTask<T>
    {
        public static AsyncTaskCompleted<T> Create() => Framework.Pool.Allocate<AsyncTaskCompleted<T>>();
        public AsyncTaskCompleted() => Token = new(this, this);
        [DebuggerHidden]
        public AsyncTaskCompleted<T> GetAwaiter() => this;


        [DebuggerHidden]
        public bool IsCompleted { get; set; } = true;

        #region Token
        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }

        public bool Authorization { get; internal set; } = true;
        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }

        Action<T> IAsyncTask<T>.SetResult => throw new InvalidOperationException("You shouldn't get this Property!");
        #endregion


        [DebuggerHidden]
        public void OnCompleted(Action continuation) => UnsafeOnCompleted(continuation);

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
            continuation?.Invoke();
        }
        public T result { get; private set; }
        public void SetResult(T result)
        {
            this.result = result;
            Dispose();
        }
        public override void OnAllocate()
        {
            Token.Root = this;
            Token.Current = this;
            Authorization = true;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Authorization = false;
        }
        public void SetException(Exception exception)
        {
            SetResult(default);
        }
        [DebuggerHidden]
        public T GetResult()
        {
            return result;
        }
    }
}
