using System.Linq;
using System.Text.RegularExpressions;

namespace AirEditor.Config
{
    [ExcelFilter(typeof(FormatFilter),1)]
    public class FormatFilter : SyntaxFilter<string>
    {


        public override ConfigTable<string> GetNextTable(ConfigTable<string> table)
        {
            if (table.ColumnCount == 0 || table.RowCount < FilterStrategy.IgnoreDataRowCount) throw new System.FormatException("Please define  at least the header row");
            for (int i = 0; i < table.ColumnCount; i++)
            {
                
                if (!SyntaxStrategy.HasConverter(table[0, i])) throw new System.FormatException($"invalid type :{table[0, i]}");
                if (!IsValidVariableName(table[1, i]))
                    throw new System.FormatException($"Illegal variable name:{table[1, i]}," +
                        $"Variable names can only start with a letter or underscore and are not allowed to duplicate predefined keywords, " +
                        $"which include: https://learn.microsoft.com/zh-cn/dotnet/csharp/language-reference/keywords/");
                //if (!CorrectPlatform(table[2, i])) throw new System.FormatException($"invalid target platform :{table[2, i]}");
            }

            return table;
        }


        //static string[] targetPlatform =
        //{
        //"C","S"
        //    };
        //public static bool CorrectPlatform(string input)
        //{
        //    foreach (char c in input)
        //    {
        //        if (!targetPlatform.Contains(c.ToString()))
        //        {
        //            return false;
        //        }
        //    }
        //    return true;
        //}


        // 检查是否是C#关键字
        static string[] keywords = { "abstract", "as", "base", "bool", "break", "byte", "case", "catch", "char",
                             "checked", "class", "const", "continue", "decimal", "default", "delegate",
                             "do", "double", "else", "enum", "event", "explicit", "extern", "false",
                             "finally", "fixed", "float", "for", "foreach", "goto", "if", "implicit",
                             "in", "int", "interface", "internal", "is", "lock", "long", "namespace",
                             "new", "null", "object", "operator", "out", "override", "params", "private",
                             "protected", "public", "readonly", "ref", "return", "sbyte", "sealed", "short",
                             "sizeof", "stackalloc", "static", "string", "struct", "switch", "this", "throw",
                             "true", "try", "typeof", "uint", "ulong", "unchecked", "unsafe", "ushort", "using",
                             "virtual", "void", "volatile", "while" };
        public static bool IsValidVariableName(string input)
        {
            // 判断是否为空或null
            if (string.IsNullOrEmpty(input))
            {
                return false;
            }

            // 检查是否以字母或下划线开头
            if (!char.IsLetter(input[0]) && input[0] != '_')
            {
                return false;
            }

            // 使用正则表达式检查是否只包含字母、数字和下划线
            if (!Regex.IsMatch(input, @"^[a-zA-Z0-9_]+$"))
            {
                return false;
            }


            if (keywords.Contains(input))
            {
                return false;
            }

            // 字符串满足所有条件，是一个合法的变量名
            return true;
        }


    }
}