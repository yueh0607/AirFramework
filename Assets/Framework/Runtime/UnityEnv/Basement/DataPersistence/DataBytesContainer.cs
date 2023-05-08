using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using static Codice.CM.WorkspaceServer.WorkspaceTreeDataStore;

namespace AirFramework
{

    //代表一个文件夹
    public class DataBytesContainer
    {
        public HashSet<string> Files { get; private set; } = new HashSet<string>();

        public string Path { get; private set; } = null;

        public IEnumerable<string> ItemPaths => Directory.EnumerateFiles(Path);

        public DataBytesContainer(string path)
        {
            if (!Directory.Exists(path)) Directory.CreateDirectory(path);
            Path = path;
            var files = Directory.EnumerateFiles(Path);
            foreach (var p in files) Files.Add(System.IO.Path.GetFileName(p));
        }
        private string GetFullPath(string name)
        {
            return System.IO.Path.Combine(Path, name);
        }

        public void WriteFileAsync(string name, byte[] content)
        {
            string fullPath = GetFullPath(name);
            if (Files.Contains(name))
            {
                File.WriteAllBytes(fullPath, content);
            }
            else
            {
                if (!File.Exists(fullPath)) File.Create(fullPath);
                Files.Add(name);
                File.WriteAllBytesAsync(fullPath, content);
            }
        }

        public byte[] ReadFileAsync(string name)
        {
            string fullPath = GetFullPath(name);
            if (Files.Contains(name))
            {
                return File.ReadAllBytes(fullPath);
            }
            else
            {
                return null;
            }
        }

        public bool Exist(string name)
        {
            return Files.Contains(name);
        }
    }
}
