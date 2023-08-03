using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class HotFixToolCache : ScriptableSingleton<HotFixToolCache>
{
    /// <summary>
    /// 热更新dll生成路径
    /// </summary>
    public string hotFixDllPath = string.Empty;
    /// <summary>
    /// 热更新bytes拷贝路径
    /// </summary>
    public string hotFixBytesPath = string.Empty;
    /// <summary>
    /// 补充元数据dll生成路径
    /// </summary>
    public string metaDataPath = string.Empty;

    /// <summary>
    /// 元数据bytes拷贝路径
    /// </summary>
    public string metaDataBytesPath = string.Empty;


}
