using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe(this UnitDelegateGroup container, Action message)
            => container?.Value.Remove<Action>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe<T1>(this UnitDelegateGroup container, Action<T1> message)
            => container?.Value.Remove<Action<T1>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe<T1, T2>(this UnitDelegateGroup container, Action<T1, T2> message)
            => container?.Value.Remove<Action<T1, T2>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe<T1, T2, T3>(this UnitDelegateGroup container, Action<T1, T2, T3> message)
            => container?.Value.Remove<Action<T1, T2, T3>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe<T1, T2, T3, T4>(this UnitDelegateGroup container, Action<T1, T2, T3, T4> message)
            => container?.Value.Remove<Action<T1, T2, T3, T4>>(message);
        /// <summary>
        /// 退订
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void UnSubscribe<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, Action<T1, T2, T3, T4, T5> message)
            => container?.Value.Remove<Action<T1, T2, T3, T4, T5>>(message);

    }
}
