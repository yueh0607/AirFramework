namespace AirFramework
{
    public class FloatSteper : TweenSteper<float>
    {
        //public override float GetDistance()
        //{
        //    return End - Current.Value;
        //}

        public override void MoveNext(float step)
        {
            Current.Value = Lerper.Lerp(Start, End, step);
        }



    }
}
