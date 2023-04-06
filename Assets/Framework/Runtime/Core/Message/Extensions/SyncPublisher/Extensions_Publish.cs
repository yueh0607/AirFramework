using System;

namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish(this IOperatorOut<ISendMessage> container)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action)?.Invoke();
            }

        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1>(this IOperatorOut<ISendMessage<T1>> container, T1 arg1)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action<T1>>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action<T1>)?.Invoke(arg1);
            }
        }
        public static void Publish<T1, T2>(this IOperatorOut<ISendMessage<T1, T2>> container, T1 arg1, T2 arg2)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action<T1, T2>>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action<T1, T2>)?.Invoke(arg1, arg2);
            }
        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1, T2, T3>(this IOperatorOut<ISendMessage<T1, T2, T3>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action<T1, T2, T3>>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action<T1, T2, T3>)?.Invoke(arg1, arg2, arg3);
            }
        }
        public static void Publish<T1, T2, T3, T4>(this IOperatorOut<ISendMessage<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action<T1, T2, T3, T4>>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action<T1, T2, T3, T4>)?.Invoke(arg1, arg2, arg3, arg4);
            }
        }
        /// <summary>
        /// 发布
        /// </summary>
        /// <param name="container"></param>
        public static void Publish<T1, T2, T3, T4, T5>(this IOperatorOut<ISendMessage<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var events = ((UnitMessageOperator<IMessage>)container)?.Value.Get<Action<T1, T2, T3, T4, T5>>();
            if (events == null || events.Count == 0) return;
            for (int i = 0; i < events.Count; i++)
            {
                (events[i] as Action<T1, T2, T3, T4, T5>)?.Invoke(arg1, arg2, arg3, arg4, arg5);
            }
        }
    }
}
