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

        /// <summary>
        /// 序列化一个数据为TypeCouple
        /// </summary>
        /// <param name="type"></param>
        /// <param name="model"></param>
        /// <returns></returns>
        public async AirTask<TypeCouple> Serialize(Type type, object model)
        {
            var tc = Framework.Pool.Allocate<TypeCouple>();
            tc.TrueType = type;
            using (var stream = Framework.Pool.Allocate<MemoryHolder>())
            {
                await MemoryPack.MemoryPackSerializer.SerializeAsync(type, stream.Value, model).AsTask().AsAirTask();
                await stream.Value.FlushAsync().AsAirTask();
                stream.Value.Position = 0;
                tc.TrueData = stream.Value.ToArray();
            }
            return tc;
        }
        /// <summary>
        /// 反序列化一个TypeCouple
        /// </summary>
        /// <param name="type"></param>
        /// <param name="bytes"></param>
        /// <param name="length"></param>
        /// <returns></returns>
        public async AirTask<object> DeSerialize(Type type, byte[] bytes, int length = -1)
        {
            object cache;
            using (var stream = Framework.Pool.Allocate<MemoryHolder>())
            {
                stream.Value.Read(bytes, 0, length == -1 ? bytes.Length : length);
                cache = await MemoryPack.MemoryPackSerializer.DeserializeAsync(type, stream.Value);
                stream.Value.Position = 0;
            }
            return cache;
        }
        /// <summary>
        /// 反序列化一个TypeCouple
        /// </summary>
        /// <param name="couple"></param>
        /// <returns></returns>
        public async AirTask<object> DeSerialize(TypeCouple couple)
        {
            return await DeSerialize(couple.TrueType, couple.TrueData);
        }

        /// <summary>
        /// 获取可读写路径存档路径
        /// </summary>
        /// <param name="relativePath"></param>
        /// <returns></returns>
        public string GetPersistentPath(string relativePath) => Path.Combine(Application.persistentDataPath, relativePath);

        /// <summary>
        /// 写入文件到存档目录
        /// </summary>
        /// <param name="relativePath"></param>
        /// <param name="fileContent"></param>
        /// <returns></returns>
        public async AirTask WriteToFile(string relativePath, byte[] fileContent)
        {
            string path = GetPersistentPath(relativePath);
            using (FileStream fs = File.OpenWrite(path))
            {
                await fs.WriteAsync(fileContent, 0, fileContent.Length).AsAirTask();
            }
        }




        //生成TypeCouple
        private async AirTask GenereteMedium()
        {
            couples.Clear();
            foreach (var kp in models)
            {
                var tc = await Serialize(kp.Key, kp.Value);
                couples.Add(tc);
            }
            await AirTask.CompletedTask;
        }
        //序列化数据
        private async AirTask<byte[]> SerializeData()
        {
            byte[] result;
            using (var stream = Framework.Pool.Allocate<MemoryHolder>())
            {
                await MemoryPack.MemoryPackSerializer.SerializeAsync(TypeValue<List<TypeCouple>>.Value, stream.Value, couples).AsTask().AsAirTask();
                await stream.Value.FlushAsync().AsAirTask();
                result = stream.Value.ToArray();
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


        public async AirTask SaveAllAsync()
        {
            await GenereteMedium();
            var bytes = await SerializeData();
            Debug.Log(bytes.Length);
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
