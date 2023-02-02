using System;

namespace AirFramework
{
    public static partial class Extensions
    {

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish(this UnitMessageDispatcher container)
        {
            var dic = container.Value.EevensList;
            foreach(var dispatcher in dic) dispatcher.Value.Publish();
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1>(this UnitMessageDispatcher container, T1 arg1)
        {
            var dic = container.Value.EevensList;
            foreach (var dispatcher in dic) dispatcher.Value.Publish(arg1);
        }

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2>(this UnitMessageDispatcher container, T1 arg1, T2 arg2)
        {
            var dic = container.Value.EevensList;
            foreach (var dispatcher in dic) dispatcher.Value.Publish(arg1,arg2);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3>(this UnitMessageDispatcher container, T1 arg1, T2 arg2, T3 arg3)
        {
            var dic = container.Value.EevensList;
            foreach (var dispatcher in dic) dispatcher.Value.Publish(arg1, arg2,arg3);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3, T4>(this UnitMessageDispatcher container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var dic = container.Value.EevensList;
            foreach (var dispatcher in dic) dispatcher.Value.Publish(arg1, arg2, arg3,arg4);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2, T3, T4, T5>(this UnitMessageDispatcher container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var dic = container.Value.EevensList;
            foreach (var dispatcher in dic) dispatcher.Value.Publish(arg1, arg2, arg3, arg4,arg5);
        }
    }
}
