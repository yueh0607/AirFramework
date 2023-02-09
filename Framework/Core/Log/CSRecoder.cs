using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class CSRecorder : IRecorder
    {

  

        public void Write(string outline, string info)
        {
            string x = $"[{System.DateTime.Now}] {outline} {info}";
            string directory = $"{Framework.Log.LogPath}/Log/";
            string path = $"{directory}{System.DateTime.Now.Date.ToString().Replace("/", "-").Replace(" 0:00:00","")}.txt";
            

            if (!Directory.Exists(directory))
                Directory.CreateDirectory(directory);
            if (!File.Exists(path)) 
                File.Create(path). Close();
           
            

            using (var writer = new StreamWriter(path, true, Framework.Log.encoding))
            {
                writer.WriteLine(x);
            }


        }


    }
}
