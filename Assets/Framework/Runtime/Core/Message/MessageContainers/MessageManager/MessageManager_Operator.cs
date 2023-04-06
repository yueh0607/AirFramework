namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {
        /// <summary>
        /// 消息操作者访问：申请指定类型的消息操作者，receiver为默认时返回全局操作者
        /// </summary>
        /// <typeparam name="MessageType">操作者类型</typeparam>
        /// <param name="receiver">操作对象</param>
        /// <returns></returns>

        public unsafe IOperatorOut<MessageType> Operator<MessageType>(IMessageReceiver receiver = null) where MessageType : IMessage
        {
            var x = m_dispatchers.GetValueOrAddDefault(typeof(MessageType), GetDispatcherFromNew)
                ?.Value.GetOrAddGroup(receiver ?? this);
            return UnsafeHandler.As<UnitMessageOperator<IMessage>, UnitMessageOperator<MessageType>>(ref x);
        }


        /// <summary>
        /// 消息派发器访问：获取指定类型的消息派发器
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public IDispatcherOut<MessageType> Dispatcher<MessageType>() where MessageType : IMessage
        {
            var x = m_dispatchers.GetValueOrAddDefault(typeof(MessageType), GetDispatcherFromNew);
            return UnsafeHandler.As<UnitMessageDispatcher<IMessage>, UnitMessageDispatcher<MessageType>>(ref x);
        }


    }
}
