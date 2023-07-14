/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建Async静态类以实现一些静态异步方法，比如等待，延迟等，方便用户进行使用
 */


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
            static IEnumerator DelayTask(float seconds, AsyncTask task)
            {
                yield return null;
                float current = 0;

                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (task.Token.Authorization)
                    {
                        current += Framework.DeltaTime;
                        if (current >= seconds) break;
                    }
                    yield return null;
                }
                task.Finish(ETaskStatus.Succeed);
            }
            var task =Framework.Pool.Allocate<AsyncTask>();
            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(DelayTask(seconds, task));
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
            static IEnumerator DelayFrame(int frame, AsyncTask task)
            {
                for (int i = 0; i < frame; i += task.Token.Authorization ? 1 : 0)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    yield return null;
                }
                task.Finish(ETaskStatus.Succeed);
            }
            var task =Framework.Pool.Allocate<AsyncTask>();
            if (count > 0)
            {
                var module = Framework.GetModule<TaskModule>();
                module.Mono.StartCoroutine(DelayFrame(count, task));
            }
            else task.Finish(ETaskStatus.Succeed);
            return task;
        }

        /// <summary>
        /// 等待直到下一帧
        /// </summary>
        public static AsyncTask NextFrame => WaitFrame(1);

        private static CoTaskCompleted completedTask = new CoTaskCompleted();

        /// <summary>
        /// 已经完成的Task
        /// </summary>
        public static ref CoTaskCompleted CompletedTask => ref completedTask;

        /// <summary>
        /// 返回一个指向委托返回结果的CoTask，可以理解为未运行的CoTask
        /// 注意返回的CoTask指向的CoTask并不同，仅仅当指向的CoTask完成时也完成返回的CoTask
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        public static AsyncTask Refer(Func<AsyncTask> task)
        {
            AsyncTask _task =  Framework.Pool.Allocate<AsyncTask>();
            _task.OnAwait += task;
            return _task;
        }


        /// <summary>
        /// 返回一个指向委托返回结果的CoTask，可以理解为未运行的CoTask
        /// 注意返回的CoTask指向的CoTask并不同，仅仅当指向的CoTask完成时也完成返回的CoTask
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        public static AsyncTask<T> Refer<T>(Func<AsyncTask<T>> task)
        {
            AsyncTask<T> _task = Framework.Pool.Allocate<AsyncTask<T>>();
            _task.OnAwait += task;
            return _task;
        }

        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask WaitAny(bool onlySucceed = false, params AsyncTask[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            static IEnumerator WaitAnyTask(AsyncTask[] tasks, AsyncTask task, bool onlySucceed)
            {
                int counter = 0;
                AsyncTask firstTask = null;
                Action<AsyncTask> resultSet = (x) =>
                {
                    if (onlySucceed && x.Status != ETaskStatus.Succeed) return;
                    firstTask ??= x;
                    counter++;
                };
                for (int i = 0; i < tasks.Length; ++i)
                {
                    tasks[i].OnCompleted += resultSet;
                }
                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (task.Token.Authorization)
                        if (counter >= 1)
                        {
                            task.FinishWith(firstTask);
                        }
                    yield return null;
                }
            }
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(WaitAnyTask(tasks, task, onlySucceed));
            return task;
        }
        /// <summary>
        /// 等待任意一个完成即可
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AsyncTask<T> WaitAny<T>(bool onlySucceed = false, params AsyncTask<T>[] tasks)
        {
            if (tasks.Length == 0) throw new InvalidOperationException("Passing in an empty AsyncTask array is not allowed");
            static IEnumerator WaitAnyTask(AsyncTask<T>[] tasks, AsyncTask<T> task, bool onlySucceed)
            {
                int counter = 0;
                AsyncTask<T> firstTask = null;
                Action<AsyncTask<T>> resultSet = (x) =>
                {
                    if (onlySucceed && x.Status != ETaskStatus.Succeed) return;
                    firstTask ??= x;
                    counter++;
                };
                for (int i = 0; i < tasks.Length; ++i)
                {
                    tasks[i].OnCompleted += resultSet;
                }
                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (task.Token.Authorization)
                        if (counter >= 1)
                        {
                            task.Result = firstTask.Result;
                            task.FinishWith(firstTask);
                        }
                    yield return null;
                }
            }
            AsyncTask<T> task = Framework.Pool.Allocate<AsyncTask<T>>();
            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(WaitAnyTask(tasks, task, onlySucceed));
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
            static IEnumerator WaitAnyTask(AsyncTask[] tasks, AsyncTask task)
            {
                int counter = 0;
                Action<AsyncTask> resultSet = (x) =>
                {
                    counter++;
                };
                for (int i = 0; i < tasks.Length; ++i)
                {
                    tasks[i].OnCompleted += resultSet;
                }
                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (task.Token.Authorization)
                        if (counter >= tasks.Length)
                        {
                            task.Finish(ETaskStatus.Succeed);
                        }
                    yield return null;
                }
            }
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(WaitAnyTask(tasks, task));
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
            static IEnumerator WaitAnyTask(AsyncTask<T>[] tasks, AsyncTask<T[]> task, bool sorted)
            {
                T[] results = new T[tasks.Length];
                int counter = 0;
                int pointer = 0;
                Action<AsyncTask<T>> resultSet = (x) =>
                {
                    counter++;
                    if (sorted)
                    {
                        for (int i = 0; i < tasks.Length; ++i)
                        {
                            if (tasks[i].ID == x.ID)
                            {
                                pointer = i;
                                break;
                            }
                        }
                    }
                    else
                    {
                        ++pointer;
                    }
                    results[pointer] = x.Result;
                };
                for (int i = 0; i < tasks.Length; ++i)
                {
                    tasks[i].OnCompleted += resultSet;
                }
                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (task.Token.Authorization)
                        if (counter >= tasks.Length)
                        {
                            task.Result = results;
                            task.Finish(ETaskStatus.Succeed);
                        }
                    yield return null;
                }
            }
            AsyncTask<T[]> task = Framework.Pool.Allocate<AsyncTask<T[]>>(); 
            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(WaitAnyTask(tasks, task, sorted));
            return task;
        }



        /// <summary>
        /// 开始等待直到条件为true
        /// </summary>
        /// <param name="predicate"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        public static async AsyncTask WaitUntil(Func<bool> predicate)
        {
            static IEnumerator WaitUntilTask(Func<bool> predicate, AsyncTask task)
            {
                while (true)
                {
                    if (predicate())
                    {
                        task.Finish(ETaskStatus.Succeed);
                        yield break;
                    }
                    yield return null;
                }
            }
            if (predicate == null) throw new ArgumentNullException("Null condition");
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            await WaitUntilTask(predicate, task);
        }



    }
}
