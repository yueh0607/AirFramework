/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 管理器公开方法，通过这些方法实现核心操作的匹配和泛型约束
 ********************************************************************************************/

using AirFramework.Internal;
namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {


        #region 具体实现
        /// <summary>
        /// 消息操作者访问：申请指定类型的消息操作者，receiver为默认时返回全局操作者
        /// </summary>
        /// <typeparam name="MessageType">操作者类型</typeparam>
        /// <param name="receiver">操作对象</param>
        /// <returns></returns>


        public IOperatorOut<MessageType> Operator<MessageType>(IMessageReceiver receiver = null) where MessageType : IMessage
        {

            var x = dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), CreateDispatcherBox)
                .Value.GetOrAddOperator(receiver ?? this);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<MessageType>>(ref x);
        }



        /// <summary>
        /// 消息派发器访问：获取指定类型的消息派发器，可进行全局行为
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public IDispatcherOut<MessageType> Dispatcher<MessageType>() where MessageType : IMessage
        {
            var x = dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), CreateDispatcherBox);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<MessageType>>(ref x);
        }


        /// <summary>
        /// 消息移除：移除全局所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public bool TryRemoveTypeFromGlobal<T>() where T : IMessage
        {
            return TryRemoveTypeFromGlobal(typeof(T));
        }

        /// <summary>
        /// 消息移除：移除该对象所有的该类消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="receiver"></param>
        public bool TryRemoveTypeFromReceiver<T>(IMessageReceiver receiver) where T : IMessage
        {
            return TryRemoveTypeFromReceiver(typeof(T), receiver);
        }
        #endregion



    }
}
