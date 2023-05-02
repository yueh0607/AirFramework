using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class Tween_ToEx
    {
        public static Tween To<T>(this BindableBase<T> target,T end) where T:IEquatable<T>
        {
            var tween = Tween.Initialize(target.Value, end, target);
            return tween;
        }

        
    }
}
