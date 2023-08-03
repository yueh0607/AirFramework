public class IntSyntaxAnalyser : ISyntaxAnalyser
{
    public Type TrueType => typeof(int);
    public object StringToValue(string str)
    {
        return System.Convert.ToInt32(StringToValue(str));
    }
}
