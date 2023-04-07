/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 此类为异步令牌的底层实现，要求形成任务树结构
 */

using System;

namespace AirFramework
{

    public class AsyncTreeTokenNode : PoolableObject<AsyncTreeTokenNode>
    {


        public IAsyncTokenProperty Task { get; set; }
        public IAsyncTokenProperty RootTask { get; set; }

        public void Yield()
        {
            if (Task.Token == null || Task.Token == this)
            {
                Task.Authorization = false;
            }
            else if (Task.Token != this)
            {
                this.Task.Token?.Yield();
            }
        }
        public void Continue()
        {
            if (Task.Token == null || Task.Token == this)
            {
                Task.Authorization = true;
            }
            else if (Task.Token != this)
            {
                this.Task.Token?.Yield();
            }

        }
        public void Cancel()
        {
            Yield();
            if (Task.Token == null || Task.Token == this)
            {
                Task?.SetException(new Exception("Cancel"));
                RootTask.SetException(new Exception("Cancel"));
            }
            else if (Task.Token != this)
            {
                this.Task.Token?.Cancel();
            }


        }


        public override void OnAllocate()
        {
        }

        public override void OnRecycle()
        {
            Task = null;
            RootTask = null;
        }
    }

}
