using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class ResHandle<T> : PoolableObject<ResHandle<T>>
    {
        public override void OnAllocate()
        {
           
        }

        public override void OnRecycle()
        {
            
        }


        ~ResHandle() 
        { 
        
        }

        private ResHandle()
        {

        }
    }
}
