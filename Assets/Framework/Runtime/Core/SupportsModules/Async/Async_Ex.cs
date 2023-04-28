/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建Async静态类以实现一些静态异步方法，比如等待，延迟等，方便用户进行使用
 */


using System;
using System.Collections.Generic;
namespace AirFramework
{
    public static partial class Async
    {
        /// <summary>
        /// 延迟指定秒数
        /// </summary>
        /// <param name="seconds"></param>
        /// <returns></returns>
        public static AsyncTaskTimer Delay(float seconds)
        {
            var timer = Framework.Pool.Allocate<AsyncTaskTimer>();
            timer.EndTime = seconds;
            return timer;
        }

        public static async AsyncTask WaitForFrame(int count = 1)
        {
            if (count <= 0)
            {
                await Async.Complete();
            }
            else
            {
                var task = Framework.Pool.Allocate<AsyncTaskUpdate>();
                task.FrameCount = count;
                await task;
            }
        }

        /// <summary>
        /// 用于在特定时刻配位await并实现异步转同步
        /// </summary>
        /// <param name="action"></param>
        /// <returns></returns>
        public static AsyncTaskCompleted Complete(Action action = null)
        {
            action?.Invoke();
            return Framework.Pool.Allocate<AsyncTaskCompleted>();
        }


        public static void WaitForCompletition(this AsyncTask task)
        {
            _ = Complete(task);
        }
        //public static T WaitForCompletition<T>(this AsyncTask<T> task)
        //{
        //    return Complete(task).result;
        //}


        private static async AsyncTaskCompleted Complete(AsyncTask task)
        {
            await task;
        }
    

        /// <summary>
        /// 等待任意一个完成即可
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
            var asyncTask = AsyncTask.Create(true);

            //计数器任务绑定
            counterCall.OnClick += asyncTask.SetResult;
            //绑定异步任务到计数器
            foreach (var task in tasks)
            {

                task.OnTaskCompleted += counterCall.PlusOne;
                task.Coroutine();
            }
            return asyncTask;
        }
        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAny(List<AsyncTask> tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            //设置触发值
            counterCall.ClickValue = 1;
            //使用一次就自动回收
            counterCall.OnceRecycle = true;
            //申请异步任务
            var asyncTask = AsyncTask.Create(true);

            //计数器任务绑定，此步骤仅第一次从池申请有GC
            counterCall.OnClick += asyncTask.SetResult;
            //绑定异步任务到计数器，同样是仅第一次存在GC
            foreach (var task in tasks)
            {
                task.OnTaskCompleted += counterCall.PlusOne;
                task.Coroutine();
            }
            return asyncTask;
        }

        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T> WaitAny<T>(params AsyncTask<T>[] tasks)
        {
            //创建计数器
            var counterCall = Framework.Pool.Allocate<CounterCall<T>>();
            counterCall.ClickValue = 1;
            counterCall.OnceRecycle = true;
            //申请异步任务
            var asyncTask = AsyncTask<T>.Create(true);

            //计数器任务绑定
            counterCall.OnClick += (x) => { asyncTask.SetResult(x[0]); };

            //绑定异步任务到计数器
            foreach (var task in tasks)
            {
                task.OnTaskCompleted += counterCall.PlusOne;
                task.Coroutine();
            }
            return asyncTask;
        }

        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T> WaitAny<T>(List<AsyncTask<T>> tasks)
        {
            //创建计数器
            var counterCall = Framework.Pool.Allocate<CounterCall<T>>();
            counterCall.ClickValue = 1;
            counterCall.OnceRecycle = true;
            //申请异步任务
            var asyncTask = AsyncTask<T>.Create(true);

            //计数器任务绑定
            counterCall.OnClick += (x) => { asyncTask.SetResult(x[0]); };

            //绑定异步任务到计数器
            foreach (var task in tasks)
            {
                task.OnTaskCompleted += counterCall.PlusOne;
                task.Coroutine();
            }
            return asyncTask;
        }

        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAll(params AsyncTask[] tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            //设置触发值
            counterCall.ClickValue = tasks.Length;
            //使用一次就回收
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = AsyncTask.Create(true);

            //绑定结束事件，仅第一次存在GC
            counterCall.OnClick += asyncTask.SetResult;
            //绑定计数器，仅第一次存在GC
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnTaskCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }

        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAll(List<AsyncTask> tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            counterCall.ClickValue = tasks.Count;
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = AsyncTask.Create(true);

            //绑定结束事件
            counterCall.OnClick += asyncTask.SetResult;
            //绑定计数器
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnTaskCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }
        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T[]> WaitAll<T>(params AsyncTask<T>[] tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall<T>>();
            //设置触发值
            counterCall.ClickValue = tasks.Length;
            //使用一次就回收
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = Framework.Pool.Allocate<AsyncTask<T[]>>();

            //绑定结束事件
            counterCall.OnClick += (x) => { asyncTask.SetResult(x.ToArray()); };
            //绑定计数器，仅第一次存在GC
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnTaskCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }
        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T[]> WaitAll<T>(List<AsyncTask<T>> tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall<T>>();
            //设置触发值
            counterCall.ClickValue = tasks.Count;
            //使用一次就回收
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = Framework.Pool.Allocate<AsyncTask<T[]>>();

            //绑定结束事件
            counterCall.OnClick += (x) => { asyncTask.SetResult(x.ToArray()); };
            //绑定计数器，仅第一次存在GC
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnTaskCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }
        /// <summary>
        /// 为指定异步任务设置令牌，可以取消和挂起
        /// </summary>
        /// <param name="task"></param>
        /// <param name="token"></param>
        /// <returns></returns>
        public static void WithToken(this AsyncTask task, out AsyncToken token)
        {
            var tok = Framework.Pool.Allocate<AsyncToken>();
            tok.node = task.Token;
            //$"IDDDDD:{token.node.ID}".L();
            token = tok;
        }



    }
}
