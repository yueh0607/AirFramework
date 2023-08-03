using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class HotFixTool :EditorWindow
{
    [MenuItem("HotFixTool",menuItem ="AirFramework/HotFixTool")]
    public static void OpenWindow()
    {
        var window = GetWindow<HotFixTool>();
        window.Show();
    }


    private string hotFixDllPath,hotFixPath,metaDllPath,metaPath;


    private void OnEnable()
    {
        hotFixDllPath = HotFixToolCache.instance.hotFixDllPath;
        hotFixPath = HotFixToolCache.instance.hotFixBytesPath;
        metaDllPath = HotFixToolCache.instance.metaDataPath;
        metaPath = HotFixToolCache.instance.hotFixBytesPath;
    }

    private void OnDisable()
    {
        HotFixToolCache.instance.hotFixDllPath = hotFixDllPath;
        HotFixToolCache.instance.hotFixBytesPath = hotFixPath;
        HotFixToolCache.instance.metaDataPath = metaDllPath;
        HotFixToolCache.instance.hotFixBytesPath = metaPath;
    }
    private void OnGUI()
    {
        hotFixDllPath = EditorGUILayout.TextField("热更新DLL生成路径", hotFixDllPath);
        hotFixPath = EditorGUILayout.TextField("热更新Bytes拷贝路径", hotFixPath);
        metaDllPath = EditorGUILayout.TextField("元数据DLL生成路径", metaDllPath);
        metaPath = EditorGUILayout.TextField("元数据Bytes拷贝路径", metaPath);
        
        GUILayout.BeginHorizontal();

        if (GUILayout.Button("执行拷贝")) InvokeCopy();
        if(GUILayout.Button("自动路径")) AutoPathFind();

        GUILayout.EndHorizontal();
    }


    void InvokeCopy()
    {

    }

    void AutoPathFind()
    {

    }
}
