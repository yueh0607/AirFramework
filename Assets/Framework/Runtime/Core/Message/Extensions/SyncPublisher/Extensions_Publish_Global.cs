﻿namespace AirFramework
{
    public static partial class MessageExtensions
    {

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish(this IDispatcherOut<ISendMessage> container)
        {
            //获取动态队列
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage>)operations).Publish();
                    //归队
                    dic.Enqueue(key, operations);

                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1>(this IDispatcherOut<ISendMessage<T1>> container, T1 arg1)
        {
            //事件集合
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage<T1>>)operations).Publish(arg1);
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
        }

        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2>(this IDispatcherOut<ISendMessage<T1, T2>> container, T1 arg1, T2 arg2)
        {
            //事件集合
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage<T1, T2>>)operations).Publish(arg1, arg2);
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3>(this IDispatcherOut<ISendMessage<T1, T2, T3>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            //事件集合
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage<T1, T2, T3>>)operations).Publish(arg1, arg2, arg3);
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>

        public static void Publish<T1, T2, T3, T4>(this IDispatcherOut<ISendMessage<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            //事件集合
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage<T1, T2, T3, T4>>)operations).Publish(arg1, arg2, arg3, arg4);
                    dic.Enqueue(key, operations);
                }
            }
        }
        /// <summary>
        /// 发布全局消息
        /// </summary>
        public static void Publish<T1, T2, T3, T4, T5>(this IDispatcherOut<ISendMessage<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            //事件集合
            var dic = ((UnitMessageDispatcher<IMessage>)container).Value.m_events;
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                if (dic.TryDequeue(out var operations, out var key))
                {
                    ((IOperatorOut<ISendMessage<T1, T2, T3, T4, T5>>)operations).Publish(arg1, arg2, arg3, arg4, arg5);
                    dic.Enqueue(key, operations);
                }
            }
        }
    }
}
