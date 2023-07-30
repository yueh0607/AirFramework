using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Threading;
#if !IS_WEBGL
using System.Threading.Tasks;
#endif

namespace AirFramework
{
    public static partial class AsyncTask_Ex
    {
        /// <summary>
        /// 遗忘任务，使用本方法无任何效果，可以消除返回值警告
        /// </summary>
        /// <param name="task"></param>
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Style", "IDE0060:删除未使用的参数", Justification = "<挂起>")]
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void Forget(this ITask task)
        {
            // empty 
        }

        /// <summary>
        /// 启动一个未执行的AsyncTask，如果该任务已经执行，则该方法返回效果与原任务等同
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static async AsyncTask Invoke(this AsyncTask task)
        {
            await task;
        }
        /// <summary>
        /// 启动一个未执行的AsyncTask，如果该任务已经执行，则该方法返回效果与原任务等同
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static async AsyncTask<T> Invoke<T>(this AsyncTask<T> task)
        {
            return await task;
        }

        ///// <summary>
        ///// 阻塞主线程到完成
        ///// </summary>
        ///// <param name="task"></param>
        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        //public static void Wait(this AsyncTask task)
        //{
        //    TaskCompletionSource<ETaskStatus> source = new TaskCompletionSource<ETaskStatus>();
        //    task.Completed += (x) => source.SetResult(x.Status);
        //    source.Task.Wait();
        //}
        ///// <summary>
        ///// 阻塞主线程到完成
        ///// </summary>
        ///// <typeparam name="T"></typeparam>
        ///// <param name="task"></param>
        ///// <returns></returns>
        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        //public static T Wait<T>(this AsyncTask<T> task)
        //{
        //    TaskCompletionSource<ETaskStatus> source = new TaskCompletionSource<ETaskStatus>();
        //    task.Completed += (x) => source.SetResult(x.Status);
        //    source.Task.Wait();
        //    return task.Result;
        //}

        /// <summary>
        /// 为指定异步任务设置令牌，可以取消和挂起
        /// </summary>
        /// <param name="task"></param>
        /// <param name="token"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T WithToken<T>(this T task, out AsyncToken token) where T : IAsyncTokenProperty
        {
            var tok = Framework.Pool.Allocate<AsyncToken>();
            tok.node = task.Token;
            token = tok;
            return task;
        }



#if !IS_WEBGL


        /// <summary>
        /// 把AsyncTask转为Task，注意AsyncTask在结束后会完成所有出自于此的Task
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static Task AsTask(this AsyncTask task)
        {
            TaskCompletionSource<ETaskStatus> source = new TaskCompletionSource<ETaskStatus>();
            task.Completed += (x) => source.SetResult(x.Status);
            return source.Task;
        }

        /// <summary>
        /// 把AsyncTask转为Task，注意AsyncTask在结束后会完成所有出自于此的Task
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static Task<T> AsTask<T>(this AsyncTask<T> task)
        {
            TaskCompletionSource<T> source = new TaskCompletionSource<T>();
            task.Completed += (x) => source.SetResult(x.Result);
            return source.Task;
        }

        /// <summary>
        /// 把Task转为AsyncTask，注意点如下：
        /// 1.Task为多线程，AsyncTask为单线程，Task完毕后会在主线程同步完成AsyncTask
        /// 2.Task内无法访问Unity3D资源
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AsyncTask AsAsyncTask(this Task task)
        {
            SynchronizationContext context = SynchronizationContext.Current;
            AsyncTask coTask = Framework.Pool.Allocate<AsyncTask>();

            // 在主线程上运行任务
            context.Post(async _ =>
            {
                try
                {
                    await task; // 等待任务完成
                    context.Post(__ =>
                    {
                        coTask.Finish(ETaskStatus.Succeed);
                    }, null);

                }
                catch (Exception ex)
                {

                    coTask.PostException(ExceptionDispatchInfo.Capture(ex));
                    // 在主线程的下一条语句执行 coTask.Finish
                    context.Post(__ =>
                    {
                        coTask.Finish(ETaskStatus.Failed);
                    }, null);

                }
            }, null);

            return coTask;
        }

        /// <summary>
        /// 把Task转为AsyncTask，注意点如下：
        /// 1.Task为多线程，AsyncTask为单线程，Task完毕后会在主线程同步完成AsyncTask
        /// 2.Task内无法访问Unity3D资源
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AsyncTask<T> AsAsyncTask<T>(this Task<T> task)
        {
            SynchronizationContext context = SynchronizationContext.Current;
            AsyncTask<T> coTask = Framework.Pool.Allocate<AsyncTask<T>>();

            // 在主线程上运行任务
            context.Post(async _ =>
            {
                try
                {
                    var result = await task; // 等待任务完成
                    context.Post(_ =>
                    {
                        coTask.Result = result;
                        coTask.Finish(ETaskStatus.Succeed);
                    }, null);
                }
                catch (Exception ex)
                {
                    coTask.PostException(ExceptionDispatchInfo.Capture(ex));
                    // 在主线程的下一条语句执行 coTask.Finish
                    context.Post(_ =>
                    {
                        coTask.Finish(ETaskStatus.Failed);
                    }, null);

                }
            }, null);

            return coTask;
        }

#endif
    }
}
