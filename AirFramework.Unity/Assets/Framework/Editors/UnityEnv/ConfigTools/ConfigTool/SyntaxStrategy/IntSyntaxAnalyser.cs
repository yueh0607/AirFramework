using System;

namespace AirEditor.Config
{
    [ExcelTypeSyntax("int", typeof(IntSyntaxAnalyser))]
    public class IntSyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Int32";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            bool result = int.TryParse(str, out var value);
            if (!result)
            {
                throw new InvalidCastException($"\"{str}\"[key={key}] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
            }
            return value;
        }
    }

    [ExcelTypeSyntax("int[]", typeof(IntArraySyntaxAnalyser))]
    public class IntArraySyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Int32[]";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            string[] parts = str.Split(',');
            foreach(var part in parts)
            {
                bool result = int.TryParse(part, out var value);
                if (!result)
                {
                    throw new InvalidCastException($"\"{str}\"[key= {key} ] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
                }
            }
            
            return $"new System.Int32[{parts.Length}]{{{str}}}";
        }
    }
}