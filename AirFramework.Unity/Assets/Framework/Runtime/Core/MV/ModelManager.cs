using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace AirFramework
{

    public class ModelModule : AbstractModule
    {


        private Dictionary<Type, IModel> models = new Dictionary<Type, IModel>();

        private List<TypeCouple> couples = new List<TypeCouple>();


        private async AirTask GenereteMedium()
        {
            couples.Clear();
            foreach (var kp in models)
            {
                var tc = new TypeCouple();
                tc.TrueType = kp.Key;
                using (MemoryStream stream = new MemoryStream())
                {
                    await MemoryPack.MemoryPackSerializer.SerializeAsync(kp.Key, stream, kp.Value);
                    await stream.FlushAsync();
                    stream.Position = 0;
                    tc.TrueData = stream.ToArray();
                }
                couples.Add(tc);
            }
        }
        private async AirTask<byte[]> SerializeData()
        {
            byte[] result;
            using (MemoryStream stream = new MemoryStream())
            {
                await MemoryPack.MemoryPackSerializer.SerializeAsync(TypeValue<List<TypeCouple>>.Value,stream, couples);
                await stream.FlushAsync();
                stream.Position = 0;
                result = stream.ToArray();
            }
            return result;
        }


        public IModel GetModel(Type type)
        {
            if (!models.ContainsKey(type))
            {
                models.Add(type, (IModel)Activator.CreateInstance(type));
            }
            return models[type];
        }


        public T GetModel<T>() => (T)GetModel(typeof(T));



        public void SaveAll()
        {

        }
        public void SaveAllAsync()
        {

        }

        public void LoadAll()
        {

        }
        public void LoadAllAsync()
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
