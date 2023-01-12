using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitPool<T> : GenericPool<T> where T : Unit
    {


        public UnitPool() : base(() => { return Activator.CreateInstance<T>(); }, (T item) => { item.Dispose(); })
        {
            
        
        }
    }
}
