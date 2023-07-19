using AirFramework.Internal;
namespace AirFramework
{
    public static partial class MessageExtensions
    {

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish(this IDispatcherOut<ISendEvent> container)
        {
            if (container is null) return;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {

                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent>>(ref operations).Publish();
                    //归队
                    dic.Enqueue(key, operations);

                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1>(this IDispatcherOut<ISendEvent<T1>> container, T1 arg1)
        {
            if (container is null) return;
            //事件集合
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1>>>(ref operations).Publish(arg1);
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
        }

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2>(this IDispatcherOut<ISendEvent<T1, T2>> container, T1 arg1, T2 arg2)
        {
            if (container is null) return;
            //事件集合
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2>>>(ref operations).Publish(arg1, arg2);
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3>(this IDispatcherOut<ISendEvent<T1, T2, T3>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            if (container is null) return;
            //事件集合
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3>>>(ref operations).Publish(arg1, arg2, arg3);
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3, T4>(this IDispatcherOut<ISendEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            if (container is null) return;
            //事件集合
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3, T4>>>(ref operations).Publish(arg1, arg2, arg3, arg4);
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2, T3, T4, T5>(this IDispatcherOut<ISendEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            if (container is null) return;
            //事件集合
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3, T4, T5>>>(ref operations).Publish(arg1, arg2, arg3, arg4, arg5);
                    dic.Enqueue(key, operations);
                }
            }
        }
    }
}
