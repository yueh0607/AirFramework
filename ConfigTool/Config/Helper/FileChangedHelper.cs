using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static class FileChangedHelper
    {
        static Dictionary<string, string> fileHashes = new Dictionary<string, string>();
        static List<string > changedFiles = new List<string>();
        /// <summary>
        /// 存储Hash值
        /// </summary>
        /// <param name="directoryPath"></param>
        public static void Record(string directoryPath)
        {
            fileHashes.Clear(); // 清空哈希值记录

            RecordFilesInDirectory(directoryPath);

            
        }
        /// <summary>
        /// 筛选变化值
        /// </summary>
        /// <param name="directoryPath"></param>
        public static List<string> Filter(string directoryPath)
        {
            CompareFilesInDirectory(directoryPath);
            return changedFiles;
        }



        static void RecordFilesInDirectory(string path)
        {
            foreach (var file in Directory.GetFiles(path))
            {
                string hash = CalculateFileHash(file);
                fileHashes[file] = hash;
            }

            foreach (var subDir in Directory.GetDirectories(path))
            {
                RecordFilesInDirectory(subDir);
            }
        }

        static void CompareFilesInDirectory(string path)
        {
            foreach (var file in Directory.GetFiles(path))
            {
                if (fileHashes.ContainsKey(file))
                {
                    string currentHash = CalculateFileHash(file);
                    string recordedHash = fileHashes[file];

                    if (currentHash != recordedHash)
                    {
                        changedFiles.Add(file);
                    }
                }
                else
                {
                    changedFiles.Add(file);
                }
            }

            foreach (var subDir in Directory.GetDirectories(path))
            {
                CompareFilesInDirectory(subDir);
            }
        }

        static string CalculateFileHash(string filePath)
        {
            using (var md5 = MD5.Create())
            {
                using (var stream = File.OpenRead(filePath))
                {
                    byte[] hashBytes = md5.ComputeHash(stream);
                    return BitConverter.ToString(hashBytes).Replace("-", "").ToLower();
                }
            }
        }

       

    }
}
