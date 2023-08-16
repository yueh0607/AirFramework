using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ExcelTypeSyntaxAttribute : System.Attribute
{

    public string Key = "";
    public Type SyntaxType = null;
    public ExcelTypeSyntaxAttribute(string key, Type syntax)
    {
        if(syntax == null||key==null)
        {
            throw new ArgumentNullException("key or filter");
        }
        Key = key;
        SyntaxType = syntax;
    }
}

public class ExcelFilterAttribute : System.Attribute
{
    public int Order = 0;
    public Type FilterType;
    public ExcelFilterAttribute(Type syntax, int order)
    {
        FilterType = syntax;
        Order = order;
    }
}