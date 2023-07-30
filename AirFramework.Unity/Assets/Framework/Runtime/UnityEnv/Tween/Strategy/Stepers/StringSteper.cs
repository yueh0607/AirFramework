namespace AirFramework
{
    public class StringSteper : TweenSteper<string>
    {

        private string longString = null;
        private string shortString = null;
        public string LongString
        {
            get
            {
                longString ??= ValueStart.Length > ValueEnd.Length ? ValueStart : ValueEnd;
                return longString;
            }
        }
        public string ShortString
        {
            get
            {
               shortString ??= ValueStart.Length <=ValueEnd.Length ? ValueStart : ValueEnd;
                return shortString;
            }
        }


        public override void MoveNext(float step)
        {
            if(!LongString.StartsWith(ValueStart)&&ShortString!=string.Empty)ValueStart = string.Empty;
            Current.Value = LongString.Substring(0,
                Utility.LerpHelper.Lerp(ValueStart.Length, ValueEnd.Length, step));
        }
    }
}