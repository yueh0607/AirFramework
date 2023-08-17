using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class DefaultValue<T>
    {
        public static readonly T Value = default;
        
    }

    public static class TypeValue<T>
    {
        public static readonly Type Value = typeof(T);
    }
}
