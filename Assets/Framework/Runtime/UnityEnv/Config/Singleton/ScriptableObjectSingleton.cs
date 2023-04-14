using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace AirFramework
{

    [AttributeUsage(AttributeTargets.Class)]
    public class FilePathAttribute : Attribute
    {
        internal string FilePath;

        /// <summary>
        /// 单例存放路径
        /// </summary>
        /// <param name="path">相对 Project 路径</param>
        public FilePathAttribute(string path)
        {
            if (string.IsNullOrEmpty(path)) throw new ArgumentException("Invalid relative path (it is empty)");
            if (path[0] == '/') path = path[1..];
            FilePath = path;
        }
    }
    public class ScriptableSingleton<T> : ScriptableObject where T : ScriptableObject
    {

#if UNITY_EDITOR
        public string FilePath { get => GetFilePath(); }

        private static T instance;
        public static T Instance
        {
            get
            {
                instance ??= LoadOrCreate();

                return instance;
            }
        }

        public static T LoadOrCreate()
        {
            string filePath = GetFilePath();
            if (!string.IsNullOrEmpty(filePath))
            {
                T instance = AssetDatabase.LoadAssetAtPath<T>(filePath);
                if (!instance)
                {
                    instance = CreateInstance<T>();

                    AssetDatabase.CreateAsset(instance, filePath);

                    AssetDatabase.Refresh();
                }

                return instance;
            }
            else throw new ArgumentNullException($"{nameof(ScriptableSingleton<T>)}: 请指定单例存档路径");
        }

        protected static string GetFilePath()
        {
            return typeof(T).GetCustomAttributes(true)
                .Cast<FilePathAttribute>()
                .FirstOrDefault(p => p != null)
                ?.FilePath;
        }
#endif
    }
}
