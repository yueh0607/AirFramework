/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 提供异步令牌给用户进行操作，方便用户挂起，结束异步任务
 */


using AirFramework.Internal;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    /// <summary>
    /// 每个小任务都只能有这三种状态
    /// </summary>

    public enum AsyncStatus
    {
        //等待ing
        Pending,
        //挂起
        Yield,
        //结束
        Completed
    }

    public interface ICancelCallback
    {
        public void OnCancel();
    }

    public sealed class AsyncToken : PoolableObject
    {

        public event Action OnCanceled = null;
        private List<ICancelCallback> callbacks = null;
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AddCancelCallback(ICancelCallback callback)
        {
            callbacks ??= new List<ICancelCallback>();
            callbacks.Add(callback);
        }



        public override void OnAllocate()
        {
            this.Status = AsyncStatus.Pending;
            this.node = default;
        }

        public override void OnRecycle()
        {
            this.Status = AsyncStatus.Pending;
            this.node = default;
            this.callbacks.Clear();
        }



        internal AsyncTreeTokenNode node;

        [DebuggerHidden]
        public AsyncStatus Status { get; private set; } = AsyncStatus.Pending;

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Yield()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException("尝试挂起已经结束的任务是无效的");
            Status = AsyncStatus.Yield;
            node.Yield();
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Continue()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException("尝试取消已经结束的任务是无效的");
            Status = AsyncStatus.Pending;
            node.Continue();
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Cancel()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException();
            Status = AsyncStatus.Completed;
            node.Cancel();
            OnCanceled?.Invoke();
            if (callbacks != null)
                for (int i = 0; i < callbacks.Count; i++) callbacks[i]?.OnCancel();
        }






    }
}
