using AirEditor.Config;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Windows;


public class ExcelReflectionAttribute : Attribute
{

}

[ExcelTypeSyntax("Type", typeof(TypeSyntaxAnalyser))]
public class TypeSyntaxAnalyser : ISyntaxAnalyser
{
    public string TrueType => "System.Type";

    object ISyntaxAnalyser.StringToValue(string str, string type, int row, int column, string key)
    {
        string description = "/*If the target type cannot be found, it may be due to the current class generated not being able to access the specified type*/";
        List<Type> selected = new List<Type>();
        var assemblies = AppDomain.CurrentDomain.GetAssemblies();
        foreach (var assembly in assemblies)
        {
            var types = assembly.GetTypes();
            foreach (var tp in types)
            {
                if (tp.Name == str) selected.Add(tp);
            }
        }
        if (selected.Count == 1) return $"typeof({selected[0].FullName})"+description;
        if (selected.Count == 0) throw new InvalidDataException($"\"[key={{key}}，row={{row}},column={{column}}] no such type in any assembly:{str}");
        List<Type> deep = new List<Type>();
        foreach (var tp in selected)
        {
            if (tp.GetCustomAttribute<ExcelReflectionAttribute>() != null)deep.Add(tp);
        }
        if (deep.Count == 1) return $"typeof({deep[0].FullName})"+description;
        else
        {
            StringBuilder builder = new StringBuilder();
            foreach (var tp in deep)builder.Append(tp.Assembly+"  "+tp.FullName+",");
            string error = builder.ToString().TrimEnd(',');
            throw new InvalidDataException($"[key={key}，row={row},column={column}] There are mutiple types with same name and ExcelReflectionAttribute:" + error);
        }
    }
}
