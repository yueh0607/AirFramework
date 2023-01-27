using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial interface IMessageManager
    {
        /// <summary>
        /// 注册事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Register<MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : IMessage
    ;   /// <summary>
        /// 移除指定事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Remove<MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
       ;
        /// <summary>
        /// 移除类型事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Remove<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
       ;/// <summary>
        /// 移除全部事件
        /// </summary>
        /// <param name="receiver"></param>
        public void RemoveAll(IMessageReceiver receiver)
        ;/// <summary>
         /// 发送消息
         /// </summary>
         /// <typeparam name="MessageType"></typeparam>
         /// <param name="receiver"></param>
        public void Send<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
        ;
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        public void Send<MessageType, A>(IMessageReceiver receiver, A a) where MessageType : class, IMessage
      ;/// <summary>
       /// 发送消息
       /// </summary>
       /// <typeparam name="MessageType"></typeparam>
       /// <typeparam name="A"></typeparam>
       /// <typeparam name="B"></typeparam>
       /// <param name="receiver"></param>
       /// <param name="a"></param>
       /// <param name="b"></param>
        public void Send<MessageType, A, B>(IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
;
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        public void Send<MessageType, A, B, C>(IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
;       /// <summary>
/// 发送消息
/// </summary>
/// <typeparam name="MessageType"></typeparam>
/// <typeparam name="A"></typeparam>
/// <typeparam name="B"></typeparam>
/// <typeparam name="C"></typeparam>
/// <typeparam name="D"></typeparam>
/// <param name="receiver"></param>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="c"></param>
/// <param name="d"></param>
        public void Send<MessageType, A, B, C, D>(IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
;
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <typeparam name="D"></typeparam>
        /// <typeparam name="E"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        /// <param name="d"></param>
        /// <param name="e"></param>
        public void Send<MessageType, A, B, C, D, E>(IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
;


    }
}
