using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static class Async
    {
        /// <summary>
        /// 延迟指定秒数,如果不使用endAction则不产生GC Alloc
        /// </summary>
        /// <param name="seconds"></param>
        /// <returns></returns>
        public static AsyncTask Delay(float seconds, Action endAction = null)
        {
            var task = Framework.Pool.Allocate<AsyncTask>();
            var timer = Framework.Pool.Allocate<AsyncTimerCall>();
            timer.OnCompleted += task.SetResult;
            timer.OnCompleted += endAction;
            task.OnAsyncCompleted += timer.DisposeAction;
            timer.Start(seconds, task);
            return task;
        }

        public static AsyncTaskCompleted Complete(Action action = null)
        {
            action?.Invoke();
            return Framework.Pool.Allocate<AsyncTaskCompleted>();
        }

        /// <summary>
        /// 等待任意一个完成即可，其余都会正常进行，有少量委托创建的GC
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAny(params AsyncTask[] tasks)
        {
            //创建计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            counterCall.ClickValue = 1;
            counterCall.OnceRecycle = true;
            //申请异步任务
            var asyncTask = Framework.Pool.Allocate<AsyncTask>();

            //计数器任务绑定
            counterCall.OnClick += asyncTask.SetResult;
            //绑定异步任务到计数器
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnAsyncCompleted += counterCall.PlusOne;
            }
            return asyncTask;
        }
        /// <summary>
        /// 等待全部完成，有少量委托创建的GC
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAll(params AsyncTask[] tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            counterCall.ClickValue = tasks.Length;
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = Framework.Pool.Allocate<AsyncTask>();

            //绑定结束事件
            counterCall.OnClick += asyncTask.SetResult;
            //绑定计数器
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnAsyncCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }



        public static AsyncTask WithToken(this AsyncTask task, AsyncToken token)
        {
            token.node = task.Token;
            //$"IDDDDD:{token.node.ID}".L();
            return task;
        }
        internal static AsyncTask InitToken(this AsyncTask task, AsyncTreeTokenNode token)
        {
            task.Token?.Dispose();
            task.Token = token;
            token.Task = task;
            token.RootTask = task;
            return task;
        }
        internal static AsyncTask<T> InitToken<T>(this AsyncTask<T> task, AsyncTreeTokenNode token)
        {
            task.Token?.Dispose();
            task.Token = token;
            token.Task = task;
            token.RootTask = task;
            return task;
        }
        //public static AirTask Yield(IUpdate update,int frameCount)
        //{

        //}
    }
}
