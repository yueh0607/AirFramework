using AirFramework.Editor;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class URecorder : IRecorder
    {
        public Dictionary<LogType, LogState> StateList { get; set; } = new();
        


        public void Record(string logString, string stackTrace, LogType type)
        {
            //运行时禁止时不打印日志
            if (!Application.isPlaying || StateList[type]==LogState.None) return;

            //裁剪目录
            string directory = $"{LogManager.LogPath}/{LogManager.LogDirectory}/";
            string path = $"{directory}{System.DateTime.Now.Date.ToString().Replace("/", "-").Replace(" 0:00:00", "")}.txt";

            //目录有效性处理
            if (!Directory.Exists(directory))
                Directory.CreateDirectory(directory);
            if (!File.Exists(path))
                File.Create(path).Close();

            //流写者
            using (var writer = new StreamWriter(path, true, Framework.Log.encoding))
            {

                //裁剪日志
                if (StateList[type] != LogState.All)
                {
                    stackTrace = string.Empty;
                }
                else writer.WriteLine();

                //生成日志
                string line = stackTrace == string.Empty ? "" : "\n";
                string x = $"[{System.DateTime.Now}] [{type.ToString().Substring(0, 3)}] {logString}{line}{stackTrace}";
                //写入日志
                writer.WriteLine(x);
            }
        }


    }
}
