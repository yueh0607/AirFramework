using AirFramework.Internal;
using Codice.Client.BaseCommands;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T1>> TryCallAllAsync<T1>(this IOperatorOut<ICallEvent<AirTask<T1>>> container)
        {
            var x = container.TryCallAll(out var results);
            UnitList<T1> result = Framework.Pool.Allocate<UnitList<T1>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T2>> TryCallAllAsync<T1, T2>(this IOperatorOut<ICallEvent<T1, AirTask<T2>>> container, T1 arg1)
        {
            var x = container.TryCallAll(arg1, out var results);
            UnitList<T2> result = Framework.Pool.Allocate<UnitList<T2>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T3>> TryCallAllAsync<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, AirTask<T3>>> container, T1 arg1, T2 arg2)
        {
            var x = container.TryCallAll(arg1, arg2, out var results);
            UnitList<T3> result = Framework.Pool.Allocate<UnitList<T3>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T4>> TryCallAllAsync<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, AirTask<T4>>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var x = container.TryCallAll(arg1, arg2, arg3, out var results);
            UnitList<T4> result = Framework.Pool.Allocate<UnitList<T4>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T5>> TryCallAllAsync<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, AirTask<T5>>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var x = container.TryCallAll(arg1, arg2, arg3, arg4, out var results);
            UnitList<T5> result = Framework.Pool.Allocate<UnitList<T5>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

        /// <summary>
        /// 对指定对象进行TryCallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<UnitList<T6>> TryCallAllAsync<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, AirTask<T6>>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var x = container.TryCallAll(arg1, arg2, arg3, arg4, arg5, out var results);
            UnitList<T6> result = Framework.Pool.Allocate<UnitList<T6>>();
            if (x)
            {
                for (var i = 0; i < results.Value.Count; i++)
                {
                    result.Value.Add(await results.Value[i]);
                }
            }
            else await AirTask.CompletedTask;
            return result;
        }

    }
}
