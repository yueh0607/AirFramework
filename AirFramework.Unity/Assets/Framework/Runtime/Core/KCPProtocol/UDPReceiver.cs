using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

namespace AirFramework
{
    public class UDPReceiver : Unit
    {
        private Socket socket;
        private IPEndPoint endPoint;

        /// <summary>
        /// 缓冲区大小，修改后直到下一次接收才生效(不包括本次正在等待的接收)
        /// </summary>
        public int BufferSize { get; set; } = 1024;


        public UDPReceiver(IPAddress address, ushort port)
        {
            Initialize(address, port);
        }
        public UDPReceiver(string addressStr, ushort port)
        {
            Initialize(IPAddress.Parse(addressStr), port);
        }

        private void Initialize(IPAddress address, ushort port)
        {
            socket = new Socket(address.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
            endPoint = new IPEndPoint(address, port);
            socket.Bind(endPoint);
        }


        /// <summary>
        /// 在出现错误时被调用(仅接收过程中，不包含初始化和转换，参数格式)
        /// </summary>
        public event Action<Exception> OnError = null;


        /// <summary>
        /// 在收到数据时被调用，但是请注意要显式释放数组持有者，否则会大量产生数组产生不必要消耗
        /// </summary>
        public event Action<ArrayHolder<byte>> OnReceive = null;

        public async AirTask ReceiveMessages()
        {
            try
            {
                while (true)
                {
                    ArrayHolder<byte> arrayHolder = Framework.Pool.Allocate<ArrayHolder<byte>>();
                    arrayHolder.SetSize(BufferSize);
                    SocketReceiveFromResult result = await socket.ReceiveFromAsync(arrayHolder.Value, SocketFlags.None, endPoint);
                    if (OnReceive == null) arrayHolder.Dispose();
                    else OnReceive(arrayHolder);
                }

            }
            catch (Exception ex)
            {
                OnError?.Invoke(ex);
            }
        }

        protected override void OnDispose()
        {
            socket.Dispose();
        }



    }
}
