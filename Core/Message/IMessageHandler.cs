using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IMessageSender{ }

    public interface IMessageReceiver{ }

    public static class MessageHandler
    {
        public static void Send(this IMessageSender sender,Enum messageName,params object[] paramList)
        {

        }
        public static void Register(this IMessageReceiver receiver,string masName)
        {

        }
    }
}
