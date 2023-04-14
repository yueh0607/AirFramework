using System;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace AirFrameworkEditor
{


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
