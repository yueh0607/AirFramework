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
        /// 回复问题
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public static void Reply<MessageType>(this IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
        {
            Framework.Message.Reply<MessageType>(receiver, message);
        }
        /// <summary>
        /// 撤回回复
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public static void Recall<MessageType>(this IMessageReceiver receiver) where MessageType : class, IMessage
        {
            Framework.Message.Recall<MessageType>(receiver);
        }
        /// <summary>
        /// 撤回全部
        /// </summary>
        /// <param name="receiver"></param>
        public static void RecallAll(this IMessageReceiver receiver)
        {
            Framework.Message.RecallAll(receiver);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType>(this IMessageReceiver receiver) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType, RespondType>(receiver);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType, A>(this IMessageReceiver receiver, A a) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType,RespondType,A>(receiver, a);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType, A, B>(this IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType,RespondType,A,B>(receiver, a, b);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType, A, B, C>(this IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType,RespondType
                ,A,B,C>(receiver, a, b, c);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="A"></typeparam>
        /// <typeparam name="B"></typeparam>
        /// <typeparam name="C"></typeparam>
        /// <typeparam name="D"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="c"></param>
        /// <param name="d"></param>
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType, A, B, C, D>(this IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType,RespondType,A,B,C,D>(receiver, a, b, c, d);
        }
        /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
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
        /// <returns></returns>
        public static RespondType Ask<MessageType, RespondType, A, B, C, D, E>(this IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType, RespondType, A, B, C, D,E>(receiver, a, b, c, d,e);
        }

    }
}
