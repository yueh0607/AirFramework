using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class Extensions
    {
        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T CheckRecycled<T>(this T poolObj) where T : IPoolable
        {
            return poolObj.IsRecycled? throw new InvalidOperationException("This Pool Object is invalid"):poolObj; 
        }

    }
}
