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

namespace MyNamespace
{
    public class Extensions_Dispatcher1
    {
        /// <summary>
        /// 消息派发器访问：获取指定类型的消息派发器，可进行全局行为
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public IDispatcherOut<MessageType> Dispatcher<MessageType>() where MessageType : ISendEventBase
        {
            var x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<MessageType>>(ref x);
        }
    }

    public class Extensions_Dispatcher2
    {
        /// <summary>
        /// 消息派发器访问：获取指定类型的消息派发器，可进行全局行为
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public IDispatcherOut<MessageType> Dispatcher<MessageType>() where MessageType : ICallEventBase
        {
            var x = Framework.Message.dispatchersContainer.GetValueOrAddDefault(typeof(MessageType), MessageManager.CreateDispatcherBox);
            return UnsafeHandler.As<MessageDispatcherBox<IMessage>, MessageDispatcherBox<MessageType>>(ref x);
        }
    }


  
}

