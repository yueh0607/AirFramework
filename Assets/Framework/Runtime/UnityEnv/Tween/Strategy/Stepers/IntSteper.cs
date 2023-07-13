namespace AirFramework
{
    public class IntSteper : TweenSteper<int>
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
