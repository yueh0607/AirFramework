
using System;


namespace AirFramework
{
    public class MessageManager : Unit
    {
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
