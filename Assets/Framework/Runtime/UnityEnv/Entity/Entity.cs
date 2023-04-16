
using System;
using UnityEngine;
using UnityEngine.UIElements;

namespace AirFramework
{
    public abstract partial class Entity : IPoolable,IMessageReceiver
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

        public void SetParent(Entity entity)
        {
            trasnform.SetParent(entity.trasnform);
        }
        public void SetAsFisrtSlibing()=>trasnform.SetAsFirstSibling();
        
        public void SetAsLastSlibing()=>trasnform.SetAsLastSibling();
    }

    public abstract partial class Entity : IPoolable, IMessageReceiver
    {
        bool IPoolable.IsRecycled { get; set; }
        IObjectPool IPoolable.ThisPool { get; set; }

        public void OnAllocate()
        {
            this.SetActive(true);
            OnAllocateEntity();
        }
        public void OnRecycle()
        {
            this.SetActive(false);
            OnRecycleEntity();
        }

        protected abstract void OnAllocateEntity();
        protected abstract void OnRecycleEntity();
        protected abstract void OnCreateEntity();
        
        protected abstract void OnDestroyEntity();

        public Entity() =>OnCreateEntity();
        ~Entity()=>OnDestroyEntity();

        public static implicit operator GameObject(Entity entity)
        {
            return entity.gameObject;
        }
    }
    public abstract partial class Entity : IPoolable, IMessageReceiver
    {
        public static void Destroy(Entity entity)
        {
            UnityEngine.Object.Destroy(entity.gameObject);
        }

        public static T Instantiate<T>() where T : Entity
        {
            var origin = CheckAndLoad<T>();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(origin);
            return BindEntityAndGameObject<T>(instance);
        }
        public static T Instantiate<T>(Entity parent) where T : Entity
        {
            var origin = CheckAndLoad<T>();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(origin,parent.MonoEntity.transform);
            return BindEntityAndGameObject<T>(instance);
        }

        public static T Instantiate<T>(Entity parent,Vector3 postion,Quaternion rotation) where T : Entity
        {
            var origin = CheckAndLoad<T>();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(origin,postion,rotation ,parent.MonoEntity.transform);
            return BindEntityAndGameObject<T>(instance);
        }

        public static T Instantiate<T>(Entity parent, bool worldPositionStays = false) where T : Entity
        {
            var origin = CheckAndLoad<T>();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(origin, parent.MonoEntity.transform, worldPositionStays);

            return BindEntityAndGameObject<T>(instance);
        }

        private static GameObject CheckAndLoad<T>()
        {
            if (typeof(T).IsAbstract) throw new InvalidOperationException("can't Instantiate a abstract type");
            //加载预制体
            GameObject origin = Framework.Res.Load<GameObject>(typeof(T).Name);
            return origin;
        }
        private static T BindEntityAndGameObject<T>(GameObject obj) where T : Entity
        {
            var entity = Activator.CreateInstance<T>();
            GameObject.DontDestroyOnLoad(obj);
            //为物体添加引用组件
            var RefCom = obj.AddComponent<EntityRef>();
            //申请实例引用
            //T entity = Framework.Pool.Allocate<T>();
            //更新Entity属性
            entity.MonoEntity = RefCom;
            //更新EntityRef属性
            RefCom.EntityValue = entity;
            RefCom.EntityType = entity.GetType();
            return entity;
        }
    }
}
