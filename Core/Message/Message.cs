using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class Message : Unit
    {
        public MessageUrgency urgency = MessageUrgency.Common;
        public int priority = 0;
        public MessageState state = MessageState.Rset;


        protected override void OnDispose()
        {
            throw new NotImplementedException();
        }
    }
}
