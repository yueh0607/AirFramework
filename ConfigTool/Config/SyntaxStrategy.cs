using System;
using System.Collections;
using System.Collections.Generic;

public class SyntaxStrategy
{

    /// <summary>
    /// 策略表：在这俩进行类型转换器定义
    /// </summary>
    private static Dictionary<string, ISyntaxAnalyser> syntaxAnalyers = new Dictionary<string, ISyntaxAnalyser>()
    {
        { "int",new IntSyntaxAnalyser()}

    };


    /// <summary>
    /// 是否存在转换策略
    /// </summary>
    /// <param name="typeSign"></param>
    /// <returns></returns>
    public static bool HasConverter(string typeSign) => syntaxAnalyers.ContainsKey(typeSign);

    /// <summary>
    /// 获取值
    /// </summary>
    /// <param name="str"></param>
    /// <param name="typeSign"></param>
    /// <returns></returns>
    /// <exception cref="InvalidCastException"></exception>
    public static object GetValue(string str, string typeSign)
    {
        if (!syntaxAnalyers.ContainsKey(typeSign))
        {
            throw new InvalidCastException($"Unsupported type :{typeSign}");
        }
        return syntaxAnalyers[typeSign].StringToValue(str);
    }

    /// <summary>
    /// 获取类型
    /// </summary>
    /// <param name="typeSign"></param>
    /// <returns></returns>
    /// <exception cref="InvalidCastException"></exception>
    public static Type GetTrueType(string typeSign)
    {
        if (!syntaxAnalyers.ContainsKey(typeSign))
        {
            throw new InvalidCastException($"Unsupported type :{typeSign}");
        }
        return syntaxAnalyers[typeSign].TrueType;
    }
}
