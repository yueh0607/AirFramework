using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class MessageDispatcherContanier: Unit
    {
       /// <summary>
       /// 对应的接收者对象
       /// </summary>
        public IMessageReceiver Receiver { get; set; }
    
        /// <summary>
        /// 消息类型
        /// </summary>
        public Type TypeValue { get; set; }


        public MessageDispatcherContanier() { }

        protected override void OnDispose()
        {
            this.TypeValue = null;
            this.Receiver = null;
        }
    }
}
