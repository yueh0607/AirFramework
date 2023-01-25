using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Framework
    {
        public static IUnitPoolManager UnitPool { get; } = new UnitPoolManager();
        public static IGenericPoolManager GenericPool { get; } = new GenericPoolManager();  

        

    }
}
