using AirFramework.Internal;
namespace AirFramework
{
    public static partial class MessageExtensions
    {
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <param name="container"></param>
        /// <returns></returns>
        public static UnitList<T1> Call<T1>(this IDispatcherOut<ICallEvent<T1>> container)
        {

            var result = Framework.Pool.Allocate<UnitList<T1>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1>>>(ref operations).Call());
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static UnitList<T2> Call<T1, T2>(this IDispatcherOut<ICallEvent<T1, T2>> container, T1 arg1)
        {
            var result = Framework.Pool.Allocate<UnitList<T2>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2>>>(ref operations).Call(arg1));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <typeparam name="T3"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <param name="arg2"></param>
        /// <returns></returns>
        public static UnitList<T3> Call<T1, T2, T3>(this IDispatcherOut<ICallEvent<T1, T2, T3>> container, T1 arg1, T2 arg2)
        {
            var result = Framework.Pool.Allocate<UnitList<T3>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3>>>(ref operations).Call(arg1, arg2));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <typeparam name="T3"></typeparam>
        /// <typeparam name="T4"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <param name="arg2"></param>
        /// <param name="arg3"></param>
        /// <returns></returns>
        public static UnitList<T4> Call<T1, T2, T3, T4>(this IDispatcherOut<ICallEvent<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var result = Framework.Pool.Allocate<UnitList<T4>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4>>>(ref operations).Call(arg1, arg2, arg3));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <typeparam name="T3"></typeparam>
        /// <typeparam name="T4"></typeparam>
        /// <typeparam name="T5"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <param name="arg2"></param>
        /// <param name="arg3"></param>
        /// <param name="arg4"></param>
        /// <returns></returns>
        public static UnitList<T5> Call<T1, T2, T3, T4, T5>(this IDispatcherOut<ICallEvent<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var result = Framework.Pool.Allocate<UnitList<T5>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    //强转发布
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4, T5>>>(ref operations).Call(arg1, arg2, arg3, arg4));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }
        /// <summary>
        /// 对全局的该类事件进行Call操作
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <typeparam name="T3"></typeparam>
        /// <typeparam name="T4"></typeparam>
        /// <typeparam name="T5"></typeparam>
        /// <typeparam name="T6"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <param name="arg2"></param>
        /// <param name="arg3"></param>
        /// <param name="arg4"></param>
        /// <param name="arg5"></param>
        /// <returns></returns>
        public static UnitList<T6> Call<T1, T2, T3, T4, T5, T6>(this IDispatcherOut<ICallEvent<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var result = Framework.Pool.Allocate<UnitList<T6>>();
            if (container is null) return result;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    //强转发布
                    result.Value.Add(UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4, T5, T6>>>(ref operations).Call(arg1, arg2, arg3, arg4, arg5));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

    }
}
