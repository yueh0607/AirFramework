using UnityEngine;

namespace AirFramework
{
    public class ColorSteper : TweenSteper<Color>
    {
        //public override float GetDistance()
        //{
        //    var nC = (Current.Value - End);

        //    return (nC.r * nC.r + nC.g * nC.g + nC.b * nC.b + nC.a * nC.a);
        //}

        public override void MoveNext(float step)
        {
            Current.Value = Lerper.Lerp(Start, End, step);
        }

    }
}
