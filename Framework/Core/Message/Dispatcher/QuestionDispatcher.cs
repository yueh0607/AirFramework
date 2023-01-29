using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageDispatcher :Unit
    {
        /// <summary>
        /// 存储Request
        /// </summary>
        private Dictionary<Type, Delegate> requests = new Dictionary<Type, Delegate>();
        /// <summary>
        /// 回复问题
        /// </summary>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void AddRequest(Type messageType,Delegate message)
        {
            lock (requests)
            {
                
                if (requests.ContainsKey(messageType))
                {
                    requests[messageType] = message;
                }
                else
                {
                    requests.Add(messageType, message);
                }
            }
        }
        /// <summary>
        /// 取消回复
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        public void RemoveRequest(Type messageType) 
        {
            lock (requests)
            {
                if (requests.ContainsKey(messageType))
                {
                    requests.Remove(messageType);
                }
            }
        }
        /// <summary>
        /// 获取问答委托
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public Delegate GetRequest(Type messageType) 
        {
            
            if (requests.ContainsKey(messageType))
            {
                return requests[messageType];
            }
            return null;
        }
        /// <summary>
        /// 取消全部问答
        /// </summary>
        public void RecallAllRequests()
        {
            lock (requests)
            {
                foreach (var messageType in events)
                {
                    messageType.Value.Dispose();
                }
                requests.Clear();
            }
        }


    }
}
