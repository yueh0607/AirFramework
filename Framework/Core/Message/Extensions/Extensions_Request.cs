using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static T1 Request<T1>(this UnitMessageDispatcherContanier container)
        {
            if(!TryRequest<T1>(container,out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static T2 Request<T1, T2>(this UnitMessageDispatcherContanier container, T1 arg1)
        {
            if (!TryRequest<T1,T2>(container,arg1, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
        public static T3 Request<T1, T2, T3>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2)
        {
            if (!TryRequest<T1, T2,T3>(container, arg1,arg2, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
        public static T4 Request<T1, T2, T3, T4>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3)
        {
            if (!TryRequest<T1, T2,T3,T4>(container, arg1,arg2,arg3,out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static T5 Request<T1, T2, T3, T4, T5>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            if (!TryRequest<T1, T2, T3, T4,T5>(container, arg1, arg2, arg3,arg4, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;
        }
        public static T6 Request<T1, T2, T3, T4, T5,T6>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4,T5 arg5)
        {
            if (!TryRequest<T1, T2, T3, T4, T5,T6>(container, arg1, arg2, arg3, arg4,arg5, out var result)) throw new InvalidOperationException("No such request with this messagetype");
            return result;

        }
    }
}
