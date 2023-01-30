using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static UnitMessageDispatcherContanier Operator<MessageType>(this IMessageReceiver receiver) where MessageType : IMessage
        {
            return Framework.Message.Operator<MessageType>(receiver);
        }


    }
}
