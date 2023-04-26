using System.IO;
using UnityEditor;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class FileCreateHandle : MonoBehaviour
    {
        public static void Refresh() => AssetDatabase.Refresh();

        public static string AssetPath2AbsPath(string assetPath)
        {
            return Application.dataPath + "/" + assetPath.Substring("Assets/".Length);
        }

        public static string AbsPath2AssetPath(string absPath)
        {
            if (!absPath.StartsWith(Application.dataPath))
            {
                throw new InvalidDataException("It's not a asset path");
            }

            absPath = absPath.Substring(Application.dataPath.Length);
            absPath = absPath.TrimStart('/');
            return absPath;
        }



        /// <summary>
        /// ����: Assets/MyFolder/mytxt.txt
        /// </summary>
        /// <param name="relativePath"></param>
        /// <returns></returns>
        public static void CreateFileInAssetPath(string path, string text)
        {

            File.WriteAllText(AssetPath2AbsPath(path), text, System.Text.Encoding.Unicode);
            //Refresh();
        }

        /// <summary>
        /// �����ļ�������·��
        /// </summary>
        /// <param name="path"></param>
        /// <param name="text"></param>
        public static void CreateFileInAbsPath(string path, string text)
        {
            string filePath = path;
            File.WriteAllText(filePath, text, System.Text.Encoding.Unicode);
            //Refresh();
        }

        /// <summary>
        /// ����: myFolder/myfolder
        /// </summary>
        /// <param name="relativePath"></param>
        /// <returns></returns>
        public static bool ExistInStreamingAsset(string relativePath)
        {
            return File.Exists($"{Application.streamingAssetsPath}/{relativePath}");
        }
        /// <summary>
        /// ����·���Ƿ����
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static bool ExistInAbsPath(string path)
        {
            return File.Exists(path);
        }

        /// <summary>
        /// ����: Assets/MyFolder/mytxt.txt
        /// </summary>
        /// <param name="relativePath"></param>
        /// <returns></returns>
        public static bool ExistInAssetPath(string relativePath)
        {
            return File.Exists(AssetPath2AbsPath(relativePath));
        }


        public static bool ExistAssetFolder(string relativePath)
        {
            return Directory.Exists(AssetPath2AbsPath(relativePath));
        }

        public static void CreateAssetFolder(string relativePath)
        {
            if (!ExistAssetFolder(relativePath))
            {
                Directory.CreateDirectory(AssetPath2AbsPath(relativePath));
            }

        }
    }
}
