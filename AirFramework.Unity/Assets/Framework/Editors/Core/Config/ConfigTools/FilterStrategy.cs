using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class FilterStrategy 
{
    /// <summary>
    /// 策略表
    /// </summary>
    private static List<SyntaxFilter<string>> filters = new List<SyntaxFilter<string>>()
    {
        new NoteFilter(),
        new PrimaryKeyFilter()
    };

    public static ConfigTable<string> GetTable(ConfigTable<string> table)
    {
        var temp = table;
        foreach(var filter in filters)
        {
            temp = filter.GetNextTable(temp);
        }
        return temp;
    }
}
