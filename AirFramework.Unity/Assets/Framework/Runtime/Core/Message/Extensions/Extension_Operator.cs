using AirFramework.Internal;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    public static class OperatorEx1
    {

        /// <summary>
        /// 针对SendEvent的Operator访问拓展
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static MessageOperatorBox<MessageType> Operator<MessageType>(this IMessageReceiver receiver, bool autoCreate = true) where MessageType : ISendEventBase
        {
            MessageOperatorBox<IMessage> x = null;
            if (autoCreate)
            {
                x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox)
               .Value.GetOrAddOperator(receiver ?? Framework.Message);
            }
            else
            {
                x = Framework.Message.dispatchersContainer.GetValueOrDefault(typeof(MessageType))
                .Value.GetOperatorOrDefault(receiver ?? Framework.Message);
            }
            if (x == null) return null;
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<MessageType>>(ref x);
        }
    }
    public static class OperatorEx2
    {
        /// <summary>
        /// 针对CallEvent的Operator访问拓展
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static MessageOperatorBox<MessageType> Operator<MessageType>(this IMessageReceiver receiver, bool autoCreate = true) where MessageType : ICallEventBase
        {
            MessageOperatorBox<IMessage> x = null;
            if (autoCreate)
            {
                x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox)
               .Value.GetOrAddOperator(receiver ?? Framework.Message);
            }
            else
            {
                x = Framework.Message.dispatchersContainer.GetValueOrDefault(typeof(MessageType))
                .Value.GetOperatorOrDefault(receiver ?? Framework.Message);
            }
            if (x == null) return null;
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<MessageType>>(ref x);
        }
    }
}
