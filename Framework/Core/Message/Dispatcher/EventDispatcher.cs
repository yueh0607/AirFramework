
using System;
using System.Collections.Generic;

namespace AirFramework
{
    public partial class MessageDispatcher :Unit//, IMessageDispatcher
    {

        

        #region EventPart
        /// <summary>
        /// 用于存储Event
        /// </summary>
        private Dictionary<Type,UnitDelegateChain> events= new();
                                                                                                  
        /// <summary>
        /// 以MessageType注册message
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void RegisterEvent(Type messageType,Delegate message)
        {
            lock (events)
            {
                if (events.ContainsKey(messageType))
                {
                    events[messageType].Value.Add(message);
                }
                else
                {
                    UnitDelegateChain udc = Framework.Pool.Allocate<UnitDelegateChain>();
                    udc.Value.AddAndSetType(message);
                    events.Add(messageType, udc); 
                }
            }
        }
        /// <summary>
        /// 移除具体Message监听
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void RemoveEvent(Type messageType,Delegate message) 
        {
            lock (events)
            {
                
                if (events.ContainsKey(messageType))
                {
                    events[messageType].Value.Remove(message);
                    if (events[messageType].Value.Count == 0)
                    {
                        RemoveEvent(messageType);
                    }
                }
            }
        }
        /// <summary>
        /// 移除某类Message监听
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        public void RemoveEvent(Type messageType) 
        {
            lock (events)
            {
            
                if (events.ContainsKey(messageType))
                {
                    events[messageType].Dispose();
                    events.Remove(messageType);
                    //dc.Dispose();
                }
            }
        }
        /// <summary>
        /// 移除全部监听
        /// </summary>
        public void RemoveAllEvents()
        {
            lock (events)
            {
                foreach (var tp in events)
                {
                    tp.Value.Dispose();
                }
                events.Clear();
            }
        }
        /// <summary>
        /// 获取此类消息的委托链
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public DelegateChain GetEvents(Type messageType)
        {
            if(events.ContainsKey(messageType))
            {
                return events[messageType].Value;
            }
            return null;
        }
        #endregion
        
        
    }
}
