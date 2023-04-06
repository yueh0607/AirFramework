namespace AirFramework
{
    public static partial class MessageExtensions
    {

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish(this IUnitDispatcherOut<ISendMessage> container)
        {
            var dic = container.Value.EventsList;
        

            foreach (var group in dic.Values)
            {
                var g = group;
                UnsafeHandler.AsRef<UnitMessageOperator,IUnitMessageOperatorOut<ISendMessage>>(ref g)
                    .Publish();
                
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1>(this IUnitDispatcherOut<ISendMessage<T1>> container, T1 arg1)
        {
            var dic = container.Value.EventsList;
            foreach (var group in dic) group.Value.Publish(arg1);
        }

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2>(this IUnitDispatcherOut<ISendMessage<T1,T2>> container, T1 arg1, T2 arg2)
        {
            var dic = container.Value.EventsList;
            foreach (var group in dic) group.Value.Publish(arg1, arg2);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3>(this IUnitDispatcherOut<ISendMessage<T1,T2,T3>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var dic = container.Value.EventsList;
            foreach (var group in dic) group.Value.Publish(arg1, arg2, arg3);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3, T4>(this IUnitDispatcherOut<ISendMessage<T1,T2,T3,T4>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var dic = container.Value.EventsList;
            foreach (var group in dic) group.Value.Publish(arg1, arg2, arg3, arg4);
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2, T3, T4, T5>(this IUnitDispatcherOut<ISendMessage<T1,T2,T3,T4,T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var dic = container.Value.EventsList;
            foreach (var group in dic) group.Value.Publish(arg1, arg2, arg3, arg4, arg5);
        }
    }
}
