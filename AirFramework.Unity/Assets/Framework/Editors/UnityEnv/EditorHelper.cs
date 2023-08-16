using System;
using System.IO;
using UnityEngine;


namespace AirEditor
{
    public static class EditorHelper
    {
        private static string projectPath = null;
        /// <summary>
        /// 项目所在的路径
        /// </summary>
        public static string ProjectPath
        {
            get
            {
                if (projectPath == null)
                {
                    projectPath = Application.dataPath.Substring(0, Application.dataPath.Length - "/Assets".Length);
                }
                return projectPath;
            }
        }

        /// <summary>
        /// 不存在则创建，可以是文件夹也可以是文件
        /// </summary>
        /// <param name="path"></param>
        public static void NotExistCreate(string path)
        {
            if (Path.HasExtension(path))
            {
                string dir = Path.GetDirectoryName(path);
                Directory.CreateDirectory(dir);
                if (!File.Exists(path))
                    File.Create(path).Dispose();
            }
            else
            {
                Directory.CreateDirectory(path);
            }
        }

        /// <summary>
        /// 删除
        /// </summary>
        /// <param name="path"></param>
        public static void Delete(string path)
        {
            if (Path.HasExtension(path))
            {
                if (File.Exists(path)) File.Delete(path);
                return;
            }

            if (Directory.Exists(path))
                Directory.Delete(path, true);
        }
        /// <summary>
        /// 深度遍历
        /// </summary>
        /// <param name="path"></param>
        /// <param name="action"></param>
        public static void ForeachDFS(string path, Action<string> action, Predicate<string> filter = null)
        {
            foreach (var dir in Directory.EnumerateDirectories(path))
            {
                ForeachDFS(dir, action, filter);
            }
            foreach (var files in Directory.EnumerateFiles(path))
            {
                if (filter == null || filter(files))
                    action(files);
            }
        }

        /// <summary>
        /// 深度遍历
        /// </summary>
        /// <param name="path"></param>
        /// <param name="action"></param>
        public static void ForeachBFS(string path, Action<string> action, Predicate<string> filter = null)
        {
            foreach (var files in Directory.EnumerateFiles(path))
            {
                if (filter == null || filter(files))
                    action(files);
            }
            foreach (var dir in Directory.EnumerateDirectories(path))
            {
                ForeachDFS(dir, action, filter);
            }
        }

    }
}