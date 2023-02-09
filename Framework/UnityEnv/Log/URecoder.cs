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



        public void Record(string logString, string stackTrace, LogType type)
        {

            string directory = $"{Framework.Log.LogPath}/{Framework.Log.LogDirectory}/";
            string path = $"{directory}{System.DateTime.Now.Date.ToString().Replace("/", "-").Replace(" 0:00:00", "")}.txt";


            if (!Directory.Exists(directory))
                Directory.CreateDirectory(directory);
            if (!File.Exists(path))
                File.Create(path).Close();


            using (var writer = new StreamWriter(path, true, Framework.Log.encoding))
            {
                if(!Framework.Log.AllStatckTrace)
                if (type is(LogType.Log or LogType.Warning) )
                {
                    stackTrace = string.Empty;
                }
                else writer.WriteLine();


                string line = stackTrace == string.Empty ? "" : "\n";
                string x = $"[{System.DateTime.Now}] [{type.ToString().Substring(0, 3)}] {logString}{line}{stackTrace}";

                writer.WriteLine(x);
            }
        }


    }
}
