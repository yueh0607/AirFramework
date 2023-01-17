
using System;


namespace AirFramework
{
    public class MessageManager : Unit
    {

        // 消息内容  发送者 + 接收者 + 参数+ 消息标识
        //存储内容  
        public class AA:IMessageReceiver
        {

        }


        public void SendMessage(IMessageReceiver receiver,long code,ValueTuple tuple)
        {
            
            
        }
        
        protected override void OnDispose()
        {
            
        }
    }
}
