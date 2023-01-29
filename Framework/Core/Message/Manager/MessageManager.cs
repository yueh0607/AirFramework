using System;
using System.Collections.Generic;

namespace AirFramework
{
    public partial class MessageManager : Unit//,IMessageManager
    {
        // MessageDispatcher dispatcher = new();
        /// <summary>
        /// 存储消息
        /// </summary>
        private Dictionary<IMessageReceiver, UnitMessageDispatcher> dispatchers = new();
        /// <summary>
        /// 自旋锁
        /// </summary>
        private readonly object _locker = new ();
        /// <summary>
        /// 判空移除
        /// </summary>
        /// <param name="receiver"></param>
        private void CheckEmpty(IMessageReceiver receiver)
        {
            if (dispatchers.ContainsKey(receiver))
            {
                if (dispatchers[receiver].Value.CountAll == 0)
                {
                    dispatchers[receiver].Dispose();
                    dispatchers.Remove(receiver);
                }

            }
        }

        protected override void OnDispose()
        {
            lock(_locker)
            {
                foreach(var x in dispatchers) x.Value.Dispose();
                dispatchers.Clear();
            }
        }
    }
}
