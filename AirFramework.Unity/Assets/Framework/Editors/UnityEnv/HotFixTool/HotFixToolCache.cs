using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class HotFixToolCache : ScriptableSingleton<HotFixToolCache>
{

    /// <summary>
    /// 热更新bytes拷贝路径
    /// </summary>
    public string hotFixBytesPath = "Assets/Project/HotFix/HotUpdate";
    

    /// <summary>
    /// 元数据bytes拷贝路径
    /// </summary>
    public string metaDataBytesPath = "Assets/Project/HotFix/MetaData";

    public string currentPlatform = string.Empty;
}
