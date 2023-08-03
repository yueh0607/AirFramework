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
        public static void IfAbstractThrowException(this Type type)
        {
            if (type.IsAbstract) throw new ArgumentException("Type parameters are not allowed to be abstract");
        }



    }
}
