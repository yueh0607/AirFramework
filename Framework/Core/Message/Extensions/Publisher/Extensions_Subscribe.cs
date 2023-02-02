using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void Subscribe(this UnitDelegateGroup container,Action message)
            =>container?.Value.Add<Action>(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void Subscribe<T1>(this UnitDelegateGroup container, Action<T1> message)
            =>container?.Value.Add<Action<T1>>(message);


        
        
        public static void Subscribe<T1,T2>(this UnitDelegateGroup container, Action<T1,T2> message) 
            => container?.Value.Add<Action<T1,T2>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void Subscribe<T1, T2,T3>(this UnitDelegateGroup container, Action<T1, T2,T3> message)
            => container?.Value.Add<Action<T1, T2, T3>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void Subscribe<T1, T2, T3,T4>(this UnitDelegateGroup container, Action<T1, T2, T3,T4> message)
            => container?.Value.Add<Action<T1, T2, T3, T4>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        
        
        public static void Subscribe<T1, T2, T3, T4,T5>(this UnitDelegateGroup container, Action<T1, T2, T3, T4,T5> message)
            => container?.Value.Add<Action<T1, T2, T3, T4, T5>>(message);
    }
}
