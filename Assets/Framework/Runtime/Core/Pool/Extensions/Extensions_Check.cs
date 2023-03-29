using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class Pool
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T CheckRecycled<T>(this T poolObj) where T : IPoolable
        {
            return poolObj.IsRecycled ? throw new InvalidOperationException("This Pool Object is invalid") : poolObj;
        }



    }
}
