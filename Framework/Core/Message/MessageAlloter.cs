using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor.VersionControl;

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
        private Dictionary<IMessage, DelegateChain> pool = new();

        public void Register(IMessage messageType,Delegate message)
        {
            if(pool.ContainsKey(messageType))
            {
                pool[messageType].Add(message);
            }
            pool.Add(messageType,new DelegateChain(message));
        }
        public void Remove(IMessage messageType,Delegate message)
        {
            if (pool.ContainsKey(messageType))
            {
                pool[messageType].Remove(message);
            }
            if (pool[messageType].Count==0) pool.Remove(messageType);
        }
        public void Remove(IMessage messageType)
        {
            if (pool.ContainsKey(messageType))
            {
                pool.Remove(messageType);
            }
        }

        public void Register(IMessage messageType,Action message)
        {
            Register(messageType, message);
        }
     
    }
}
