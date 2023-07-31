using AirFramework.Internal;
using Codice.Client.BaseCommands;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {/// <summary>
     /// 对指定对象进行SendAsync，返回最后一个结果
     /// </summary>
     /// <param name="container"></param>
     /// <returns></returns>
     /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1>(this IOperatorOut<ICallEvent<AirTask>> container)
        {
            var x = container.TryCall(out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行SendAsync，返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1>(this IOperatorOut<ICallEvent<T1, AirTask>> container, T1 arg1) where T1 : AirTask
        {
            var x = container.TryCall(arg1, out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行SendAsync，返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1, T2>(this IOperatorOut<ICallEvent<T1, T2, AirTask>> container, T1 arg1, T2 arg2) where T2 : AirTask
        {
            var x = container.TryCall(arg1, arg2, out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行SendAsync，返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, T3, AirTask>> container, T1 arg1, T2 arg2, T3 arg3) where T3 : AirTask
        {
            var x = container.TryCall(arg1, arg2, arg3, out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行SendAsync，返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, AirTask>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4) where T4 : AirTask
        {
            var x = container.TryCall(arg1, arg2, arg3, arg4, out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行SendAsync，返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask SendAsync<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, AirTask>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) where T5 : AirTask
        {
            var x = container.TryCall(arg1, arg2, arg3, arg4, arg5, out var result);
            if (x) await result;
            else throw new CallNullEventException();
        }

 

    }
}
