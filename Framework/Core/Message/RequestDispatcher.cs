using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{

    public partial class RequestDispatcher
    {

        private Dictionary<Type, IRequestReceiver> requestPool = new();
        private readonly object _lock = new();

        public void Listen<RequestType>(IRequestReceiver receiver) where RequestType : class, IRequest
        {
            lock (_lock)
            {
                if (requestPool.ContainsKey(typeof(RequestType)))
                {
                    requestPool[typeof(RequestType)] = receiver;
                }
                else requestPool.Add(typeof(RequestType), receiver);
            }
        }
        public void EndListen<RequestType>(IRequestReceiver receiver) where RequestType : class, IRequest
        {
            lock (_lock)
            {
                if (requestPool.ContainsKey(typeof(RequestType)))
                {
                    requestPool.Remove(typeof(RequestType));
                }
            }
        }
        public void Send<RequestType>(RequestType request, IRequestSender sender) where RequestType : class, IRequest
        {
            if (requestPool.ContainsKey(typeof(RequestType)))
            {
                requestPool[typeof(RequestType)]?.OnReceiveMessage(request, sender);
            }
        }
    }
}
