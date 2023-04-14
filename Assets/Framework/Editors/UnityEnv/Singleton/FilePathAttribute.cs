using System;

namespace AirFrameworkEditor
{
    [AttributeUsage(AttributeTargets.Class)]
    public class FilePathAttribute : Attribute
    {
        public string FilePath;

        /// <summary>
        /// �������·��
        /// </summary> 
        /// <param name="path">��� Project ·��</param>
        public FilePathAttribute(string path)
        {
            if (string.IsNullOrEmpty(path)) throw new ArgumentException("Invalid relative path (it is empty)");
            if (path[0] == '/') path = path[1..];
            FilePath = path;
        }
    }
}