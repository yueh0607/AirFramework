using AirFramework.Internal;
using CodiceApp.EventTracking;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public static class OperatorEx1
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static MessageOperatorBox<MessageType> Operator<MessageType>(this IMessageReceiver receiver) where MessageType : ISendEventBase
        {
            var x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox)
                 .Value.GetOrAddOperator(receiver ?? Framework.Message);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<MessageType>>(ref x);
        }
    }
    public static class OperatorEx2
    {
        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static MessageOperatorBox<MessageType> Operator<MessageType>(this IMessageReceiver receiver) where MessageType : ICallEventBase
        {
            var x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox)
                 .Value.GetOrAddOperator(receiver ?? Framework.Message);
            return UnsafeHandler.As<MessageOperatorBox<IMessage>, MessageOperatorBox<MessageType>>(ref x);
        }
    }
}
