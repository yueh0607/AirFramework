using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
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
        public static string GetAbsPathToAsset(string relativePath)=>Path.Combine(Application.dataPath, relativePath);
        public  static string GetAbsPathToProject(string relativePath) =>Path.Combine(ProjectPath, relativePath);

        /// <summary>
        /// 不存在则创建，可以是文件夹也可以是文件
        /// </summary>
        /// <param name="path"></param>
        public static bool NotExistCreate(string path)
        {
            if (Path.HasExtension(path))
            {
                string dir = Path.GetDirectoryName(path);
                Directory.CreateDirectory(dir);
                if (!File.Exists(path))
                    File.Create(path).Dispose();
                else return false;
            }
            else
            {
                Directory.CreateDirectory(path);
            }
            return true;
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

        /// <summary>
        /// 遍历整个域的类型
        /// </summary>
        /// <param name="action"></param>
        /// <param name="filter"></param>

        public static void ForeachTypes(Action<Assembly,Type> action,Predicate<Type> filter=null)
        {
            foreach(var assebly in AppDomain.CurrentDomain.GetAssemblies())
            {
                foreach(var tp in assebly.GetTypes())
                {
                    if(filter==null || filter(tp))
                    {
                        action(assebly, tp);
                    }
                }
            }
        }
        /// <summary>
        /// 在整个域里获取特性
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static List<T> GetAllAttributes<T>() where T : Attribute
        {
            List<T> list = new List<T>();
            ForeachTypes((x, y) =>
            {
                var att = y.GetCustomAttributes<T>();
                list.AddRange(att);
            });
            return list;
        }


        
       

    }
}