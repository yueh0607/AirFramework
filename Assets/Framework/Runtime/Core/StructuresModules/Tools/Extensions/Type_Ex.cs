using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static class Type_Ex
    {

        /// <summary>
        /// 抽象则抛异常
        /// </summary>
        /// <param name="type"></param>
        /// <exception cref="ArgumentException"></exception>
        [DebuggerHidden]
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void CheckAbstract(this Type type)
        {
            if (type.IsAbstract) throw new ArgumentException("cannot be abstract type");
        }
    }
}
