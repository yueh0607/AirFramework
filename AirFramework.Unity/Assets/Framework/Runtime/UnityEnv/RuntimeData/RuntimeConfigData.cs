using System.IO;
using UnityEngine;

namespace AirFramework
{
    public enum RuntimeMode
    {
        /// <summary>
        /// 编辑器模拟
        /// </summary>
        Simulated = 0,
        /// <summary>
        /// 本地单机
        /// </summary>
        Offline = 1,
        /// <summary>
        /// 联机OR网络
        /// </summary>
        Host = 2
    }
    public class RuntimeConfigData
    {
        public RuntimeMode initializeType = RuntimeMode.Simulated;

        public string ServerPath1 = string.Empty, ServerPath2 = string.Empty;


        public static RuntimeConfigData Read()
        {
            string path = Path.Combine(Application.streamingAssetsPath, "RuntimeMode.INI");
            if (!File.Exists(path)) Write(new RuntimeConfigData());
            var reader = new StreamReader(path, true);
            string str = reader.ReadToEnd();
            reader.Close();
            RuntimeConfigData config = JsonUtility.FromJson<RuntimeConfigData>(str);
            return config;
        }

        public static void Write(RuntimeConfigData data)
        {
            StreamWriter writer = new StreamWriter(Path.Combine(Application.streamingAssetsPath, "RuntimeMode.INI"), false);
            writer.Write(JsonUtility.ToJson(data));
            writer.Close();
        }

        public void Write() => Write(this);
    }
}
