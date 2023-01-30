using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static UnitList<T1> CallAll<T1>(this UnitMessageDispatcherContanier container)
        {
            if(!TryCallAll<T1>(container,out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static UnitList<T2> CallAll<T1, T2>(this UnitMessageDispatcherContanier container, T1 arg1)
        {
            if (!TryCallAll<T1,T2>(container,arg1, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
        public static UnitList<T3> CallAll<T1, T2, T3>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2)
        {
            if (!TryCallAll<T1, T2,T3>(container, arg1,arg2, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
        public static UnitList<T4> CallAll<T1, T2, T3, T4>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3)
        {
            if (!TryCallAll<T1, T2,T3,T4>(container, arg1,arg2,arg3,out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static UnitList<T5> CallAll<T1, T2, T3, T4, T5>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            if (!TryCallAll<T1, T2, T3, T4,T5>(container, arg1, arg2, arg3,arg4, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static UnitList<T6> CallAll<T1, T2, T3, T4, T5,T6>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4,T5 arg5)
        {
            if (!TryCallAll<T1, T2, T3, T4, T5,T6>(container, arg1, arg2, arg3, arg4,arg5, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
    }
}
