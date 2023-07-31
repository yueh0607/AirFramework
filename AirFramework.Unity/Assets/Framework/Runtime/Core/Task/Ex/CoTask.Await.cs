/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建Async静态类以实现一些静态异步方法，比如等待，延迟等，方便用户进行使用
 */


using AirFramework.Internal;
using System;
using System.Collections;

namespace AirFramework
{
    public partial class AsyncTask
    {
        /// <summary>
        /// 延迟指定秒数并立刻开始
        /// </summary>
        /// <param name="seconds"></param>
        /// <returns></returns>
        public static AsyncTask Delay(float seconds)
        {
            var task = Framework.Pool.Allocate<AsyncTask>();        
            var timer = Framework.Pool.Allocate<TaskTimer>();
            timer.BindTask = task;
            task.Token.TokenHolder = timer;
            timer.Max = seconds;
            timer.Enable = true;
            return task;
        }
        /// <summary>
        /// 延迟指定时间并立刻开始
        /// </summary>
        /// <param name="seconds"></param>
        /// <returns></returns>
        public static AsyncTask Delay(TimeSpan span)
        {
            return Delay((float)span.TotalSeconds);
        }

        /// <summary>
        /// 从当前起始等待X帧过去，从当前帧到下一帧也计算为一帧
        /// </summary>
        /// <param name="count"></param>
        /// <returns></returns>
        public static AsyncTask WaitFrame(int count = 1)
        {
           
            var task = Framework.Pool.Allocate<AsyncTask>();
            var frame = Framework.Pool.Allocate<TaskFrame>();
            frame.BindTask = task;
            task.Token.TokenHolder = frame;
            frame.FrameCount= count;
            frame.Enable = true;
            return task;
        }

        /// <summary>
        /// 等待直到下一帧
        /// </summary>
        public static AsyncTask NextFrame => WaitFrame(1);

        private static AsyncTaskCompleted completedTask = new AsyncTaskCompleted();

        /// <summary>
        /// 已经完成的Task
        /// </summary>
        public static ref AsyncTaskCompleted CompletedTask => ref completedTask;


        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAny(params AsyncTask[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            var counter = Framework.Pool.Allocate<TaskWaitCounter>();
            counter.BindTask = task;
            counter.TriggerCount = 1;
            task.Token.TokenHolder = counter;
            Action<AsyncTask> poster = (x) =>
            {
                counter.Add();
            };
            counter.Enable= true;
            foreach (var one in tasks)
            {
                one.Completed += poster;
            }
            return task;
        }
        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T[]> WaitAny<T>( params AsyncTask<T>[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            var task = Framework.Pool.Allocate<AsyncTask<T[]>>();
            var counter = Framework.Pool.Allocate<TaskWaitCounter<T>>();
            counter.BindTask = task;
            counter.AllTaskCount = 1;
            task.Token.TokenHolder = counter;
            Action<AsyncTask<T>> poster = (x) =>
            {
                counter.Add(0,x.Result);
            };
            counter.Enable = true;
            foreach (var one in tasks)
            {
                one.Completed += poster;
            }
            return task;
        }

        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAll(params AsyncTask[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            if (tasks.Length == 0) throw new InvalidOperationException("No any task to wait ");
            var counter = Framework.Pool.Allocate<TaskWaitCounter>();
            counter.BindTask = task;
            counter.TriggerCount = tasks.Length;
            task.Token.TokenHolder = counter;
            Action<AsyncTask> poster = (x) =>
            {
                counter.Add();
            };
            counter.Enable = true;
            foreach (var one in tasks)
            {
                one.Completed += poster;
            }
            return task;
        }

        /// <summary>
        /// 等待全部完成
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T[]> WaitAll<T>(bool sorted = true, params AsyncTask<T>[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            var task = Framework.Pool.Allocate<AsyncTask<T[]>>();
            var counter = Framework.Pool.Allocate<TaskWaitCounter<T>>();
            counter.BindTask = task;
            counter.AllTaskCount = 1;
            task.Token.TokenHolder = counter;
            Action<AsyncTask<T>> poster = (x) =>
            {
                int i = 0;
                for (i = 0; i < tasks.Length; i++)
                {
                    if (tasks[i] != null)
                        if (tasks[i].ID == x.ID)
                        {
                            break;
                        }
                }
                counter.Add(i, x.Result);
                tasks[i] = null;
            };
            counter.Enable = true;
            foreach (var one in tasks)
            {
                one.Completed += poster;
            }
            return task;
        }

        /// <summary>
        /// 开始等待直到条件为true
        /// </summary>
        /// <param name="predicate"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        public static AsyncTask WaitUntil(Func<bool> predicate)
        {
            if (predicate == null) throw new ArgumentNullException("Null condition");
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            var until = Framework.Pool.Allocate<TaskUntil>();
            until.BindTask = task;
            until.Condition= predicate;
            until.Enable= true;
            return task; 
        }

        public static async AsyncTask<AsyncToken> CatchToken()
        {
            var taskCatch = Framework.Pool.Allocate<AsyncTaskTokenCatch>();
            var node = await taskCatch;
            node.WithToken(out var token);
            return token;

        }


    }
}
