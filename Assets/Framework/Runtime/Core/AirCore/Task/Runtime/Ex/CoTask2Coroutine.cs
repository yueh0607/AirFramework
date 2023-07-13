using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CoFramework.Tasks
{
    public partial class CoTask
    {

        /// <summary>
        /// 把CoTask转为协程，注意可以使用异步lambda来获取未在执行的协程
        /// </summary>
        /// <param name="method"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator ToCoroutine(Func<CoTask> method)
        {
            if (method == null) throw new ArgumentNullException("task null ");
            CoTask task = method();
            while (!task.IsDone) yield return null;
        }


        /// <summary>
        /// 把CoTask转为协程，注意可以使用异步lambda来获取未在执行的协程
        /// </summary>
        /// <param name="method"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator<T> ToCoroutine<T>(Func<CoTask<T>> method)
        {
            if (method == null) throw new ArgumentNullException("task null ");
            CoTask<T> task = method();
            while (!task.IsDone) yield return default;
        }


        /// <summary>
        /// 把CoTask转为协程，注意这个协程可能是正在运行的，可能是不在运行的，取决于参数Task是否在运行
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator ToCoroutine(CoTask task)
        {
            if (task == null) throw new ArgumentNullException("task null");

            while (!task.IsDone) yield return null;
        }


        /// <summary>
        /// 把CoTask转为协程，注意这个协程可能是正在运行的，可能是不在运行的，取决于参数Task是否在运行
        /// </summary>
        /// <param name="task"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static IEnumerator<T> ToCoroutine<T>(CoTask<T> task)
        {
            if (task == null) throw new ArgumentNullException("task null");

            while (!task.IsDone) yield return default;
        }

    }


    public static class CoTask2Coroutine
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTask GetAwaiter(this IEnumerator enumerator)
        {
            static IEnumerator RunEnumerator(IEnumerator _enumerator, CoTask task)
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


            var module = Framework.GetModule<TaskModule>();
            CoTask task = CoTask.Create();

            module.Mono.StartCoroutine(RunEnumerator(enumerator, task));

            return task;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CoTask GetAwaiter<T>(this T instruction) where T : YieldInstruction
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
