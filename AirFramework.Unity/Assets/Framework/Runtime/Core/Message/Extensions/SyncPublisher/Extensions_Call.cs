namespace AirFramework
{
    public class CallNullEventException : System.Exception
    {
        public CallNullEventException() : base("No such message with in this Operator") { }
    }
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static T1 Call<T1>(this IOperatorOut<ICallEvent<T1>> container)
        {
            return TryCall<T1>(container, out var result) ? result : throw new CallNullEventException();
        }
        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>

        public static T2 Call<T1, T2>(this IOperatorOut<ICallEvent<T1, T2>> container, T1 arg1)
        {
            return TryCall<T1, T2>(container, arg1, out var result) ? result : throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static T3 Call<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, T3>> container, T1 arg1, T2 arg2)
        {
            return TryCall<T1, T2, T3>(container, arg1, arg2, out var result) ? result : throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static T4 Call<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            return TryCall<T1, T2, T3, T4>(container, arg1, arg2, arg3, out var result) ? result : throw new CallNullEventException();
        }
        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>

        public static T5 Call<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            return TryCall<T1, T2, T3, T4, T5>(container, arg1, arg2, arg3, arg4, out var result) ? result : throw new CallNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call,返回最后一个结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static T6 Call<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            return TryCall<T1, T2, T3, T4, T5, T6>(container, arg1, arg2, arg3, arg4, arg5, out var result) ? result : throw new CallNullEventException();
        }
    }
}
