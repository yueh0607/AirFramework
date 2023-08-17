using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class ListExtensions
    {

        /// <summary>
        /// Dispose并清空
        /// </summary>
        /// <param name="list"></param>
        /// <exception cref="ArgumentException"></exception>
        [DebuggerHidden]
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void ClearAndDispose<T>(this IList<T> list) where T : IDisposable
        {
            foreach (var item in list)
            {
                item.Dispose();
            }
            list.Clear();
        }



    }
}
