//using OfficeOpenXml.FormulaParsing.Excel.Functions.RefAndLookup;
//using System;
//using System.Net;
//using System.Net.Sockets;
//using System.Threading;
//using UnityEditor.Experimental.GraphView;

//namespace AirFramework
//{
//    public class SocketServer
//    {

//        Thread holdThread;

//        /// <summary>
//        /// 服务器持有的Socket对象
//        /// </summary>
//        public Socket ServerSocket { get; private set; } = null;

//        /// <summary>
//        /// IP地址
//        /// </summary>
//        public IPAddress IP { get; private set; } = null;

//        /// <summary>
//        /// 端口
//        /// </summary>
//        public int Port { get; private set; } = 0;
//        /// <summary>
//        /// 连接排队最大数量
//        /// </summary>
//        public int Backlog { get; private set; } = 10;

//        /// <summary>
//        /// 是否正在运行
//        /// </summary>
//        public bool Running { get; private set; } = false;
//        /// <summary>
//        /// 是否完成初始化
//        /// </summary>
//        public bool Initialized { get; private set; } = false;


//        public int FaildCount { get; private set; } = 3;

//        /// <summary>
//        /// 启动服务器
//        /// </summary>
//        /// <exception cref="InvalidOperationException"></exception>
//        public void RunServer()
//        {
//            if (!Initialized) throw new InvalidOperationException("The server must be initialized and not running to start");
//            //建立连接并监听
//            ServerSocket = new Socket(SocketType.Raw, ProtocolType.Raw);
//            IPEndPoint endPoint = new IPEndPoint(IP, Port);
//            ServerSocket.Bind(endPoint);
//            ServerSocket.Listen(Backlog);

//            //开始接纳客户端连接a
//            holdThread = new Thread(AcceptLoop)
//            {
//                IsBackground = true
//            };
//            Running = true;
//            holdThread.Start(ServerSocket);
//        }

//        /// <summary>
//        /// 关闭服务器
//        /// </summary>
//        /// <exception cref="InvalidOperationException"></exception>
//        public void CloseServer()
//        {
//            if (Initialized&&Running) throw new InvalidOperationException("The server must be running and initialized to close");
//            Running = false;
//        }

//        /// <summary>
//        /// 进行初始化
//        /// </summary>
//        /// <param name="address"></param>
//        /// <param name="port"></param>
//        /// <param name="backlog"></param>
//        public void ReInitialize(IPAddress address, ushort port, int backlog=10)
//        {
//            //指定必要通信属性
//            Backlog = backlog;
//            IP = address;
//            Port = port;
//            Initialized = true;
//        }
//        /// <summary>
//        /// 重置服务器，需要重新进行初始化
//        /// </summary>
//        public void ResetServer()
//        {
//            //指定必要通信属性
//            Backlog = 10;
//            IP =null;
//            Port = 0;
//            Initialized = false;
//        }

//        //连接等待
//        private void AcceptLoop(object socket)
//        {
//            Socket serverSocket = socket as Socket;
            
//            while (Running)
//            {
//                Socket connection = serverSocket.Accept();
//                var sc =new SocketAsyncEventArgs();
//                serverSocket.AcceptAsync(sc);
//                serverSocket.BeginAccept((x) => { },null);
                  
//            }
//        }

//        private void ReceiverLoop(object socket)
//        {

//        }

//        private async AirTask ReceiveLoop()
//        {

//        } 

//        public SocketServer(IPAddress address, ushort port, int backlog = 10)
//        {
//            ReInitialize(address, port, backlog);
//        }

//        public SocketServer(string address, ushort port, int backlog = 10)
//        {
//            ReInitialize(IPAddress.Parse(address), port, backlog);
//        }
//        public SocketServer() { }
//    }
//}
