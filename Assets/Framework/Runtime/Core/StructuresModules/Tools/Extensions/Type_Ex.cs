using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public static class Type_Ex
    {

        /// <summary>
        /// ≥ÈœÛ‘Ú≈◊“Ï≥£
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
