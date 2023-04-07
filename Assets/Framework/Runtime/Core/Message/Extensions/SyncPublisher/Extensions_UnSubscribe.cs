using System;

namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe(this IOperatorOut<ISendMessage> container, Action message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe<T1>(this IOperatorOut<ISendMessage<T1>> container, Action<T1> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action<T1>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe<T1, T2>(this IOperatorOut<ISendMessage<T1, T2>> container, Action<T1, T2> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action<T1, T2>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe<T1, T2, T3>(this IOperatorOut<ISendMessage<T1, T2, T3>> container, Action<T1, T2, T3> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action<T1, T2, T3>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe<T1, T2, T3, T4>(this IOperatorOut<ISendMessage<T1, T2, T3, T4>> container, Action<T1, T2, T3, T4> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action<T1, T2, T3, T4>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void UnSubscribe<T1, T2, T3, T4, T5>(this IOperatorOut<ISendMessage<T1, T2, T3, T4, T5>> container, Action<T1, T2, T3, T4, T5> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Action<T1, T2, T3, T4, T5>>(message);
        //-----------------------------------------------------------------------------------------------------------------------------------

        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void UnSubscribe<T1>(this IOperatorOut<ISendMessage<T1>> container, Func<T1> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1>>(message);


        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void UnSubscribe<T1, T2>(this IOperatorOut<ISendMessage<T1, T2>> container, Func<T1, T2> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1, T2>>(message);


        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void UnSubscribe<T1, T2, T3>(this IOperatorOut<ISendMessage<T1, T2, T3>> container, Func<T1, T2, T3> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1, T2, T3>>(message);


        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void UnSubscribe<T1, T2, T3, T4>(this IOperatorOut<ISendMessage<T1, T2, T3, T4>> container, Func<T1, T2, T3, T4> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1, T2, T3, T4>>(message);


        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void UnSubscribe<T1, T2, T3, T4, T5>(this IOperatorOut<ISendMessage<T1, T2, T3, T4, T5>> container, Func<T1, T2, T3, T4, T5> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1, T2, T3, T4, T5>>(message);

        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void UnSubscribe<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ISendMessage<T1, T2, T3, T4, T5, T6>> container, Func<T1, T2, T3, T4, T5, T6> message)
            => ((UnitMessageOperator<IMessage>)container)?.Value.TryRemove<Func<T1, T2, T3, T4, T5, T6>>(message);
    }
}
