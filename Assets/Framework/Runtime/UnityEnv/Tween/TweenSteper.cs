using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public interface ISteper
    {

        public void MoveNext(float step);

    }

    public abstract class TweenSteper<T> :PoolableObject,ISteper where T : IEquatable<T>
    {
        public T Start { get; set; }

        public T End { get; set; }

        public BindableBase<T> Current { get; set; } = null;
   
        public abstract void MoveNext(float step);
        //public abstract float GetDistance();

        public override void OnRecycle()
        {
            Start = default;
            End = default;
            Current = null;
        }

        public override void OnAllocate()
        {
            
        }
        

    }
}
