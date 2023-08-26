/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/5 11:38:01
 * Description : Describe the function here.
************************************************************************************/


using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public class FileHelper
    {

        /// <summary>
        /// 检查路径是否存在，不存在则创建
        /// </summary>
        /// <param name="path"></param>
        //[DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static FileStream CreateOrOverrideFile(string path)
        {
            string directoryName = Path.GetDirectoryName(path);
            if (!Directory.Exists(directoryName)) Directory.CreateDirectory(directoryName);
            return File.Open(path, FileMode.Create, FileAccess.ReadWrite, FileShare.Read);
        }



    }
}

