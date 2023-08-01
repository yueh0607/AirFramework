using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class ModelManager
    {
        private Dictionary<Type, IModel> models = new Dictionary<Type, IModel>();

        public IModel GetModel(Type type)
        {
            if (!models.ContainsKey(type))
            {
                models.Add(type, (IModel)Activator.CreateInstance(type));
            }
            return models[type];
        }


        public T GetModel<T>() => (T)GetModel(typeof(T));


        public void Save<T>()
        {

        }

        public void Load<T>()
        {

        }

        public void SaveAll()
        {

        }

        public void LoadAll()
        {

        }
    }
}
