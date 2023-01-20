using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class Dispatcher
    {
        private Dictionary<IMessageHandler,IMessage> messagePool = new Dictionary<IMessageHandler, IMessage>();
        public void Register<Handler,Message>() where Handler :class, IMessageHandler where Message :class, IMessage
        {

        }

        public void RegisterReceiver()
        {

        }
    }
}
