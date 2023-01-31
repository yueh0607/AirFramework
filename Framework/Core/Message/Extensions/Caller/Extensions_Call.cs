

using System;

namespace AirFramework
{
    
    public static partial class Extensions
    {
        private const string errorInfoCall = "No such message with in this Operator";
        public static T1 Call<T1>(this UnitDelegateGroup container)
        {
            return TryCall<T1>(container,out var result)?result: throw new InvalidOperationException(errorInfoCall);
        }
        public static T2 Call<T1, T2>(this UnitDelegateGroup container, T1 arg1)
        {
            return TryCall<T1,T2>(container,arg1, out var result)?result: throw new InvalidOperationException(errorInfoCall);
        }
        public static T3 Call<T1, T2, T3>(this UnitDelegateGroup container, T1 arg1, T2 arg2)
        {
            return TryCall<T1, T2, T3>(container, arg1, arg2, out var result) ? result : throw new InvalidOperationException(errorInfoCall);
        }
        public static T4 Call<T1, T2, T3, T4>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3)
        {
            return TryCall<T1, T2,T3,T4>(container, arg1,arg2,arg3,out var result)?result: throw new InvalidOperationException(errorInfoCall);
        }
        public static T5 Call<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            return TryCall<T1, T2, T3, T4,T5>(container, arg1, arg2, arg3,arg4, out var result)?result: throw new InvalidOperationException(errorInfoCall);
        }
        public static T6 Call<T1, T2, T3, T4, T5,T6>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4,T5 arg5)
        {
            return TryCall<T1, T2, T3, T4, T5,T6>(container, arg1, arg2, arg3, arg4,arg5, out var result)?result: throw new InvalidOperationException(errorInfoCall);
        }
    }
}
