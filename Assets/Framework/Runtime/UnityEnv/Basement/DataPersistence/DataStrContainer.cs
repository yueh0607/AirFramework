using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{

    //代表一个文件夹
    public class DataStrContainer
    {
        public string FolderPath { get; private set; } = null;
        public IEnumerable<string> FilePaths => Directory.EnumerateFiles(FolderPath);

        public DataStrContainer(string path)
        {
            if (!Directory.Exists(path)) Directory.CreateDirectory(path);
            FolderPath = path;
        }


        private string GetFullPath(string name)
        {
            return System.IO.Path.Combine(FolderPath, name);
        }

        public async AsyncTask WriteFileAsync(string name, string content)
        {
            string fullPath = GetFullPath(name);
            if (!File.Exists(fullPath)) File.Create(fullPath).Dispose();
            await File.WriteAllTextAsync(fullPath, content);
        }

        public async AsyncTask<string> ReadFileAsync(string name)
        {
            string fullPath = GetFullPath(name);
            return await File.ReadAllTextAsync(fullPath);
        }
        public async AsyncTask<string> ReadFileFromPathAsync(string path)
        {
            return await File.ReadAllTextAsync(path);

        }
        public bool Exist(string name)
        {
            return File.Exists(GetFullPath(name));
        }

        public void Clear()
        {
            foreach (var file in FilePaths)
            {
                File.Delete(file);

            }
        }

        public void Delete(string name) => File.Delete(GetFullPath(name));
    }
}
