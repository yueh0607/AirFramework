using AirFramework.Internal;
using System;
namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1>(this IOperatorOut<ICallEvent<T1>> container, out UnitList<T1> result)
        {
            UnitList<T1> _result = Framework.Pool.Allocate<UnitList<T1>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1>).Invoke());
            }
            events.Reset();
            return true;
        }
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1, T2>(this IOperatorOut<ICallEvent<T1, T2>> container, T1 arg1, out UnitList<T2> result)
        {
            UnitList<T2> _result = Framework.Pool.Allocate<UnitList<T2>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1, T2>).Invoke(arg1));
            }
            events.Reset();
            return true;
        }
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1, T2, T3>(this IOperatorOut<ICallEvent<T1, T2, T3>> container, T1 arg1, T2 arg2, out UnitList<T3> result)
        {
            UnitList<T3> _result = Framework.Pool.Allocate<UnitList<T3>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1, T2, T3>).Invoke(arg1, arg2));
            }
            events.Reset();
            return true;
        }
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1, T2, T3, T4>(this IOperatorOut<ICallEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, out UnitList<T4> result)
        {
            UnitList<T4> _result = Framework.Pool.Allocate<UnitList<T4>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1, T2, T3, T4>).Invoke(arg1, arg2, arg3));
            }
            events.Reset();
            return true;
        }
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1, T2, T3, T4, T5>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, out UnitList<T5> result)
        {
            UnitList<T5> _result = Framework.Pool.Allocate<UnitList<T5>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1, T2, T3, T4, T5>).Invoke(arg1, arg2, arg3, arg4));
            }
            events.Reset();
            return true;
        }
        /// <summary>
        /// 对指定对象进行TryCall,返回全部结果
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        /// <exception cref="CallNullEventException"></exception>
        public static bool TryCallAll<T1, T2, T3, T4, T5, T6>(this IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, out UnitList<T6> result)
        {
            UnitList<T6> _result = Framework.Pool.Allocate<UnitList<T6>>();
            result = _result;
            if (container is null) return false;
            var events = ((MessageOperatorBox<IMessage>)container)?.Value;
            if (events == null || events.Count == 0) return false;
            if (!events.Enable) return false;
            while (events.GetNext(out var dele))
            {
                _result.Value.Add((dele as Func<T1, T2, T3, T4, T5, T6>).Invoke(arg1, arg2, arg3, arg4, arg5));
            }
            events.Reset();
            return true;
        }


    }
}
