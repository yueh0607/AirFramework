using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class GenericPoolObject :Unit, IPoolable
    {
        public abstract void OnAllocate();
        public abstract void OnRecycle();
    }
}
