using AirFramework.Utility;

namespace AirFramework
{
    public class FloatSteper : TweenSteper<float>
    {
        //public override float GetDistance()
        //{
        //    return ValueEnd - Current.Value;
        //}

        public override void MoveNext(float step)
        {
            Current.Value = LerpHelper.Lerp(ValueStart, ValueEnd, step);
        }



    }
}
