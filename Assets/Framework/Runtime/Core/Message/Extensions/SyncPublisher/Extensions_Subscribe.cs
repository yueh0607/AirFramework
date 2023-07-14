using AirFramework.Internal;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {




        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe(this IOperatorOut<IGenericEvent> container, Action message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1>(this IOperatorOut<IGenericEvent<T1>> container, Action<T1> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2>(this IOperatorOut<IGenericEvent<T1, T2>> container, Action<T1, T2> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1, T2, T3>(this IOperatorOut<IGenericEvent<T1, T2, T3>> container, Action<T1, T2, T3> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1, T2, T3, T4>(this IOperatorOut<IGenericEvent<T1, T2, T3, T4>> container, Action<T1, T2, T3, T4> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>



        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5>(this IOperatorOut<IGenericEvent<T1, T2, T3, T4, T5>> container, Action<T1, T2, T3, T4, T5> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);

        //---------------------------------------------------------------------------------------------------------------------------------------

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1>(this IOperatorOut<IGenericEvent<T1>> container, Func<T1> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2>(this IOperatorOut<IGenericEvent<T1, T2>> container, Func<T1, T2> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2, T3>(this IOperatorOut<IGenericEvent<T1, T2, T3>> container, Func<T1, T2, T3> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2, T3, T4>(this IOperatorOut<IGenericEvent<T1, T2, T3, T4>> container, Func<T1, T2, T3, T4> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5>(this IOperatorOut<IGenericEvent<T1, T2, T3, T4, T5>> container, Func<T1, T2, T3, T4, T5> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5, T6>(this IOperatorOut<IGenericEvent<T1, T2, T3, T4, T5, T6>> container, Func<T1, T2, T3, T4, T5, T6> message)
            => ((MessageOperatorBox<IMessage>)container)?.Value.Add(message);
    }
}
