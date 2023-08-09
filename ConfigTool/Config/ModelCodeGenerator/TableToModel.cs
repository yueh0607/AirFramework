
using AirFramework;
using System.Text;


public static class TableToModel
{
    public static string interfaceText = $"AirFramework.IModel";
    public const string space = "        ";


    //Marks : ITEMNAME,CODE,PRIMARYKEYNAME,PRIMARYKEYTYPE,MODELNAME,GENERATEDATA
    public static string model =
$@"using System;
using System.Collections;
using System.Collections.Generic;
  
namespace AirFramework.ConstModel
{{

    public class #ITEMNAME#
    {{
#CODE#
    }}

    public class #MODELNAME#Model : {interfaceText}
    {{
        public System.Collections.Generic.List<#ITEMNAME#> Data = new System.Collections.Generic.List<#ITEMNAME>()
        {{
#GENERATEDATA#
        }}

        public System.Collections.Generic.Dictionary<#PRIMARYKEYTYPE#,#ITEMNAME#> DataMap = new System.Collections.Generic.Dictionary<#PRIMARYKEYTYPE#,#ITEMNAME#>();

        public #MODELNAME#()
        {{
            foreach(var item in Data)
            {{
                DataMap.Add(item.#PRIMARYKEYNAME#,item);
            }}
        }}
    }}
}}


";


    public static string GetCode(ITable<string> table, string modelName, string itemName)
    {
        string code = model;
        code = code.Replace("#MODELNAME#", modelName);
        code = code.Replace("#ITEMNAME#", itemName);
        code = code.Replace("#CODE#", GenerateCode(table));
        code = code.Replace("#PRIMARYKEYTYPE#", SyntaxStrategy.GetTrueType(table[0, 0]).FullName);
        code = code.Replace("#PRIMARYKEYNAME#", table[1, 0]);
        code = code.Replace("GENERATEDATA", GenerateData(table, itemName));
        return code;
    }

    private static string GenerateCode(ITable<string> table)
    {
        StringBuilder builder = new StringBuilder();
        StringBuilder temp = new StringBuilder();

        builder.AppendLine($"{space}[{"AirFramework.PrimaryKeyAttribute".Replace("Attribute", string.Empty)}]");
        for (int i = 0; i < table.ColumnCount; i++)
        {
            Type trueType = SyntaxStrategy.GetTrueType(table[0, i]);
            temp.Append(space);
            temp.Append("public ");
            temp.Append(trueType.FullName);
            temp.Append(" ");
            temp.Append(table[1, i]);
            temp.Append(" = default;");
            builder.AppendLine(temp.ToString());
            temp.Clear();
        }

        //List<Testitem> items = new List<Testitem>()
        //{
        //    new Testitem{name="",description="",id=0},

        //};

        return builder.ToString();
    }

    private static string GenerateData(ITable<string> table, string itemName)
    {
        StringBuilder builder = new StringBuilder();
        List<string> items = new List<string>();
        for (int i = 0; i < table.RowCount - FilterStrategy.IgnoreDataRowCount; ++i)
        {
            builder.Append($"new {itemName}()");
            builder.Append("{");
            for (int j = 0; j < table.ColumnCount; ++j)
            {

                builder.Append($"{(i == 0 ? "" : ',')}{table[1, j]} = {SyntaxStrategy.GetValue(table[i, j], table[0, j])}");
            }

            builder.Append("}");
            items.Add(builder.ToString());
            builder.Clear();
        }
        foreach (var item in items)
        {
            builder.Append(item);
            builder.Append(',');

        }
        string result = builder.ToString().TrimEnd(',');
        return result;
    }
}
