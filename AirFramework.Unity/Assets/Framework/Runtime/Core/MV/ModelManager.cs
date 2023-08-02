using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class ModelModule : AbstractModule
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



        public override void OnCreate()
        {
      
        }
        
        public override void Update(float deltaTime)
        {
   
        }

        protected override void OnDispose()
        {
 
        }
    }
}
