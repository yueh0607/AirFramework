namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T1> CallAsync<T1>(this IOperatorOut<ICallEvent<AirTask<T1>>> container)
        {
            var x = container.TryCall(out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T2> CallAsync<T1, T2>(this IOperatorOut<ICallEvent<T1, AirTask<T2>>> container, T1 arg1)
        {
            var x = container.TryCall(arg1, out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T3> CallAsync<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, AirTask<T3>>> container, T1 arg1, T2 arg2)
        {
            var x = container.TryCall(arg1, arg2, out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T4> CallAsync<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, AirTask<T4>>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var x = container.TryCall(arg1, arg2, arg3, out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T5> CallAsync<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, AirTask<T5>>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var x = container.TryCall(arg1, arg2, arg3, arg4, out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行CallAsync,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static async AirTask<T6> CallAsync<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, AirTask<T6>>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var x = container.TryCall(arg1, arg2, arg3, arg4, arg5, out var result);
            if (x) return await result;
            throw new CallNullEventException();
        }


    }
}
