using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SyntaxStrategy
{
    private static Dictionary<string, ISyntaxAnalyser> syntaxAnalyers = new Dictionary<string, ISyntaxAnalyser>()
    {
        { "int",new IntSyntaxAnalyser()}

    };


    public static object GetValue(string str,string typeSign)
    {
        if (!syntaxAnalyers.ContainsKey(typeSign))
        {
            throw new InvalidCastException($"Unsupported type :{typeSign}");
        }
        return syntaxAnalyers[typeSign].StringToValue(str);
    }
}
