using AirFramework.Utility;
using UnityEngine;

namespace AirFramework
{
    public class Vector3Steper : TweenSteper<Vector3>
    {
        //public override float GetDistance()
        //{
        //    return (ValueEnd - Current.Value).sqrMagnitude;
        //}

        public override void MoveNext(float step)
        {
            Current.Value = UnityLerpHelper.Lerp(ValueStart, ValueEnd, step);
        }

    }
}
