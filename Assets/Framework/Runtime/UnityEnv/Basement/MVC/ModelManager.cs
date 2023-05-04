using System;
using System.Collections.Generic;
namespace AirFramework
{
    public class ModelManager
    {

        private Dictionary<Type, IModel> models = new Dictionary<Type, IModel>();

        public T Get<T>() where T : class,IModel
        {
            if (!models.ContainsKey(typeof(T)))
            {
                models.Add(typeof(T), Activator.CreateInstance<T>());
            }
            return models[typeof(T)] as T;
        }


    }
}
