
using CoFramework.Tasks.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;


namespace CoFramework.Tasks
{
    [AsyncMethodBuilder(typeof(CoTaskBuilder))]
    public partial class CoTask : CoTaskBase, IAsyncTask, IAsyncTokenProperty
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
        /// 创建并返回一个CoTask
        /// </summary>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTask Create()
        {
            CoTask task = Framework.GlobalAllocate<CoTask>();
            task.BaseAllocate();
            task.OnAwait = null;
            task.continuation = null;
            task._callback = null;
            return task;
        }

        /// <summary>
        /// 编编译器调用警告：本方法由编译器生成到用户调用以返回异步结果
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void GetResult() { }

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>
        public event Func<CoTask> OnAwait = null;

        /// <summary>
        /// 编编译器调用警告：本方法由编译器调用以支持await关键字
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CoTask GetAwaiter()
        {
            if (OnAwait == null) return this;
            var task = OnAwait();
            task.OnCompleted += FinishWith;
            return task;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void INotifyCompletion.OnCompleted(Action continuation) => ((ICriticalNotifyCompletion)this).UnsafeOnCompleted(continuation);
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void ICriticalNotifyCompletion.UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }

        protected Action<CoTask> _callback = null;

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>
        public event Action<CoTask> OnCompleted
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
        protected override void OnRecycle()
        {
            _callback = null;
            base.BaseRecycle();
            continuation = null;
        }



    }


    [AsyncMethodBuilder(typeof(CoTaskBuilder<>))]

    public partial class CoTask<T> : CoTaskBase, IAsyncTask<T>, IAsyncTokenProperty
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

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTask<T> Create()
        {
            CoTask<T> task = Framework.GlobalAllocate<CoTask<T>>();
            task.BaseAllocate();
            task.Result = default;
            task.OnAwait = null;
            task.continuation = null;
            task._callback = null;
            return task;
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T GetResult() => Result;


        /// <summary>
        /// 在任务完成时被调用
        /// </summary>


        public event Func<CoTask<T>> OnAwait = null;

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CoTask<T> GetAwaiter()
        {
            if (OnAwait == null) return this;
            var task = OnAwait();
            task.OnCompleted += FinishWith;

            return task;
        }

        protected Action<CoTask<T>> _callback = null;
        private Action continuation = null;

        /// <summary>
        /// 在任务完成时被调用
        /// </summary>

        public event Action<CoTask<T>> OnCompleted
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
        protected override void OnRecycle()
        {
            base.BaseRecycle();
            //Result = default;

        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void INotifyCompletion.OnCompleted(Action continuation) => ((ICriticalNotifyCompletion)this).UnsafeOnCompleted(continuation);
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        void ICriticalNotifyCompletion.UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;
        }


        public static explicit operator CoTask(CoTask<T> task)
        {
            CoTask _task = CoTask.Create();

            task._callback += (t) =>
                {
                    _task.Finish(t.Status);
                };
            return _task;

        }
    }





    public struct CoTaskCompleted : INotifyCompletion, ICoTask
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
    }
}
