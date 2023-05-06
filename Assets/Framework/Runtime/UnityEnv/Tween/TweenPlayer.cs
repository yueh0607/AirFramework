using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class TweenPlayer : MonoBehaviour
    {
        public AnimCurve curve;

        public float duration = 1;
        public PlayDirection direction = PlayDirection.Forward;
        public LoopType Loop = LoopType.None;

        public Tween GetTween<T>(BindableBase<T> port,T start,T end) where T:IEquatable<T>
        { 
            return Tween.CreateFromPool(start, end, port).SetCurve(curve).SetDirection(direction).SetLoop(Loop)
                .SetDuration(duration);
        }
            
        
    }
}
