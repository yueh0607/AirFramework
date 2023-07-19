using AirFramework.Internal;
namespace AirFramework
{
    public static partial class MessageExDispatcher
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
        private static MessageOperatorBox<IMessage> GetMessageBoxDefault<T>(this MessageManager manager, IMessageReceiver receiver = null,bool autoCreate = true)
        {
            return manager.dispatchersContainer.GetValueOrAddDefault(typeof(T), static () => new MessageDispatcherBox<IMessage>())
                    .Value.GetOrAddOperator(receiver ?? manager);
        }

        public static IOperatorOut<IGenericEvent> GenericOperator<M>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent>>(ref x);

        }
        public static IOperatorOut<IGenericEvent<T1>> GenericOperator<M, T1>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1>>>(ref x);
        }
        public static IOperatorOut<IGenericEvent<T1, T2>> GenericOperator<M, T1, T2>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1, T2>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1, T2>>>(ref x);
        }

        public static IOperatorOut<IGenericEvent<T1, T2, T3>> GenericOperator<M, T1, T2, T3>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1, T2, T3>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1, T2, T3>>>(ref x);
        }

        public static IOperatorOut<IGenericEvent<T1, T2, T3, T4>> GenericOperator<M, T1, T2, T3, T4>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1, T2, T3, T4>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IOperatorOut<IGenericEvent<T1, T2, T3, T4, T5>> GenericOperator<M, T1, T2, T3, T4, T5>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1, T2, T3, T4, T5>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IOperatorOut<IGenericEvent<T1, T2, T3, T4, T5, T6>> GenericOperator<M, T1, T2, T3, T4, T5, T6>(this MessageManager manager, IMessageReceiver receiver = null) where M : IGenericEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = manager.GetMessageBoxDefault<M>();
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<IGenericEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }

        #endregion

        #region DispatcherGeneric
        private static MessageDispatcherBox<IMessage> GetDispatcherBoxDefault<T>(this MessageManager manager)
        {
            return manager.dispatchersContainer.GetValueOrAddDefault(typeof(T), static () => new MessageDispatcherBox<IMessage>());

        }

        public static IDispatcherOut<ISendEvent> GenericDispatcher<M>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent>>(ref x);

        }
        public static IDispatcherOut<ISendEvent<T1>> GenericDispatcher<M, T1>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1>>>(ref x);

        }
        public static IDispatcherOut<ISendEvent<T1, T2>> GenericDispatcher<M, T1, T2>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1, T2>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3>> GenericDispatcher<M, T1, T2, T3>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1, T2, T3>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4>> GenericDispatcher<M, T1, T2, T3, T4>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1, T2, T3, T4>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4, T5>> GenericDispatcher<M, T1, T2, T3, T4, T5>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1, T2, T3, T4, T5>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4, T5>>>(ref x);
        }

        public static IDispatcherOut<ISendEvent<T1, T2, T3, T4, T5, T6>> GenericDispatcher<M, T1, T2, T3, T4, T5, T6>(this MessageManager manager, IMessageReceiver receiver = null) where M : ISendEvent<T1, T2, T3, T4, T5, T6>
        {
            var x = manager.GetDispatcherBoxDefault<M>();
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<ISendEvent<T1, T2, T3, T4, T5, T6>>>(ref x);
        }
        #endregion

    }
}
