using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
        #region 消息部分
        public static void Register<MessageType>(this IMessageReceiver receiver,Action<MessageType> message) where MessageType : class, IMessage
        {
            Framework.Message.Register<MessageType>(receiver, message);
        }
        public static void Remove<MessageType>(this IMessageReceiver receiver,Action<MessageType> message) where MessageType:class, IMessage
        {
            Framework.Message.Remove<MessageType>(receiver, message);
        }
        public static void Remove<MessageType>(this IMessageReceiver receiver) where MessageType : class, IMessage
        {
            Framework.Message.Remove<MessageType>(receiver);
        }

        public static void RemoveAll(this IMessageReceiver receiver)
        {
            Framework.Message.RemoveAll(receiver);
        }
        public static void Send<MessageType>(this IMessageReceiver receiver,MessageType message) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType>(receiver, message);
        }
        #endregion

        #region 问答部分

        public static void Reply<RespondType, MessageType>(IMessageReceiver receiver, Func<MessageType, RespondType> message) where MessageType : class, IMessage
        {
            Framework.Message.Reply(receiver, message);
        }
        public static void Recall<MessageType>( this IMessageReceiver receiver) where MessageType : class, IMessage
        {
            Framework.Message.Recall<MessageType>(receiver);
        }
        public static RespondType Ask<MessageType, RespondType>( this IMessageReceiver receiver, MessageType message) where MessageType : class, IMessage
        {
            return Framework.Message.Ask<MessageType,RespondType > (receiver, message);
        }

        public static void RecallAll(this IMessageReceiver receiver)
        {
            Framework.Message.RecallAll(receiver);
        }
        #endregion




    }
}
