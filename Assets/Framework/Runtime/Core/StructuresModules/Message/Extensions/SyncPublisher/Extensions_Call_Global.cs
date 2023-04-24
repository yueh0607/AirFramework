using AirFramework.Internal;
namespace AirFramework
{
    public static partial class MessageExtensions
    {

        public static UnitList<T1> Call<T1>(this IDispatcherOut<IGenericMessage<T1>> container)
        {
            var result = Framework.Pool.Allocate<UnitList<T1>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1>>)operations).Call());
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

        public static UnitList<T2> Call<T1, T2>(this IDispatcherOut<IGenericMessage<T1, T2>> container, T1 arg1)
        {
            var result = Framework.Pool.Allocate<UnitList<T2>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1, T2>>)operations).Call(arg1));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

        public static UnitList<T3> Call<T1, T2, T3>(this IDispatcherOut<IGenericMessage<T1, T2, T3>> container, T1 arg1, T2 arg2)
        {
            var result = Framework.Pool.Allocate<UnitList<T3>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1, T2, T3>>)operations).Call(arg1, arg2));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

        public static UnitList<T4> Call<T1, T2, T3, T4>(this IDispatcherOut<IGenericMessage<T1, T2, T3, T4>> container, T1 arg1, T2 arg2, T3 arg3)
        {
            var result = Framework.Pool.Allocate<UnitList<T4>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1, T2, T3, T4>>)operations).Call(arg1, arg2, arg3));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

        public static UnitList<T5> Call<T1, T2, T3, T4, T5>(this IDispatcherOut<IGenericMessage<T1, T2, T3, T4, T5>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var result = Framework.Pool.Allocate<UnitList<T5>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    //强转发布
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1, T2, T3, T4, T5>>)operations).Call(arg1, arg2, arg3, arg4));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

        public static UnitList<T6> Call<T1, T2, T3, T4, T5, T6>(this IDispatcherOut<IGenericMessage<T1, T2, T3, T4, T5, T6>> container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var result = Framework.Pool.Allocate<UnitList<T6>>();
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.eventsContainer;
            //刷新动态队列数量
            dic.RefreshTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    //强转发布
                    result.Value.Add(((IOperatorOut<IGenericMessage<T1, T2, T3, T4, T5, T6>>)operations).Call(arg1, arg2, arg3, arg4, arg5));
                    //归队
                    dic.Enqueue(key, operations);
                }
            }
            return result;
        }

    }
}
