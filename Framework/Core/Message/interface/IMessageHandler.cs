using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IMessageHandler
    {
        public void Handle(IMessage request);
    }
    public interface IRequestHandler<K>
    {
        public K Handle(IMessage<K> request);
    }
}
