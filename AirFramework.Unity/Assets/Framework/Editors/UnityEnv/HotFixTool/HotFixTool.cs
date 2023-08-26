using HybridCLR.Editor;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace AirEditor
{

    public class HotFixTool : EditorWindow
    {
        [MenuItem("HotFixTool", menuItem = "AirFramework/HotFixTool")]
        public static void OpenWindow()
        {
            var window = GetWindow<HotFixTool>();
            window.name = "HotFixTool";
            window.Show();
        }


        private string hotFixBytesPath, metaBytesPath;

        private void OnEnable()
        {
            LoadPlatformOptions();
            selectedPlatform = PlatformOptions.IndexOf(HotFixToolCache.instance.currentPlatform);
            hotFixBytesPath = HotFixToolCache.instance.hotFixBytesPath;
            metaBytesPath = HotFixToolCache.instance.metaDataBytesPath;
        }

        private void OnDisable()
        {
            if(selectedPlatform<PlatformOptions.Count&&selectedPlatform>=0)
            HotFixToolCache.instance.currentPlatform = PlatformOptions[selectedPlatform];
            HotFixToolCache.instance.hotFixBytesPath = hotFixBytesPath;
            HotFixToolCache.instance.metaDataBytesPath = metaBytesPath;
        }

        Vector2 hotUpdateScrollViewPosition = Vector2.zero;
        Vector2 patchDataScrollViewPosition = Vector2.zero;

        int selectedPlatform = 0;
        private void OnGUI()
        {

            selectedPlatform = EditorGUILayout.Popup("拷贝平台", selectedPlatform, PlatformOptions.ToArray());
            hotFixBytesPath = EditorGUILayout.TextField("热更新Bytes拷贝路径", hotFixBytesPath);
            metaBytesPath = EditorGUILayout.TextField("元数据Bytes拷贝路径", metaBytesPath);

            GUILayout.BeginHorizontal();
            var color = GUI.color;
            GUI.color = Color.green;
            if (GUILayout.Button("重新拷贝")) ClearAndCopyHotFixDllFile();
            if (GUILayout.Button("重置路径")) ResetPathToDefault();
            if (GUILayout.Button("清空拷贝")) ClearHotFixDllFiles();
            GUI.color = color;
            GUILayout.EndHorizontal();

            GUILayout.Label("热更新程序集(ReadOnly)");
            hotUpdateScrollViewPosition = GUILayout.BeginScrollView(hotUpdateScrollViewPosition);
            foreach (var item in HotUpdateAssemblyNames)
            {
                GUILayout.TextArea(item);
            }
            GUILayout.EndScrollView();


            GUILayout.Label("补充元数据(ReadOnly)");
            patchDataScrollViewPosition = GUILayout.BeginScrollView(patchDataScrollViewPosition);
            foreach (var item in PatchMetaDataNames)
            {
                GUILayout.TextArea(item);
            }
            GUILayout.EndScrollView();
        }

        private void Update()
        {
            LoadAllUsefulData();
        }
        void LoadAllUsefulData()
        {
            LoadHotUpdateAssemblyNames();
            LoadMetaDataAssemblyNames();
        }
        List<string> HotUpdateAssemblyNames = new List<string>();
        List<string> PatchMetaDataNames = new List<string>();
        List<string> PlatformOptions = new List<string>();
        void LoadHotUpdateAssemblyNames()
        {
            HotUpdateAssemblyNames.Clear();
            foreach (var name in HybridCLRSettings.Instance.hotUpdateAssemblies)
            {
                HotUpdateAssemblyNames.Add(name);
            }
            foreach (var adf in HybridCLRSettings.Instance.hotUpdateAssemblyDefinitions)
            {
                HotUpdateAssemblyNames.Add(adf.name);
            }
        }
        void LoadMetaDataAssemblyNames()
        {
            PatchMetaDataNames.Clear();
            foreach (var name in HybridCLRSettings.Instance.patchAOTAssemblies)
            {
                PatchMetaDataNames.Add(name);
            }
            foreach (var name in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                PatchMetaDataNames.Add(Path.GetFileNameWithoutExtension(name));
            }
        }
        void LoadPlatformOptions()
        {
            PlatformOptions.Clear();
            //PlatformOptions.Add("None");
            foreach (var platform in Directory.EnumerateDirectories(HybridCLRSettings.Instance.hotUpdateDllCompileOutputRootDir))
            {
                PlatformOptions.Add(Path.GetFileName(platform));
            }
        }


        bool HotAssemblyNameTest(string name)
        {
            return HotUpdateAssemblyNames.Contains(name);
        }
        bool PatchMetaAssleblyNameTest(string name)
        {
            return PatchMetaDataNames.Contains(name);
        }
        void ClearAndCopyHotFixDllFile()
        {
            if (selectedPlatform < 0 || selectedPlatform >= PlatformOptions.Count) throw new InvalidOperationException("无效的平台");
            //LoadAllUsefulAssemblyNames();
            ClearHotFixDllFiles(false);
            int i = FolderBytesCopyer.CopyBytes(ProjectPath + HybridCLRSettings.Instance.hotUpdateDllCompileOutputRootDir + "/" + PlatformOptions[selectedPlatform],
                ".dll", ProjectPath + hotFixBytesPath, ".bytes", HotAssemblyNameTest);
            int j = FolderBytesCopyer.CopyBytes(ProjectPath + HybridCLRSettings.Instance.strippedAOTDllOutputRootDir + "/" + PlatformOptions[selectedPlatform],
                ".dll", ProjectPath + metaBytesPath, ".bytes", PatchMetaAssleblyNameTest);
            AssetDatabase.Refresh();
            Debug.Log($"Copy HotUpdateDll Completed ,Count: {i}");
            Debug.Log($"Copy MetaDataDll Completed: Count {j}");
        }

        void ClearHotFixDllFiles(bool refresh = true)
        {

            FolderBytesCopyer.ClearFiles(ProjectPath + hotFixBytesPath);
            FolderBytesCopyer.ClearFiles(ProjectPath + metaBytesPath);
            Debug.Log($"Clear HotUpdateDll Completed ");
            Debug.Log($"Clear MetaDataDll Completed");
            if (refresh) AssetDatabase.Refresh();

        }
        void ResetPathToDefault()
        {
            Debug.Log("AirFramework.HotFixTool Path Apply Default Setting!");
            HotFixToolCache.DestroyImmediate(HotFixToolCache.instance);
            OnEnable();
        }

        string projectPath = null;
        string ProjectPath
        {
            get
            {
                projectPath ??= Application.dataPath.Substring(0, Application.dataPath.Length - "Assets".Length);
                return projectPath;
            }
        }

    }
}