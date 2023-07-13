/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 提供异步令牌给用户进行操作，方便用户挂起，结束异步任务
 */


using CoFramework.Tasks.Internal;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace CoFramework.Tasks
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

    public sealed class AsyncToken
    {

        public event Action OnCanceled = null;
        private List<ICancelCallback> callbacks = null;
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AddCancelCallback(ICancelCallback callback)
        {
            callbacks ??= new List<ICancelCallback>();
            callbacks.Add(callback);
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AsyncToken Create()
        {
            AsyncToken token = Framework.GlobalAllocate<AsyncToken>();
            token.Status = AsyncStatus.Pending;
            token.node = default;
            return token;
        }

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void Recycle(AsyncToken token)
        {
            token.Status = AsyncStatus.Pending;
            token.node = default;
            token.callbacks.Clear();
            Framework.GlobalRecycle(token);

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

        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void RecycleSelf() => AsyncToken.Recycle(this);

    }
}
