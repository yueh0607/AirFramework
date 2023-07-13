using UnityEngine;

namespace AirFramework
{
    public class Vector2Steper : TweenSteper<Vector2>
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
