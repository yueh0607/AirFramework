namespace AirFramework
{
    public class CallAllNullEventException : System.Exception
    {
        public CallAllNullEventException() : base("No such message with in this Operator") { }
    }
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T1> CallAll<T1>(this IOperatorOut<ICallEvent<T1>> container)
        {
            return TryCallAll<T1>(container, out var result) ? result : throw new CallAllNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T2> CallAll<T1, T2>(this IOperatorOut<ICallEvent<T1, T2>> container, T1 arg1)
        {
            return TryCallAll<T1, T2>(container, arg1, out var result) ? result : throw new CallAllNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T3> CallAll<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, T3>> container, T1 arg1, T2 arg2)
        {
            return TryCallAll<T1, T2, T3>(container, arg1, arg2, out var result) ? result : throw new CallAllNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T4> CallAll<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            return TryCallAll<T1, T2, T3, T4>(container, arg1, arg2, arg3, out var result) ? result : throw new CallAllNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T5> CallAll<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            return TryCallAll<T1, T2, T3, T4, T5>(container, arg1, arg2, arg3, arg4, out var result) ? result : throw new CallAllNullEventException();
        }

        /// <summary>
        /// 对指定对象进行Call
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallAllNullEventException"></exception>
        public static UnitList<T6> CallAll<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            return TryCallAll<T1, T2, T3, T4, T5, T6>(container, arg1, arg2, arg3, arg4, arg5, out var result) ? result : throw new CallAllNullEventException();
        }
    }
}
