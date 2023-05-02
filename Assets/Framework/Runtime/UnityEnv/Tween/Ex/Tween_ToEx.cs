using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

namespace AirFramework
{
    public static class Tween_ToEx
    {
        public static Tween To<T>(this BindableBase<T> target,T end) where T:IEquatable<T>
        {
            var tween = Tween.Initialize(target.Value, end, target);
            return tween;
        }
        public static Tween FromTo<T>(this BindableBase<T> target,T start, T end) where T : IEquatable<T>
        {
            var tween = Tween.Initialize(start, end, target);
            return tween;
        }

        public static Tween To<T>(this T start,T end,BindableBase<T> output) where T : IEquatable<T>
        {
            var tween = Tween.Initialize(start, end,output);
            return tween;
        }
    }
}
