
using System;
using UnityEngine;

namespace AirFramework
{
    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        /// <summary>
        /// Mono引用
        /// </summary>
        public EntityRef MonoEntity { get; internal set; }

        /// <summary>
        /// 实体类型
        /// </summary>
        public Type EntityType => MonoEntity.EntityType;


        /// <summary>
        /// 实体对应的GameObject
        /// </summary>
        public GameObject gameObject => MonoEntity?.gameObject;
        /// <summary>
        /// 实体的transform
        /// </summary>
        public Transform trasnform => MonoEntity?.transform;

        /// <summary>
        /// 获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T GetComponent<T>() where T : Component => MonoEntity?.GetComponent<T>();
        /// <summary>
        /// 为实体添加组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T AddComponent<T>() where T : Component => MonoEntity?.gameObject.AddComponent<T>();
        /// <summary>
        /// 设置实体的显隐性
        /// </summary>
        /// <param name="active"></param>
        public void SetActive(bool active)
        {
            if (!active) this.CloseLifeCycle(); else this.StartLifeCycle();
            gameObject.SetActive(active);

        }

        
        public static implicit operator GameObject(Entity entity)
        {
            return entity.gameObject;
        }
        
    }

    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        public override void OnAllocate()
        {
            this.SetActive(true);
        }

        public override void OnRecycle()
        {
            this.SetActive(false);
        }
    }
    public abstract partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        public static T Instantiate<T>(Entity parent, Quaternion rotation, bool worldPositionStays = false) where T : Entity, new()
        {
            return Instantiate<T>(parent, Vector3.zero, rotation, worldPositionStays);
        }
        public static T Instantiate<T>(Entity parent, Vector3 position, bool worldPositionStays = false) where T : Entity, new()
        {
            return Instantiate<T>(parent, position, Quaternion.identity, worldPositionStays);
        }
        public static T Instantiate<T>(Entity parent, bool worldPositionStays = false) where T : Entity, new()
        {
            return Instantiate<T>(parent, Vector3.zero, Quaternion.identity, worldPositionStays);
        }

        public static T Instantiate<T>(Entity parent, Vector3 position, Quaternion rotation, bool worldPositionStays = false) where T : Entity, new()
        {
            //加载预制体
            GameObject origin = Framework.Res.Load<GameObject>(typeof(T).Name);
            //实例化到场景
            GameObject instance = GameObject.Instantiate(origin, parent.MonoEntity.transform, worldPositionStays);
            //为物体添加引用组件
            var RefCom = instance.AddComponent<EntityRef>();
            //申请实例引用
            T entity = Framework.Pool.Allocate<T>();
            //更新Entity属性
            entity.MonoEntity = RefCom;
            //更新EntityRef属性
            RefCom.EntityValue = entity;
            RefCom.EntityType = typeof(T);
            return entity;
        }

        

    }
}
