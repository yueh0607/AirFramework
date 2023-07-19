/***********************************************************************************
 * Author      : #unknown#
 * Version     : 2021.3.24f1c1
 * Date        : 2023/7/15 10:50:46
 * Description : Describe the function here.
************************************************************************************/


using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using AirFramework.Internal;

namespace AirFramework
{
    public static class Extensions_Dispatcher1
    {
        /// <summary>
        /// 针对ISendEvent的派发器访问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public static IDispatcherOut<MessageType> Dispatcher<MessageType>(this MessageManager message, bool autoCreate = true) where MessageType : ISendEventBase
        {
            MessageDispatcherBox<IMessage> x = null;
            if (autoCreate)
            {
                x = message.dispatchersContainer.
                GetValueOrAddDefault(typeof(MessageType),
                MessageManager.CreateDispatcherBox);
            }
            else
            {
                x = message.dispatchersContainer.GetValueOrDefault(typeof(MessageType));
            }
            if (x == null) return null;
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<MessageType>>(ref x);
        }
    }

    public static class Extensions_Dispatcher2
    {
        /// <summary>
        /// 针对ICallEvent的派发器访问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public static IDispatcherOut<MessageType> Dispatcher<MessageType>(this MessageManager message, bool autoCreate = true) where MessageType : ICallEventBase
        {
            MessageDispatcherBox<IMessage> x = null;
            if (autoCreate)
            {
                x = message.dispatchersContainer.
                GetValueOrAddDefault(typeof(MessageType),
                MessageManager.CreateDispatcherBox);
            }
            else
            {
                x = message.dispatchersContainer.GetValueOrDefault(typeof(MessageType));
            }

            if (x == null) return null;
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<MessageType>>(ref x);
        }
    }



}

