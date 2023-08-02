using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class TypeExtensions
    {
        /// <summary>
        /// 抽象则抛异常
        /// </summary>
        /// <param name="type"></param>
        /// <exception cref="ArgumentException"></exception>
        [DebuggerHidden]
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void IfNullThrowException(this object obj)
        {
            if (obj == null) throw new ArgumentException("Empty references are not allowed to be used here");
        }



    }
}
