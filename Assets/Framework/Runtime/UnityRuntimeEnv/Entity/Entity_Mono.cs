using System;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace AirFramework
{
    /// <summary>
    /// 带有Mono字段的Entity
    /// </summary>
    public class EntityMono : Entity
    {
        public EntityRef MonoEntity { get; private set; }
        public Type EntityType => MonoEntity.EntityType;
        public GameObject gameObject=>MonoEntity?.gameObject;
        public Transform trasnform=>MonoEntity?.transform;
        public T GetComponent<T>()where T:Component=>MonoEntity?.GetComponent<T>();

        public static async AsyncTask<T> CreateAsync<T>() where T : EntityMono,new()
        {
            T entity = new T();
            var go = await Framework.Res.LoadAsync<GameObject>(typeof(T).Name);
            go = await Framework.Res.InstantiateAsync(go);
            entity.MonoEntity = go.AddComponent<EntityRef>();
            entity.MonoEntity.EntityValue = entity;
            entity.MonoEntity.EntityType= typeof(T);
            return entity;
        }
        
        protected EntityMono()
        {
            this.StartLifeCycle();
        }
        
        ~EntityMono() 
        {
            this.CloseLifeCycle();
            GameObject.Destroy(gameObject);
        }

        
    }


}
