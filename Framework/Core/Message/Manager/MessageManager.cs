using System;
using System.Collections.Generic;

namespace AirFramework
{
    public partial class MessageManager : Unit,IMessageReceiver
    {
        // MessageDispatcher dispatcher = new();
        /// <summary>
        /// 存储消息
        /// </summary>
        private Dictionary<Type, UnitMessageDispatcher> dispatchers = new();
        /// <summary>
        /// 自旋锁
        /// </summary>
        //private readonly object _locker = new ();

        protected override void OnDispose()
        {
            
        }
    }
}
