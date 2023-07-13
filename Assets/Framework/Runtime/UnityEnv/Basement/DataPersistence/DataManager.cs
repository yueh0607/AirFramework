using Newtonsoft.Json;
using System;
using System.IO;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public class DataManager
    {
        public string Path { get; set; } = $"{Application.persistentDataPath}/Perisitent";
        public DataConnection defaultConnection { get; set; }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private string ToModelPeristent(string name) => $"{Path}/ModelData/{name}";



        private JsonSerializerSettings jsonSerializerSettings = new JsonSerializerSettings() { TypeNameHandling = TypeNameHandling.Auto };

        public async AsyncTask SaveToFileAsync(string name, object obj)
        {
            name = ToModelPeristent(name);
            FileHelper.CheckCreatePath(name);
            string temp = JsonConvert.SerializeObject(obj, jsonSerializerSettings);
            await File.WriteAllTextAsync(name, temp);

        }

        public void SaveToFile(string name, object obj)
        {
            name = ToModelPeristent(name);
            FileHelper.CheckCreatePath(name);

            File.WriteAllText(name, JsonConvert.SerializeObject(obj, jsonSerializerSettings));
        }

        public async AsyncTask<T> ReadFromFileAsync<T>(string name)
        {
            name = ToModelPeristent(name);

            T item;
            try
            {

                item = JsonConvert.DeserializeObject<T>(await File.ReadAllTextAsync(name), jsonSerializerSettings);
            }
            catch (Exception ex)
            {
                if (ex is not FileNotFoundException)
                    UnityEngine.Debug.LogError(ex);
                else UnityEngine.Debug.LogWarning(ex);
                return Activator.CreateInstance<T>();
            }
            item ??= Activator.CreateInstance<T>();

            return item;
        }

        public T ReadFromFile<T>(string name)
        {
            name = ToModelPeristent(name);
            T item;
            try
            {

                item = JsonConvert.DeserializeObject<T>(File.ReadAllText(name), jsonSerializerSettings);
            }
            catch (Exception ex)
            {
                if (ex is not FileNotFoundException)
                    UnityEngine.Debug.LogError(ex);
                else UnityEngine.Debug.LogWarning(ex);
                return Activator.CreateInstance<T>();
            }
            item ??= Activator.CreateInstance<T>();

            return item;
        }






    }
}
