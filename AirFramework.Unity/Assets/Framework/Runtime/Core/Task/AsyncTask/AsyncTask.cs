
using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace AirFramework
{
    [AsyncMethodBuilder(typeof(AsyncTaskBuilder))]
    public partial class AsyncTask : AsyncTaskBase, IAsyncTokenProperty, IAsyncTask
    {

        /// <summary>
        /// 状态切换
        /// </summary>
        protected Action continuation = null;

        /// <summary>
        /// 任务是否已经完成，与IsDone等同
        /// </summary>
        [DebuggerHidden]
        public bool IsCompleted => base.IsDone;



        /// <summary>
        /// 编编译器调用警告：本方法由编译器生成到用户调用以返回异步结果
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void GetResult() { }

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>
        public event Func<AsyncTask> OnAwait = null;

        /// <summary>
        /// 编编译器调用警告：本方法由编译器调用以支持await关键字
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public AsyncTask GetAwaiter()
        {
            if (OnAwait == null) return this;
            var task = OnAwait();
            task.Completed += FinishWith;
            return task;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void INotifyCompletion.OnCompleted(Action continuation) => ((ICriticalNotifyCompletion)this).UnsafeOnCompleted(continuation);
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void ICriticalNotifyCompletion.UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }

        protected Action<AsyncTask> _callback = null;

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>
        public event Action<AsyncTask> Completed
        {
            add
            {
                if (!base.IsDone)
                {
                    _callback += value;
                }
                else
                {
                    _callback += value;
                    value?.Invoke(this);
                }
            }
            remove
            {
                _callback -= value;
            }
        }


        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected override void OnFinish()
        {
            _callback?.Invoke(this);
            continuation?.Invoke();
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public override void OnRecycle()
        {
            _callback = null;
            base.BaseRecycle();
            continuation = null;
        }

        public override void OnAllocate()
        {
            this.BaseAllocate();
            this.OnAwait = null;
            this.continuation = null;
            this._callback = null;
        }


    }


    [AsyncMethodBuilder(typeof(AsyncTaskBuilder<>))]

    public partial class AsyncTask<T> : AsyncTaskBase, IAsyncTask<T>, IAsyncTokenProperty
    {

        [DebuggerHidden]
        public T Result { get; set; }

        private Action<T> finsh_withResult = null;

        [DebuggerHidden]
        public Action<T> FinishSucceedWithResult
        {
            get
            {
                finsh_withResult ??= (x) =>
                {
                    Result = x;
                    Finish(ETaskStatus.Succeed);
                };
                return finsh_withResult;
            }
        }

        public bool IsCompleted => base.IsDone;

        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        //public static AsyncTask<T> GetFromPool()
        //{
        //    AsyncTask<T> task = Framework.Pool.Allocate<AsyncTask<T>>();

        //    return task;
        //}

        public override void OnAllocate()
        {
            this.BaseAllocate();
            this.Result = default;
            this.OnAwait = null;
            this.continuation = null;
            this._callback = null;
        }

        public override void OnRecycle()
        {
            base.BaseRecycle();
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T GetResult() => Result;


        /// <summary>
        /// 在任务完成时被调用
        /// </summary>


        public event Func<AsyncTask<T>> OnAwait = null;

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public AsyncTask<T> GetAwaiter()
        {
            if (OnAwait == null) return this;
            var task = OnAwait();
            task.Completed += FinishWith;
            return task;
        }

        protected Action<AsyncTask<T>> _callback = null;
        private Action continuation = null;

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>

        public event Action<AsyncTask<T>> Completed
        {
            add
            {
                if (!IsDone)
                {
                    _callback += value;
                }
                else
                {
                    _callback += value;
                    value?.Invoke(this);
                }
            }
            remove
            {
                _callback -= value;
            }
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected override void OnFinish()
        {
            _callback?.Invoke(this);
            continuation?.Invoke();
        }



        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void INotifyCompletion.OnCompleted(Action continuation) => ((ICriticalNotifyCompletion)this).UnsafeOnCompleted(continuation);
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void ICriticalNotifyCompletion.UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }



        public static explicit operator AsyncTask(AsyncTask<T> task)
        {
            AsyncTask _task = Framework.Pool.Allocate<AsyncTask>();

            task._callback += (t) =>
                {
                    _task.Finish(t.Status);
                };
            return _task;

        }
    }





    public struct CoTaskCompleted : INotifyCompletion, ITask
    {
        [DebuggerHidden]
        public bool IsCompleted => true;
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void GetResult() { }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void SetException(Exception exception) { }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CoTaskCompleted GetAwaiter() => this;
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void OnCompleted(Action continuation) { }

        public event Action Completed
        {
            add
            {
                value?.Invoke();
            }
            remove
            {

            }
        }
    }
}
