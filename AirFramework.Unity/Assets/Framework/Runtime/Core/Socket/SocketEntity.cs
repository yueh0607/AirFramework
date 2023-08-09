using System.Net;
using System.Net.Sockets;

namespace AirFramework
{
    public class SocketConnection
    {
        Socket socket;

        private void Initialize(IPAddress address, ushort port)
        {
            socket = new Socket(SocketType.Raw, ProtocolType.Raw);
        }

        public SocketConnection(IPAddress address, ushort port)
        {

        }

        public SocketConnection(string address, ushort port)
        {
            Initialize(IPAddress.Parse(address), port);
        }
    }
}
