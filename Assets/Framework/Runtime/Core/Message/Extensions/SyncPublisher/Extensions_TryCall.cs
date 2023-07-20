using AirFramework.Internal;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {

        public static bool TryCall<T1>(this IOperatorOut<ICallEvent<T1>> container, out T1 result)
        {
            result= default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result=(dele as Func<T1>).Invoke();
            }
            events.Reset();
            return true;
        }

        public static bool TryCall<T1, T2>(this IOperatorOut<ICallEvent<T1, T2>> container, T1 arg1, out T2 result)
        {
            result = default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result = (dele as Func<T1,T2>).Invoke(arg1);
            }
            events.Reset();
            return true;
        }
        public static bool TryCall<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, T3>> container, T1 arg1, T2 arg2, out T3 result)
        {
            result = default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result = (dele as Func<T1, T2, T3>).Invoke(arg1, arg2);
            }
            events.Reset();
            return true;
        }
        public static bool TryCall<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, out T4 result)
        {
            result = default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result = (dele as Func<T1, T2, T3, T4>).Invoke(arg1, arg2, arg3);
            }
            events.Reset();
            return true;
        }

        public static bool TryCall<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, out T5 result)
        {
            result = default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result = (dele as Func<T1, T2, T3, T4, T5>).Invoke(arg1, arg2, arg3, arg4);
            }
            events.Reset();
            return true;
        }

        public static bool TryCall<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, out T6 result)
        {
            result = default;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            while (events.GetNext(out var dele))
            {
                result = (dele as Func<T1, T2, T3, T4, T5, T6>).Invoke(arg1, arg2, arg3, arg4, arg5);
            }
            events.Reset();
            return true;
        }

    }
}
