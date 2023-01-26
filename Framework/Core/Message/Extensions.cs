using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
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
        public static void Send<MessageType>(IMessageReceiver receiver,MessageType message) where MessageType : class, IMessage
        {
            Framework.Message.Send<MessageType>(receiver, message);
        }
    }
}
