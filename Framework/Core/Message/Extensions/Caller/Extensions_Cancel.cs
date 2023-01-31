using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static void Cancel<T1>(this UnitDelegateGroup container, Func<T1> message)
            => container?.Value.Remove<Func<T1>>(message);
        public static void Cancel<T1, T2>(this UnitDelegateGroup container, Func<T1, T2> message)
            => container?.Value.Remove<Func<T1, T2>>(message);
        public static void Cancel<T1, T2, T3>(this UnitDelegateGroup container, Func<T1, T2, T3> message)
            => container?.Value.Remove<Func<T1, T2, T3>>(message);
        public static void Cancel<T1, T2, T3, T4>(this UnitDelegateGroup container, Func<T1, T2, T3, T4> message)
            => container?.Value.Remove<Func<T1, T2, T3, T4>>(message);
        public static void Cancel<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, T5> message)
            => container?.Value.Remove<Func<T1, T2, T3, T4, T5>>(message);
        public static void Cancel<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, T5, T6> message)
            => container?.Value.Remove<Func<T1, T2, T3, T4, T5, T6>>(message);
    }
}
