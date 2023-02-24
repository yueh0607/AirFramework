using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace AirFramework.Editor
{
    public class ScriptableObjectSingleton <T>:ScriptableObject where T : ScriptableObjectSingleton<T>
    {
        public static string FilePath =>GetFilePath();

        private static T instance = null;
        public static T Instance
        {
            get
            {
                if(FilePath== null)
                {
                    throw new System.InvalidOperationException("File Path is not allowed to null.");
                }
                return LoadInstance(FilePath);
            }
        }

        private static T LoadInstance(string path)
        { 
            if (instance == null)
            {
                instance = AssetDatabase.LoadAssetAtPath<T>(path);
                if(instance==null)
                {
                    instance = CreateInstance<T>();
                    AssetDatabase.CreateAsset(instance, path);
                }

            }
            return instance;
        }


        protected static string GetFilePath()
        {
            return typeof(T).GetCustomAttributes(true)
                .Cast<FilePathAttribute>()
                .FirstOrDefault(p => p != null)
                ?.FilePath;
        }
    }

    [AttributeUsage(AttributeTargets.Class)]
    public class FilePathAttribute : Attribute
    {
        internal string FilePath;

        public FilePathAttribute(string path)
        {
            if (string.IsNullOrEmpty(path)) throw new ArgumentException("Invalid relative path (it is empty)");
            if (path[0] == '/') path = path[1..];
            FilePath = path;
        }
    }
}
