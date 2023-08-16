using System;

namespace AirEditor.Config
{
    [ExcelTypeSyntax("float", typeof(FloatSyntaxAnalyser))]
    public class FloatSyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Single";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            bool result = float.TryParse(str, out var value);
            if (!result)
            {
                throw new InvalidCastException($"\"{str}\"[key={key}] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
            }
            return str+"F";
        }
    }

    [ExcelTypeSyntax("float[]", typeof(FloatArraySyntaxAnalyser))]
    public class FloatArraySyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Single[]";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            string[] parts = str.Split(',');
            foreach (var part in parts)
            {
                bool result = float.TryParse(part, out var value);
                if (!result)
                {
                    throw new InvalidCastException($"\"{str}\"[key={key}] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
                }
            }

            return $"new System.Single[{parts.Length}]{{{str}}}";
        }
    }
}