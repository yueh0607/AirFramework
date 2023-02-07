using System;

namespace AirFramework
{
    public static partial class Message
    {

        public static bool TryCall<T1>(this UnitDelegateGroup container,out T1 result)
        {
            var events = container?.Value.Get<Func<T1>>();
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result= (events[0] as Func<T1>).Invoke();
            return true;
        }
        public static bool TryCall<T1,T2>(this UnitDelegateGroup container,T1 arg1 ,out T2 result)
        {
            var events = container?.Value.Get<Func<T1, T2>>();
          
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result = (events[0] as Func<T1,T2>).Invoke(arg1);
            return true;
        }
        public static bool TryCall<T1, T2,T3>(this UnitDelegateGroup container, T1 arg1,T2 arg2, out T3 result)
        {
            var events = container?.Value.Get<Func<T1, T2, T3>>();
          
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result = (events[0] as Func<T1, T2,T3>).Invoke(arg1,arg2);
            return true;
        }
        public static bool TryCall<T1, T2, T3,T4>(this UnitDelegateGroup container, T1 arg1, T2 arg2,T3 arg3, out T4 result)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4>>();
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result = (events[0] as Func<T1, T2, T3,T4>).Invoke(arg1, arg2,arg3);
            return true;
        }
        public static bool TryCall<T1, T2, T3, T4,T5>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3,T4 arg4, out T5 result)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4, T5>>();
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result = (events[0] as Func<T1, T2, T3, T4,T5>).Invoke(arg1, arg2, arg3,arg4);
            return true;
        }
        public static bool TryCall<T1, T2, T3, T4, T5,T6>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4,T5 arg5, out T6 result)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4, T5, T6>>();
            if (events == null || events.Count == 0)
            {
                result = default;
                return false;
            }
            result = (events[0] as Func<T1, T2, T3, T4, T5,T6>).Invoke(arg1, arg2, arg3, arg4,arg5);
            return true;
        }


    }
}
