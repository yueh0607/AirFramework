using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace AirFramework
{
    public class ModelManager
    {

        private Dictionary<Type, object> models = new Dictionary<Type, object>();

        public string Path { get; set; } = "PlayerSave.json";

        public T Get<T>() where T : class,IModel
        {
            if(models is null) models = new Dictionary<Type, object>();

            if (!models.ContainsKey(typeof(T)))
            {
                models.Add(typeof(T), Activator.CreateInstance<T>());
            }
            return models[typeof(T)] as T;
        }

        public void SaveSync()
        {

            Framework.Data.SaveAsJson(Path,models);
        }
        public void LoadSync()
        {
            models= Framework.Data.ReadAsJson<Dictionary<Type, object>>(Path);
        }

        public async AsyncTask SaveAsync()
        {
            await Framework.Data.SaveAsJsonAsync(Path, models);
        }

        public async AsyncTask LoadAsync()
        {
            models = await Framework.Data.ReadAsJsonAsync<Dictionary<Type, object>>(Path);
            models.Count.L();
        }

    }
}
