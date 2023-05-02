using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class Vector3Steper : TweenSteper<Vector3>
    {
        //public override float GetDistance()
        //{
        //    return (End - Current.Value).sqrMagnitude;
        //}

        public override void MoveNext(float step)
        {
            Current.Value = Lerper.Lerp(Start, End, step);
        }

    }
}
