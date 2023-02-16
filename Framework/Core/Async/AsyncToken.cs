using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor.VersionControl;
using UnityEngine;

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
    public class AsyncToken : PoolableObject<AsyncToken>
    {
        public AsyncStatus Status { get; set; } = AsyncStatus.Pending;
        public IAsyncTokenProperty Task { get; set; }
        public IAsyncTokenProperty RootTask { get; set; }

        public void Yield()
        {
            if (Status == AsyncStatus.Completed) throw new InvalidOperationException();
            
            if(Task.Token!=this)this.Task.Token?.Yield();
            else Task.Authorization = false;
            Status = AsyncStatus.Yield;
        }
        public void Continue()
        {
            if(Status==AsyncStatus.Completed) throw new InvalidOperationException();
            
            if (Task.Token != this) this.Task.Token?.Continue();
            else Task.Authorization = true;
            Status = AsyncStatus.Pending;
        }
        public void Cancel()
        {
            Yield();
            Status = AsyncStatus.Completed;
            if (Task.Token != this) this.Task.Token?.Cancel();
           
            Task.Recycle();
            RootTask.SetException(new Exception("Cancel"));
        }


        public override void OnAllocate()
        {
           Status= AsyncStatus.Pending;
            
        }

        public override void OnRecycle()
        {
            Task = null;
            RootTask = null;
        }
    }

}
