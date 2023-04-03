using System;

namespace AirFramework
{
    public static partial class MessageExtensions
    {



        
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe(this IUnitDelegateGroupOut<ISendMessage> container, Action message)
            => container?.Value.Add<Action>(message);

   
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1>(this IUnitDelegateGroupOut<ISendMessage<T1>> container, Action<T1> message) 
            => container?.Value.Add<Action<T1>>(message);

        
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2>(this IUnitDelegateGroupOut<ISendMessage<T1,T2>> container, Action<T1, T2> message)
            => container?.Value.Add<Action<T1, T2>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1, T2, T3>(this IUnitDelegateGroupOut<ISendMessage<T1,T2,T3>> container, Action<T1, T2, T3> message)
            => container?.Value.Add<Action<T1, T2, T3>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        public static void Subscribe<T1, T2, T3, T4>(this IUnitDelegateGroupOut<ISendMessage<T1,T2,T3,T4>> container, Action<T1, T2, T3, T4> message)
            => container?.Value.Add<Action<T1, T2, T3, T4>>(message);
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>


        
        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5>(this IUnitDelegateGroupOut<ISendMessage<T1,T2,T3,T4,T5>> container, Action<T1, T2, T3, T4, T5> message)
            => container?.Value.Add<Action<T1, T2, T3, T4, T5>>(message);
        
 //---------------------------------------------------------------------------------------------------------------------------------------

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1>(this IUnitDelegateGroupOut<ISendMessage<T1>> container, Func<T1> message)
            => container?.Value.Add<Func<T1>>(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2>(this IUnitDelegateGroupOut<ISendMessage<T1,T2>> container, Func<T1, T2> message)
            => container?.Value.Add<Func<T1, T2>>(message);

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2, T3>(this IUnitDelegateGroupOut<ISendMessage<T1,T2,T3>> container, Func<T1, T2, T3> message)
            => container?.Value.Add<Func<T1, T2, T3>>(message);

        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>

        public static void Subscribe<T1, T2, T3, T4>(this IUnitDelegateGroupOut<ISendMessage<T1,T2,T3,T4>> container, Func<T1, T2, T3, T4> message)
            => container?.Value.Add<Func<T1, T2, T3, T4>>(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, T5> message)
            => container?.Value.Add<Func<T1, T2, T3, T4, T5>>(message);


        /// <summary>
        /// 订阅
        /// </summary>
        /// <param name="container"></param>
        /// <param name="message"></param>
        public static void Subscribe<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, T5, T6> message)
            => container?.Value.Add<Func<T1, T2, T3, T4, T5, T6>>(message);
    }
}
