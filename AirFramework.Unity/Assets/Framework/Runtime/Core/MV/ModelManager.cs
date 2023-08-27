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
            using (MemoryStream stream  = new MemoryStream(bytes))
            {
                cache = await MemoryPack.MemoryPackSerializer.DeserializeAsync(type, stream).AsTask().AsAirTask();
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
            if(couple == null) throw new ArgumentNullException(nameof(couple)+" is null");
            return await DeSerialize(couple.TrueType, couple.TrueData)??throw new InvalidCastException("DeSerialize Failed");
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
            Directory.CreateDirectory(Path.GetDirectoryName(path));
            using (FileStream fs = File.Create(path))
            {
                await fs.WriteAsync(fileContent, 0, fileContent.Length).AsAirTask();
            }
        }
        /// <summary>
        /// 从存档目录读取文件
        /// </summary>
        /// <param name="relativePath"></param>
        /// <returns></returns>
        public async AirTask<byte[]> ReadFromFile(string relativePath)
        {
            string path = GetPersistentPath(relativePath);
            using (FileStream fs = File.OpenRead(path))
            {
                byte[] array = new byte[fs.Length];
                await fs.ReadAsync(array).AsTask().AsAirTask();
                return array;
            }
        }


        //生成全部Model的TypeCouple
        private async AirTask GenereteMedium()
        {
            foreach (var couple in couples) Framework.Pool.Recycle(couple);
            couples.Clear();
            foreach (var kp in models)
            {
                var tc = await Serialize(kp.Key, kp.Value);
                couples.Add(tc);
            }
            await AirTask.CompletedTask;
        }

        private async AirTask ReadMedium()
        {
            foreach (var cp in couples)
            {
                IModel model =(IModel)await DeSerialize(cp);
                if (model == null) continue;
                if(!models.ContainsKey(cp.TrueType)) models.Add(cp.TrueType, model);
                else
                {
                    models[cp.TrueType] = model;
                }
            }
        }
        //序列化数据
        private async AirTask<byte[]> SerializeData()
        {
            byte[] result;
            using (var stream = Framework.Pool.Allocate<MemoryHolder>())
            {
                await MemoryPack.MemoryPackSerializer.
                    SerializeAsync(TypeValue<List<TypeCouple>>.Value, stream.Value, couples).AsTask().AsAirTask();
                await stream.Value.FlushAsync().AsAirTask();
                result = stream.Value.ToArray();
            }
            return result;
        }
        //反序列化数据
        private async AirTask DeSerializeData(byte[] array)
        {
            foreach (var couple in couples) Framework.Pool.Recycle(couple);
            using (var stream = new MemoryStream(array))
            {
                
                List<TypeCouple> temp = (List<TypeCouple>)(await MemoryPack.MemoryPackSerializer.
                    DeserializeAsync(TypeValue<List<TypeCouple>>.Value, stream).AsTask().AsAirTask());
                couples.AddRange(temp);
            }
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


        private const string modelPath = "AirFramework/Models.bytes";
        public async AirTask SaveAllAsync()
        {
            await GenereteMedium();
            var bytes = await SerializeData();
            await WriteToFile(modelPath, bytes);
        }

        public async AirTask LoadAllAsync()
        {
            if (!File.Exists(GetPersistentPath(modelPath)))
            {
                await AirTask.CompletedTask;
                return;
            }
            var bytes = await ReadFromFile(modelPath);
            await DeSerializeData(bytes);
            await ReadMedium();
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
