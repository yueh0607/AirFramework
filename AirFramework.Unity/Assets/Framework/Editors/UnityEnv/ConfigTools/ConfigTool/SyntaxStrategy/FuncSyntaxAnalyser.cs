using AirEditor.Config;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[ExcelTypeSyntax("Func1", typeof(Func1SyntaxAnalyser))]
public class Func1SyntaxAnalyser : ISyntaxAnalyser
{
    string ISyntaxAnalyser.TrueType => "System.Func<float,float>";
    object ISyntaxAnalyser.StringToValue(string str, string type, int row, int column, string key)
    {
        return $"(x)=>{str}";
    }
}
[ExcelTypeSyntax("Func2", typeof(Func2SyntaxAnalyser))]
public class Func2SyntaxAnalyser : ISyntaxAnalyser
{
    string ISyntaxAnalyser.TrueType => "System.Func<float,float,float>";

    object ISyntaxAnalyser.StringToValue(string str, string type, int row, int column,string key)
    {
        return $"(x,y)=>{str}";
    }
}
[ExcelTypeSyntax("Func3", typeof(Func3SyntaxAnalyser))]
public class Func3SyntaxAnalyser : ISyntaxAnalyser
{
    string ISyntaxAnalyser.TrueType => "System.Func<float,float,float,float>";

    object ISyntaxAnalyser.StringToValue(string str, string type, int row, int column, string key)
    {
        return $"(x,y,z)=>{str}";
    }
}