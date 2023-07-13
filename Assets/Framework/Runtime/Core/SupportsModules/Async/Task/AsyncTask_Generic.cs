/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * AsyncTask泛型类
 */

using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    /// <summary>
    /// 此分部类负责对象池
    /// </summary>
    [AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder<>))]
    public partial class AsyncTask<T> : PoolableObject
    {

        public AsyncTask() => Token = new(this, this);

        [DebuggerHidden]
        public override void OnAllocate()
        {
            Token.Current = this;
            Token.Root = this;
            IsCompleted = false;
            Authorization = true;
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Authorization = false;
            continuation = null;
        }
    }

    /// <summary>
    /// SetResult/SetException
    /// </summary>
    public partial class AsyncTask<T> : IAsyncTokenProperty, IAsyncTask<T>, IAwaitable<AsyncTask<T>, T>
    {
        #region Method
        [DebuggerHidden]
        public AsyncTask<T> GetAwaiter() => this;

        [DebuggerHidden]
        public async void Coroutine() => await this;

        #endregion

        #region OnCompleted
        public event Action<T> OnTaskCompleted = null;
        private Action continuation = null;
        [DebuggerHidden]
        public bool IsCompleted { get; set; } = false;
        [DebuggerHidden]
        public void OnCompleted(Action continuation) => UnsafeOnCompleted(continuation);

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation) => this.continuation = continuation;


        #endregion

        #region Token
        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }

        /// <summary>
        /// 授权状态：代表当前任务是否挂起与任务链能否继续
        /// </summary>
        public bool Authorization { get; internal set; } = true;

        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }
        #endregion


        #region Result
        public T Result { get; set; } = default;
        /// <summary>
        /// 返回await结果
        /// </summary>
        [DebuggerHidden]
        public T GetResult() => Result;

        private Action<T> setResult = null;
        /// <summary>
        /// 结束当前await并设置结果
        /// </summary>
        [DebuggerHidden]
        public Action<T> SetResult
        {
            get
            {
                setResult ??= SetResultMethod;
                return setResult;
            }
        }
        private Action unsafeSetResult = null;
        /// <summary>
        /// 结束当前await并设置结果,该方法并不安全，如果没有提前对Result赋值可能导致出现Result为默认值的情况
        /// </summary>
        public Action UnsafeSetResult
        {
            get
            {
                unsafeSetResult ??= UnsafeSetResultMethod;
                return unsafeSetResult;
            }
        }
        [DebuggerHidden]
        private void SetResultMethod(T result)
        {
            if (Authorization)
            {
                if (IsCompleted) throw new InvalidOperationException("AsyncTask dont allow SetResult repeatly.");
                this.Result = result;
                //执行await以后的代码
                continuation?.Invoke();
                continuation = null;
            }
            IsCompleted = true;
            OnTaskCompleted?.Invoke(result);
            //回收到Pool
            this.Dispose();
        }
        [DebuggerHidden]
        private void UnsafeSetResultMethod() => SetResultMethod(this.Result);

        [DebuggerHidden]
        public void SetException(Exception exception)
        {
            Async_Setting.ExceptionHandler?.Invoke(exception);
            SetResultMethod(this.Result);
        }
        public void SetCancel() => SetResultMethod(default);
        #endregion

    }
}
