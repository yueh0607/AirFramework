using AirEditor.Config;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Windows;


[ExcelTypeSyntax("Vector3",typeof(Vector3SyntaxAnalyser))]
public class Vector3SyntaxAnalyser : ISyntaxAnalyser
{
    public string TrueType => "UnityEngine.Vector3";

    object ISyntaxAnalyser.StringToValue(string str, string type, int row, int column, string key)
    {
        string pattern = @"\((-?\d+(\.\d+)?),(-?\d+(\.\d+)?),(-?\d+(\.\d+)?)\)"; // 正则表达式模式
        Match match = Regex.Match(str.Replace(" ",string.Empty), pattern);
        if (match.Success) return $"new {TrueType}({match.Groups[1]+"F"},{match.Groups[3]+"F"},{match.Groups[5]+"F"})";
        else throw new InvalidCastException($"\"{str}\"[key={key}] is not a valid data for \"{type}\" at guessing position[{row + 1},{column + 1}]");
    }
}
