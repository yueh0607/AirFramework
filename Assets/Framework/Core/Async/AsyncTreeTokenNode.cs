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

    public class AsyncTreeTokenNode : PoolableObject<AsyncTreeTokenNode>
    {


        public IAsyncTokenProperty Task { get; set; }
        public IAsyncTokenProperty RootTask { get; set; }

        public void Yield()
        { 
            if(Task.Token==null|| Task.Token == this)
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
