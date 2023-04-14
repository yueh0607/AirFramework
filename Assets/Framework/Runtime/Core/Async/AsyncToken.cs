﻿/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 提供异步令牌给用户进行操作，方便用户挂起，结束异步任务
 */


using System;

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
    public sealed class AsyncToken : PoolableObject<AsyncToken>
    {
        //internal static T BindToken<T>(T task, AsyncTreeTokenNode token) where T : IAsyncTokenProperty
        //{
        //    task.Token?.Dispose();
        //    task.Token = token;
        //    token.Current = task;
        //    token.Root = task;
        //    return task;
        //}

        internal AsyncTreeTokenNode node;

        public AsyncStatus Status { get; private set; } = AsyncStatus.Pending;

        //private AsyncToken() { }
        public void Yield()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException();
            Status = AsyncStatus.Yield;
            node.Yield();
        }
        public void Continue()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException();
            Status = AsyncStatus.Pending;
            node.Continue();
        }
        public void Cancel()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException();
            Status = AsyncStatus.Completed;
            node.Cancel();
        }

        public override void OnAllocate()
        {
           
        }

        public override void OnRecycle()
        {
           
        }
    }
}
