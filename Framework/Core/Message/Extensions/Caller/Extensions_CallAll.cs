using System;
using System.Collections.Generic;

namespace AirFramework
{
    public static partial class Extensions
    {

        public static UnitList<T1> CallAll<T1>(this UnitDelegateGroup container)
        {
            var events = container?.Value.Get<Func<T1>>();
            var result = Framework.Pool.Allocate<UnitList<T1>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1>).Invoke());
            }
            return result;
        }

        public static UnitList<T2> CallAll<T1, T2>(this UnitDelegateGroup container, T1 arg1)
        {
            var events = container?.Value.Get<Func<T1, T2>>();
            var result = Framework.Pool.Allocate<UnitList<T2>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1, T2>).Invoke(arg1));
            }
            return result;
        }

        public static UnitList<T3> CallAll<T1, T2, T3>(this UnitDelegateGroup container, T1 arg1, T2 arg2)
        {
            var events = container?.Value.Get<Func<T1, T2, T3>>();
            var result = Framework.Pool.Allocate<UnitList<T3>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1, T2, T3>).Invoke(arg1, arg2));
            }
            return result;
        }

        public static UnitList<T4> CallAll<T1, T2, T3, T4>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4>>();
            var result = Framework.Pool.Allocate<UnitList<T4>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1, T2, T3, T4>).Invoke(arg1, arg2, arg3));
            }
            return result;
        }

        public static UnitList<T5> CallAll<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4,T5>>();
            var result = Framework.Pool.Allocate<UnitList<T5>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1, T2, T3, T4,T5>).Invoke(arg1, arg2, arg3,arg4));
            }
            return result;
        }

        public static UnitList<T6> CallAll<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4, T5,T6>>();
            var result = Framework.Pool.Allocate<UnitList<T6>>();
            if (events == null) return result;

            for (int i = 0; i < events.Count; i++)
            {
                result.Value.Add((events[i] as Func<T1, T2, T3, T4, T5,T6>).Invoke(arg1, arg2, arg3, arg4,arg5));
            }
            return result;
        }

    }
}
