/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/5 11:38:01
 * Description : Describe the function here.
************************************************************************************/


using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using AirFramework;

namespace AirFramework
{
    public class FileHelper
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void CheckCreatePath(string path)
        {
            string directoryName = Path.GetDirectoryName(path);
            if (!Directory.Exists(directoryName)) Directory.CreateDirectory(directoryName);
            if (!File.Exists(path)) File.Create(path).Dispose();
        }
    }
}

