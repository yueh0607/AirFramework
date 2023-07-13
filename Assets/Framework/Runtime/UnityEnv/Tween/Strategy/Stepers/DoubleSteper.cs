namespace AirFramework
{
    public class DoubleSteper : TweenSteper<double>
    {
        //public override float GetDistance()
        //{
        //    return (float)(End - Current.Value);
        //}

        public override void MoveNext(float step)
        {
            Current.Value = Lerper.Lerp(Start, End, step);
        }



    }
}
