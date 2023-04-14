using System;
using System.Collections.Generic;
namespace AirFramework
{
    public class ModelManager
    {

        private Dictionary<Type, Model> models = new Dictionary<Type, Model>();

        public T Get<T>() where T : Model
        {
            if (!models.ContainsKey(typeof(T)))
            {
                models.Add(typeof(T), Activator.CreateInstance<T>());
            }
            return models[typeof(T)] as T;
        }


    }
}
