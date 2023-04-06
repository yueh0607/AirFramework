
using System;
using UnityEngine;

namespace AirFramework
{
    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        public EntityRef MonoEntity { get; internal set; }
        public Type EntityType => MonoEntity.EntityType;
        public GameObject gameObject => MonoEntity?.gameObject;
        public Transform trasnform => MonoEntity?.transform;
        public T GetComponent<T>() where T : Component => MonoEntity?.GetComponent<T>();
        public T AddComponent<T>() where T : Component => MonoEntity?.gameObject.AddComponent<T>();

        public void SetActive(bool active) => gameObject.SetActive(active);



    }


    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        public override void OnAllocate()
        {
            gameObject.SetActive(true);
        }

        public override void OnRecycle()
        {
            gameObject.SetActive(false);
        }

    }
    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        public static T Instantiate<T>(EntityMono parent, Quaternion rotation, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return Instantiate<T>(parent, Vector3.zero, rotation, worldPositionStays);
        }
        public static T Instantiate<T>(EntityMono parent, Vector3 position, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return Instantiate<T>(parent, position, Quaternion.identity, worldPositionStays);
        }

        public static T Instantiate<T>(EntityMono parent, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return Instantiate<T>(parent, Vector3.zero, Quaternion.identity, worldPositionStays);
        }

        public static T Instantiate<T>(EntityMono parent, Vector3 position, Quaternion rotation, bool worldPositionStays = false) where T : EntityMono, new()
        {
            GameObject origin = Framework.Res.Load<GameObject>(typeof(T).Name);
            GameObject instance = GameObject.Instantiate(origin, parent.MonoEntity.transform, worldPositionStays);
            var RefCom = instance.AddComponent<EntityRef>();
            T entity = new();
            entity.MonoEntity = RefCom;
            RefCom.EntityValue = entity;
            RefCom.EntityType = typeof(T);
            return entity;
        }

        public static async AsyncTask<T> InstantiateAsync<T>(EntityMono parent, Quaternion rotation, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return await InstantiateAsync<T>(parent, Vector3.zero, rotation, worldPositionStays);
        }
        public static async AsyncTask<T> InstantiateAsync<T>(EntityMono parent, Vector3 position, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return await InstantiateAsync<T>(parent, position, Quaternion.identity, worldPositionStays);
        }

        public static async AsyncTask<T> InstantiateAsync<T>(EntityMono parent, bool worldPositionStays = false) where T : EntityMono, new()
        {
            return await InstantiateAsync<T>(parent, Vector3.zero, Quaternion.identity, worldPositionStays);
        }

        public static async AsyncTask<T> InstantiateAsync<T>(EntityMono parent, Vector3 position, Quaternion rotation, bool worldPositionStays = false) where T : EntityMono, new()
        {
            GameObject origin = await Framework.Res.LoadAsync<GameObject>(typeof(T).Name);
            GameObject instance = GameObject.Instantiate(origin, parent.MonoEntity.transform, worldPositionStays);
            var RefCom = instance.AddComponent<EntityRef>();
            T entity = new();
            entity.MonoEntity = RefCom;
            RefCom.EntityValue = entity;
            RefCom.EntityType = typeof(T);
            return entity;
        }

    }
}
