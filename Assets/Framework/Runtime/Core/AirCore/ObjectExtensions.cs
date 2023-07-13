using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public static partial class ObjectExtensions
    {
        /// <summary>
        /// 进入释放队列：请先解除对象的所有引用
        /// </summary>
        /// <param name="garbage"></param>

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void EnReleaseQueue(this object garbage)
        {
            AirCore.EnReleaseQueue(garbage);
        }
    }
}
