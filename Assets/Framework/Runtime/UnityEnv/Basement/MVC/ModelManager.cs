using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class ModelManager
    {

        private Dictionary<Type, object> models = new Dictionary<Type, object>();


        public T Get<T>() where T : class, IModel
        {
            //if (models is null) models = new Dictionary<Type, object>();

            if (!models.ContainsKey(typeof(T)))
            {
                models.Add(typeof(T), Activator.CreateInstance<T>());
            }
            return models[typeof(T)] as T;
        }

        private DataStrContainer folder = new($"{System.IO.Path.Combine(Application.persistentDataPath, "Models")}");
        private readonly JsonSerializerSettings jsonSerializerSettings = new JsonSerializerSettings() { TypeNameHandling = TypeNameHandling.All };
        public async AsyncTask SaveAllAsync()
        {
            folder.Clear();
            await Async.Complete();
            foreach (var model in models)
            {
                await folder.WriteFileAsync(model.Key.Name + ".model", JsonConvert.SerializeObject(model.Value, jsonSerializerSettings));
            }
        }

        public async AsyncTask LoadAllAsync()
        {
            models.Clear();
            await Async.Complete();
            foreach (var path in folder.FilePaths)
            {
                try
                {
                    object obj = JsonConvert.DeserializeObject(await folder.ReadFileFromPathAsync(path), jsonSerializerSettings);
                    models.Add(obj.GetType(), obj);
                }
                catch (Exception ex)
                {
                    Debug.LogError(ex);
                }
            }
        }


        public async AsyncTask SaveAsync<T>() where T : class, IModel
        {
            Type type = typeof(T);
            if (models.ContainsKey(type)) throw new InvalidDataException("You are trying save a Null!");
            object model = models[type];
            await folder.WriteFileAsync(type.Name + ".model", JsonConvert.SerializeObject(model, jsonSerializerSettings));
        }

        public async AsyncTask LoadAsync<T>()
        {
            Type type = typeof(T);

            try
            {
                object model = JsonConvert.DeserializeObject(await folder.ReadFileAsync(type.Name + ".model"), jsonSerializerSettings);
                if (models.ContainsKey(type)) models[type] = model;
                else models.Add(type, model);
            }
            catch (Exception ex)
            {
                Debug.LogError(ex);
            }
            
        }

    }
}
