using System;

namespace AirFramework
{
    /// <summary>
    /// 引入此类防止用户直接操作Dispatcher，并分离泛型逻辑和根本逻辑
    /// </summary>
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
