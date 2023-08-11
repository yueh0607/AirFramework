using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

namespace AirFramework
{
    public class UDPSender :Unit
    {

        private readonly Socket socket;
        private readonly IPEndPoint endPoint;

        public UDPSender(IPAddress address, ushort port)
        {
            socket = new Socket(address.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
            endPoint = new IPEndPoint(address, port);
        }
        public UDPSender(string addressStr, ushort port)
        {
            IPAddress address = IPAddress.Parse(addressStr);
            socket = new Socket(address.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
            endPoint = new IPEndPoint(address, port);
        }
        public UDPSender(ushort port)
        {
            IPAddress address = Dns.GetHostEntry(Dns.GetHostName()).AddressList[0];
            socket = new Socket(address.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
            endPoint = new IPEndPoint(address, port);
        }

        public async AirTask<int> SendAsync(byte[] bytes)
        {
            return await socket.SendToAsync(bytes, SocketFlags.None, endPoint).AsAirTask();
        }

       

        protected override void OnDispose()
        {
           socket.Dispose();
        }

       
    }
}
