using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Newtonsoft.Json;


namespace AirFramework.Editor
{
    public class Initializer
    {
        Dictionary<string, object> initList = null;
        public T Read<T>(string key)
        {
            if (!initList.ContainsKey(key)) throw new System.InvalidOperationException("The configuration information does not exist.");
            return (T)initList[key];
        }

        public Initializer(string path)
        {
            initList = GetConfigurationTable(path);
        }
        private Dictionary<string, object> GetConfigurationTable(string path)
        {
            try
            {
                var reader = new StreamReader(path);
                string json = reader.ReadToEnd();
                reader.Dispose();

                var x = JsonConvert.DeserializeObject<Dictionary<string, object>>(json);
                return x;
            }
            catch
            { 
                throw new FileLoadException("Failed to load framework configuration file.");
            }

        }
    }


}
