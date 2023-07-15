using AirFramework.Internal;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish(this IOperatorOut<ISendEvent> container)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action)current).Invoke();
            }
            mop.Reset();
        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1>(this IOperatorOut<ISendEvent<T1>> container, T1 arg1)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action<T1>)current).Invoke(arg1);
            }
            mop.Reset();
        }
        public static void Publish<T1, T2>(this IOperatorOut<ISendEvent<T1, T2>> container, T1 arg1, T2 arg2)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action<T1, T2>)current).Invoke(arg1, arg2);
            }
            mop.Reset();
        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1, T2, T3>(this IOperatorOut<ISendEvent<T1, T2, T3>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action<T1, T2, T3>)current).Invoke(arg1, arg2, arg3);
            }
            mop.Reset();
        }
        public static void Publish<T1, T2, T3, T4>(this IOperatorOut<ISendEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action<T1, T2, T3, T4>)current).Invoke(arg1, arg2, arg3, arg4);
            }
            mop.Reset();
        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1, T2, T3, T4, T5>(this IOperatorOut<ISendEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var mop = ((MessageOperatorBox<IMessage>)container)?.Value;
            while (mop.GetNext(out var current))
            {
                ((Action<T1, T2, T3, T4, T5>)current).Invoke(arg1, arg2, arg3, arg4, arg5);
            }
            mop.Reset();
        }
    }
}
