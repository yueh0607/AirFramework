using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISyntaxAnalyser
{


    public Type TrueType { get; }
    public object StringToValue(string str);
}


