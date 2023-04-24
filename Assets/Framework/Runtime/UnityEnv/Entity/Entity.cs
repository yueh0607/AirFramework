
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using static UnityEngine.EventSystems.EventTrigger;

namespace AirFramework
{
    public abstract partial class Entity :SimpleUnit, IPoolable, IMessageReceiver
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
            if (!active) this.CloseLife(); else this.StartLife();
            gameObject.SetActive(active);

        }

        public void SetParent(Entity entity)
        {
            trasnform.SetParent(entity.trasnform);
        }
        public void SetAsFisrtSlibing() => trasnform.SetAsFirstSibling();

        public void SetAsLastSlibing() => trasnform.SetAsLastSibling();
    }

    public abstract partial class Entity : SimpleUnit, IPoolable, IMessageReceiver
    {
       // bool IPoolable.IsRecycled { get; set; }
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

        public override void Dispose()
        {
            base.Dispose(); 
            this.RecycleSelf();
        }

        protected abstract void OnAllocateEntity();
        protected abstract void OnRecycleEntity();
        protected abstract void OnCreateEntity();

        protected abstract void OnDestroyEntity();

        public Entity() => OnCreateEntity();
        ~Entity() => OnDestroyEntity();

        public static implicit operator GameObject(Entity entity)
        {
            return entity.gameObject;
        }
    }
    public abstract partial class Entity :SimpleUnit, IPoolable, IMessageReceiver
    {
 
        public static void Destroy(Entity entity)
        {
            UnityEngine.Object.Destroy(entity.gameObject);
            entity.Dispose();
           
        }

        protected static T Instantiate<T>(T entity) where T : Entity
        {
            Type type = entity.GetType();
            CheckAbstract(type);
            var handle = Framework.Res.LoadSync<GameObject>(type.Name);
            //(handle.GetAssetObject<GameObject>() is null).L();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(handle.GetAssetObject<GameObject>());
            instance.name = type.Name;
            handle.Release();

           // var entity = Activator.CreateInstance<T>();
            return BindEntityAndGameObject<T>(instance,entity);
        }

        protected static T Instantiate<T>(GameObject instance,Entity entity) where T : Entity
        {
            Type type = entity.GetType();
            CheckAbstract(type);
            instance.name = type.Name;

            // var entity = Activator.CreateInstance<T>();
            return BindEntityAndGameObject<T>(instance, entity);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining),DebuggerHidden]
        private static void CheckAbstract(Type entity)
        {
            if (entity.IsAbstract) throw new InvalidOperationException("can't Instantiate a abstract type");
        }
        private static T BindEntityAndGameObject<T>(GameObject obj,Entity entity) where T : Entity
        {
          
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
            return entity as T; 
        }
    }
}
