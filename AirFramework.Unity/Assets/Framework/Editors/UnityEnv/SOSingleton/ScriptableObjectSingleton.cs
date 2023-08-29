using AirEditor;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEditor;
using UnityEngine;


namespace AirEditor
{
    public class FilePathAttribute : System.Attribute
    {

        public enum LocationType
        {
            AbsPath,
            ProjectFolder,
            AssetsFolder
        }

        public readonly string RelativePath;
        public readonly LocationType Location;

        public string AbsPath
        {
            get
            {
                switch (Location)
                {
                    case LocationType.AbsPath:
                        {
                            return RelativePath;
                        }
                        case LocationType.ProjectFolder:
                        {
                            return EditorHelper.GetAbsPathToProject(RelativePath);
                        }
                        case LocationType.AssetsFolder:
                        {
                            return EditorHelper.GetAbsPathToAsset(RelativePath);
                        }

                }
                throw new System.InvalidOperationException("Unknown Error happend.");
            }
        }
        public FilePathAttribute(string relativePath,LocationType location = LocationType.ProjectFolder)
        {
            if (!Path.HasExtension(relativePath)) Debug.LogError("FilePathAttribute need a path with extension");
            RelativePath = relativePath;
            Location = location;
        }
    }



    public class JsonSingleton<T> where T:JsonSingleton<T>,new()
    {
        protected JsonSingleton() { }

        private static T instance = null;
        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    FilePathAttribute filePath = typeof(T).GetCustomAttribute<FilePathAttribute>();
                    if (filePath == null)
                    {
                        Debug.LogError("Json singleton must have FilePath attribute");
                        return null;
                    }
                    string absPath = filePath.AbsPath;
                    bool result = EditorHelper.NotExistCreate(absPath);
                    if (!result)
                    {
                        File.WriteAllText(absPath, JsonUtility.ToJson(new T()));
                    }

                    try
                    {
                        string text = File.ReadAllText(filePath.AbsPath);
                        instance = (T)JsonUtility.FromJson<T>(text);
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError("Please remove the occupation of the file before using JsonSingleton\r\nOr JsonSingleton is damaged");
                        Debug.LogError(ex.Message);
                    }
                }
                return instance;
            }
        }
    }
    public class ScriptableObjectSingleton<T>:ScriptableObject where T : ScriptableObjectSingleton<T>
    {
        public ScriptableObjectSingleton() { }

        private static T instance = null;

        public static T Instance
        {
            get
            {
                if(instance == null)
                {
                    string[] assets = AssetDatabase.FindAssets($"t:{typeof(T).Name}");
                    if(assets.Length==0)
                    {
                        T asset = ScriptableObject.CreateInstance<T>();
                        FilePathAttribute filePath = typeof(T).GetCustomAttribute<FilePathAttribute>();
                        if (filePath == null)
                        {
                            Debug.LogError("ScriptableObject singleton must have FilePath attribute");
                            return null;
                        }
                        string dir = Path.GetDirectoryName(filePath.AbsPath);
                        EditorHelper.NotExistCreate(dir);
                        AssetDatabase.CreateAsset(asset, "Assets/" + filePath.RelativePath);
                        instance = asset;
                    }
                    else if (assets.Length > 1)
                    {
                        Debug.LogError("There are multiple persistent data resources of type T, but T is a persistent singleton");
                        foreach(string asset in assets)
                        {
                            Debug.LogWarning(asset);
                        }
                        instance = null;
                    }
                    else if(assets.Length==1)
                    {
                        instance = AssetDatabase.LoadAssetAtPath<T>(AssetDatabase.GUIDToAssetPath(assets[0]));
                    }

                }
                return instance;
            }
        }


    }
}