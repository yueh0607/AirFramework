using AirFramework.Internal;
using UnityEditor;

namespace AirFramework
{
    public static partial class MessageGenericExtensions
    {

        /// <summary>
        /// 清空操作器
        /// </summary>
        /// <param name="container"></param>
        public static void Clear(this MessageOperatorBox<IMessage> container)
        {
            container?.Clear();
        }

        /// <summary>
        /// 移除对象身上的的全部事件
        /// </summary>
        /// <param name="item"></param>
        public static void RemoveAllMessage(this IMessageReceiver item)
        {
            Framework.Message.TryRemoveAllFromReceiver(item);
        }

        #region OperatorGeneric
        private static MessageOperatorBox<IMessage> GetMessageBoxDefault<T>(this IMessageReceiver receiver, bool autoCreate = true)
        {
            MessageOperatorBox<IMessage> x = null;
            if (autoCreate)
            {
                x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(T), MessageManager.CreateDispatcherBox)
               .Value.GetOrAddOperator(receiver);
            }
            else
            {
                x = Framework.Message.dispatchersContainer.GetValueOrDefault(typeof(T))
                .Value.GetOperatorOrDefault(receiver);
            }
            if (x == null) return null;
            return x;
        }

        public static IOperatorOut<ISendEvent> GenericOperator<M>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent>>(ref x);
        }
        public static IOperatorOut<ISendEvent<T1>> GenericOperator<M, T1>(this IMessageReceiver receiver, bool autoCreate) where M : ISendEvent<T1>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1>>>(ref x);
        }
        public static IOperatorOut<ISendEvent<T1, T2>> GenericOperator<M, T1, T2>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent<T1, T2>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2>>>(ref x);
        }

        public static IOperatorOut<ISendEvent<T1, T2, T3>> GenericOperator<M, T1, T2, T3>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent<T1, T2, T3>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3>>>(ref x);
        }

        public static IOperatorOut<ISendEvent<T1, T2, T3, T4>> GenericOperator<M, T1, T2, T3, T4>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IOperatorOut<ISendEvent<T1, T2, T3, T4, T5>> GenericOperator<M, T1, T2, T3, T4, T5>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4, T5>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IOperatorOut<ISendEvent<T1, T2, T3, T4, T5, T6>> GenericOperator<M, T1, T2, T3, T4, T5, T6>(this IMessageReceiver receiver, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ISendEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }



        #endregion

        #region DispatcherGeneric
        private static MessageDispatcherBox<IMessage> GetDispatcherBoxDefault<T>(this MessageManager manager, bool autoCreate = true)
        {
            MessageDispatcherBox<IMessage> x = null;
            if (autoCreate)
            {
                x = manager.dispatchersContainer.
                GetValueOrAddDefault(typeof(T),
                MessageManager.CreateDispatcherBox);
            }
            else
            {
                x = manager.dispatchersContainer.GetValueOrDefault(typeof(T));
            }
            if (x == null) return null;
            return x;
        }

        public static IDispatcherOut<ISendEvent> GenericDispatcher<M>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent>>(ref x);

        }
        public static IDispatcherOut<ISendEvent<T1>> GenericDispatcher<M, T1>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1>>>(ref x);
        }
        public static IDispatcherOut<ISendEvent<T1, T2>> GenericDispatcher<M, T1, T2>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1, T2>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3>> GenericDispatcher<M, T1, T2, T3>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1, T2, T3>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4>> GenericDispatcher<M, T1, T2, T3, T4>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4, T5>> GenericDispatcher<M, T1, T2, T3, T4, T5>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4, T5>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4, T5, T6>> GenericDispatcher<M, T1, T2, T3, T4, T5, T6>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ISendEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }

        #endregion

    }


    public static partial class MessageExDispathcer
    {
        #region Operator
        private static MessageOperatorBox<IMessage> GetMessageBoxDefault<T>(this IMessageReceiver receiver, bool autoCreate = true)
        {
            MessageOperatorBox<IMessage> x = null;
            if (autoCreate)
            {
                x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(T), MessageManager.CreateDispatcherBox)
               .Value.GetOrAddOperator(receiver);
            }
            else
            {
                x = Framework.Message.dispatchersContainer.GetValueOrDefault(typeof(T))
                .Value.GetOperatorOrDefault(receiver);
            }
            if (x == null) return null;
            return x;
        }
        public static IOperatorOut<ICallEvent> GenericOperator<M>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent>>(ref x);
        }
        public static IOperatorOut<ICallEvent<T1>> GenericOperator<M, T1>(this IMessageReceiver receiver, bool autoCreate) where M : ICallEvent<T1>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1>>>(ref x);
        }
        public static IOperatorOut<ICallEvent<T1, T2>> GenericOperator<M, T1, T2>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent<T1, T2>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2>>>(ref x);
        }

        public static IOperatorOut<ICallEvent<T1, T2, T3>> GenericOperator<M, T1, T2, T3>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent<T1, T2, T3>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3>>>(ref x);
        }

        public static IOperatorOut<ICallEvent<T1, T2, T3, T4>> GenericOperator<M, T1, T2, T3, T4>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IOperatorOut<ICallEvent<T1, T2, T3, T4, T5>> GenericOperator<M, T1, T2, T3, T4, T5>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4, T5>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IOperatorOut<ICallEvent<T1, T2, T3, T4, T5, T6>> GenericOperator<M, T1, T2, T3, T4, T5, T6>(this IMessageReceiver receiver, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = GetMessageBoxDefault<M>(receiver, autoCreate);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<ICallEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }
        #endregion



        #region DispatcherGeneric
        private static MessageDispatcherBox<IMessage> GetDispatcherBoxDefault<T>(this MessageManager manager, bool autoCreate = true)
        {
            MessageDispatcherBox<IMessage> x = null;
            if (autoCreate)
            {
                x = manager.dispatchersContainer.
                GetValueOrAddDefault(typeof(T),
                MessageManager.CreateDispatcherBox);
            }
            else
            {
                x = manager.dispatchersContainer.GetValueOrDefault(typeof(T));
            }
            if (x == null) return null;
            return x;
        }

        public static IDispatcherOut<ICallEvent> GenericDispatcher<M>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent>>(ref x);

        }
        public static IDispatcherOut<ICallEvent<T1>> GenericDispatcher<M, T1>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1>>>(ref x);
        }
        public static IDispatcherOut<ICallEvent<T1, T2>> GenericDispatcher<M, T1, T2>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1, T2>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1, T2>>>(ref x);
        }

        public static IDispatcherOut<ICallEvent<T1, T2, T3>> GenericDispatcher<M, T1, T2, T3>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1, T2, T3>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1, T2, T3>>>(ref x);
        }

        public static IDispatcherOut<ICallEvent<T1, T2, T3, T4>> GenericDispatcher<M, T1, T2, T3, T4>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IDispatcherOut<ICallEvent<T1, T2, T3, T4, T5>> GenericDispatcher<M, T1, T2, T3, T4, T5>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4, T5>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IDispatcherOut<ICallEvent<T1, T2, T3, T4, T5, T6>> GenericDispatcher<M, T1, T2, T3, T4, T5, T6>(this MessageManager manager, IMessageReceiver receiver = null, bool autoCreate = true) where M : ICallEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = GetDispatcherBoxDefault<M>(manager, autoCreate);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ICallEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }

        #endregion
    }

}
