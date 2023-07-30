﻿using AirFramework.Internal;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public partial class AsyncTask
    {

        /// <summary>
        /// 把AsyncTask转为协程，注意可以使用异步lambda来获取未在执行的协程
        /// </summary>
        /// <param name="method"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator ToCoroutine(Func<AsyncTask> method)
        {
            if (method == null) throw new ArgumentNullException("task null ");
            AsyncTask task = method();
            while (!task.IsDone) yield return null;
        }


        /// <summary>
        /// 把AsyncTask转为协程，注意可以使用异步lambda来获取未在执行的协程
        /// </summary>
        /// <param name="method"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator<T> ToCoroutine<T>(Func<AsyncTask<T>> method)
        {
            if (method == null) throw new ArgumentNullException("task null");
            AsyncTask<T> task = method();
            while (!task.IsDone) yield return default;
        }


        /// <summary>
        /// 把AsyncTask转为协程，注意这个协程可能是正在运行的，可能是不在运行的，取决于参数Task是否在运行
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator ToCoroutine(AsyncTask task)
        {
            if (task == null) throw new ArgumentNullException("task null");

            while (!task.IsDone) yield return null;
        }


        /// <summary>
        /// 把AsyncTask转为协程，注意这个协程可能是正在运行的，可能是不在运行的，取决于参数Task是否在运行
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator<T> ToCoroutine<T>(AsyncTask<T> task)
        {
            if (task == null) throw new ArgumentNullException("task null");

            while (!task.IsDone) yield return default;
        }

    }


    public static class AsyncTask2Coroutine
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AsyncTask GetAwaiter(this IEnumerator enumerator)
        {
            static IEnumerator RunEnumerator(IEnumerator _enumerator, AsyncTask task)
            {
                while (true)
                {

                    if (!_enumerator.MoveNext())
                        break;
                    else
                    {
                        while (true)
                        {
                            if (task.Token.IsCanceld)
                            {
                                task.Finish(ETaskStatus.Failed);
                                yield break;
                            }
                            if (task.Token.Authorization) break;
                            else yield return null;
                        }
                    }

                    yield return _enumerator.Current;

                }
                task.Finish(ETaskStatus.Succeed);
            }
            AsyncTask task = Framework.Pool.Allocate<AsyncTask>();
            AirEngine.StartCoroutine(RunEnumerator(enumerator, task));
            return task;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AsyncTask GetAwaiter<T>(this T instruction) where T : YieldInstruction
        {
            static IEnumerator GetEnumerator(T instruction)
            {
                yield return instruction;
            }
            var task = GetEnumerator(instruction).GetAwaiter();
            return task;
        }

    }
}
