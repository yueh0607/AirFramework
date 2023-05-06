using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class DataManager
    {
        public string Path { get; set; } = $"{Application.persistentDataPath}/Perisitent";
        public DataConnection defaultConnection { get; set; }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private string ToClassPeristent(string name) => $"{Path}/ClassData/{name}";


        public DataManager()
        {
            defaultConnection = new($"{Path}/KVPSaves/DefaultKVP.json");
            defaultConnection.Initialize();
        }



        public void Set<T>(string key, T value)
        {
            defaultConnection.Set<T>(key, value);
        }

        public T Get<T>(string key)
        {
            return defaultConnection.Get<T>(key);
        }

        public bool Exist(string key) => defaultConnection.Exist(key);

        public void Delete(string key) => defaultConnection.Delete(key);

        public void Save() => defaultConnection.Save();

        public AsyncTask SaveAsync() => defaultConnection.SaveAsync();



        private Dictionary<string, DataConnection> datas = new Dictionary<string, DataConnection>();

        public DataConnection GetConnection(string connectionName)
        {
            if (!datas.ContainsKey(connectionName))
            {
                datas.Add(connectionName, new DataConnection(connectionName));
            }
            return datas[connectionName];
        }

        public void CloseConnection(string connectionName)
        {
            datas.Remove(connectionName);
        }






        private JsonSerializerSettings jsonSerializerSettings = new JsonSerializerSettings() { TypeNameHandling = TypeNameHandling.Auto};

        public async AsyncTask SaveAsJsonAsync(string name, object obj)
        {
            name = ToClassPeristent(name);
            FileHelper.CheckCreatePath(name);
            string temp = JsonConvert.SerializeObject(obj, jsonSerializerSettings);
            await File.WriteAllTextAsync(name,temp);
  
        }

        public void SaveAsJson(string name, object obj)
        {
            name = ToClassPeristent(name);
            FileHelper.CheckCreatePath(name);

            File.WriteAllText(name, JsonConvert.SerializeObject(obj, jsonSerializerSettings));
        }

        public async AsyncTask<T> ReadAsJsonAsync<T>(string name)
        {
            name = ToClassPeristent(name);

            T item;
            try
            {

                item =  JsonConvert.DeserializeObject<T>(await File.ReadAllTextAsync(name), jsonSerializerSettings);
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


        public T ReadAsJson<T>(string name)
        {
            name = ToClassPeristent(name);
            T item;
            try
            {

                item = JsonConvert.DeserializeObject<T>( File.ReadAllText(name), jsonSerializerSettings);
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
