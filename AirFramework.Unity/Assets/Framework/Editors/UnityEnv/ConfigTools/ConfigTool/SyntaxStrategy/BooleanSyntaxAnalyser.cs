using OfficeOpenXml.FormulaParsing.Excel.Functions.RefAndLookup;
using System;
using System.Text;

namespace AirEditor.Config
{
    [ExcelTypeSyntax("bool", typeof(BooleanSyntaxAnalyser))]
    public class BooleanSyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Boolean";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            if (str == "1") return "true";
            if (str == "0") return "false";
            throw new InvalidCastException($"\"{str}\"[key= {key} ] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
        }
    }

    [ExcelTypeSyntax("bool[]", typeof(BooleanArraySyntaxAnalyser))]
    public class BooleanArraySyntaxAnalyser : ISyntaxAnalyser
    {
        public string TrueType => "System.Single[]";
        public object StringToValue(string str, string type, int row, int column, string key)
        {
            string[] parts = str.Split(',');
            StringBuilder builder = new StringBuilder();
            foreach (var part in parts)
            {
                if (str == "1") builder.Append("true,");
                if (str == "0") builder.Append("false,");
                throw new InvalidCastException($"\"{str}\"[key= {key} ] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
            }

            return $"new System.Boolean[{parts.Length}]{{{builder.ToString().TrimEnd(',')}}}";
        }
    }
}