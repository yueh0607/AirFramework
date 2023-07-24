using AirFramework.Utility;

namespace AirFramework
{
    public class DoubleSteper : TweenSteper<double>
    {
        //public override float GetDistance()
        //{
        //    return (float)(ValueEnd - Current.Value);
        //}

        public override void MoveNext(float step)
        {
            Current.Value = LerpHelper.Lerp(ValueStart, ValueEnd, step);
        }



    }
}
