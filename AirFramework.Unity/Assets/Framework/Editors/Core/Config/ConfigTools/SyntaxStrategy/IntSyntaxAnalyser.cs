using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntSyntaxAnalyser : ISyntaxAnalyser
{
    public object StringToValue(string str)
    {
        return System.Convert.ToInt32(StringToValue(str));
    }
}
