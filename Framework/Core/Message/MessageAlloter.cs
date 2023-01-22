using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class MyUnit : UnitPoolObject<MyUnit>
    {
        public override void OnAllocateItem()
        {
            throw new NotImplementedException();
        }

        public override void OnRecycleItem()
        {
            throw new NotImplementedException();
        }
    }
    public class MessageAlloter
    {
        private Dictionary<IMessage, Delegate> pool = new();

        public void Register(IMessage messageTypem,Delegate message)
        {
            //if (pool.ContainsKey(messageTypem)) 
            Framework.UnitPool.Allocate<MyUnit>();
        }

        public void Register(IMessage messageType,Action message)
        {
            Register(messageType, message);
        }


    }
}
