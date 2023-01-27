using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 注册
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public static void Register<MessageType>( this IMessageReceiver receiver, Delegate message) where MessageType : IMessage
        {
          Framework.Message.Register<MessageType>(receiver, message);
        }
        /// <summary>
        /// 移除
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public static  void Remove<MessageType>(  this IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
        {
           Framework.Message.Remove<MessageType>(receiver, message);
        }
        /// <summary>
        /// 移除该对象的该类型事件
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public static void Remove<MessageType>(this IMessageReceiver receiver) where MessageType : class, IMessage
        {
          Framework.Message.Remove<MessageType>(receiver);
        }
        /// <summary>
        /// 移除对象全部事件
        /// </summary>
        /// <param name="receiver"></param>
        public static void RemoveAll(this IMessageReceiver receiver)
        {
          Framework.Message.RemoveAll(receiver);
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public static void Send<MessageType>(this IMessageReceiver receiver) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType>(receiver);
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        public static void Send<MessageType, A>(this IMessageReceiver receiver, A a) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType,A>(receiver,a);
            
        }
        /// <summary>
        /// 发送消息
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        public static void Send<MessageType, A, B>(this IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType,A, B>(receiver,a,b);
        }
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
        public static void Send<MessageType, A, B, C>(this IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType,A,B,C>(receiver,a,b,c);
        }
        /// <summary>
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
        public static void Send<MessageType, A, B, C, D>(this IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType,A,B,C,D>(receiver,a,b,c,d);
        }
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
        public static void Send<MessageType, A, B, C, D, E>(this IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType, A, B, C, D, E>(receiver, a, b, c, d, e);
        }


    }
}
