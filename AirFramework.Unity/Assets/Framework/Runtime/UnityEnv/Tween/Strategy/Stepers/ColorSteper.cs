using AirFramework.Utility;
using UnityEngine;

namespace AirFramework
{
    public class ColorSteper : TweenSteper<Color>
    {

        public override void MoveNext(float step)
        {
            Current.Value = UnityLerpHelper.Lerp(ValueStart, ValueEnd, step);
        }

    }
}
