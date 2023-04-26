
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public abstract partial class UnitGameObject : SimpleUnit, IPoolable, IMessageReceiver
    {
        public bool IsAlive { get; internal set; } = true;
        /// <summary>
        /// Mono引用
        /// </summary>
        public MonoRef MonoObject { get; internal set; }
        /// <summary>
        /// 实体类型
        /// </summary>
        public Type UnitType => MonoObject.UnitType;
        /// <summary>
        /// 实体对应的GameObject
        /// </summary>
        public GameObject gameObject => MonoObject?.gameObject;
        /// <summary>
        /// 实体的transform
        /// </summary>
        public Transform trasnform => MonoObject?.transform;

        /// <summary>
        /// 获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T GetComponent<T>() where T : Component => MonoObject?.GetComponent<T>();
        /// <summary>
        /// 为实体添加组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public T AddComponent<T>() where T : Component => MonoObject?.gameObject.AddComponent<T>();
        /// <summary>
        /// 设置实体的显隐性
        /// </summary>
        /// <param name="active"></param>
        public void SetActive(bool active)
        {
            if (!active) this.CloseLife(); else this.StartLife();
            gameObject.SetActive(active);

        }


        public void SetParent(UnitGameObject obj_ref)
        {
            trasnform.SetParent(obj_ref.trasnform);
        }
        public void SetAsFisrtSlibing() => trasnform.SetAsFirstSibling();

        public void SetAsLastSlibing() => trasnform.SetAsLastSibling();


    }

    public abstract partial class UnitGameObject : SimpleUnit, IPoolable, IMessageReceiver
    {

        IObjectPool IPoolable.ThisPool { get; set; }

        public void OnAllocate()
        {
            this.SetActive(true);
            OnAllocateObject();
        }
        public void OnRecycle()
        {
            this.SetActive(false);
            OnRecycleObject();
        }

        public override void Dispose()
        {
            base.Dispose();
            if (IsAlive)
                this.RecycleSelf();

        }

        protected abstract void OnAllocateObject();
        protected abstract void OnRecycleObject();
        protected abstract void OnCreateObject();

        protected abstract void OnDestroyObject();

        public UnitGameObject() => OnCreateObject();
        ~UnitGameObject() => OnDestroyObject();

        public static implicit operator GameObject(UnitGameObject entity)
        {
            return entity.gameObject;
        }
    }
    public abstract partial class UnitGameObject : SimpleUnit, IPoolable, IMessageReceiver
    {

        public static void Destroy(UnitGameObject entity)
        {
            if (entity.IsAlive)
                UnityEngine.Object.Destroy(entity.gameObject);
            entity.MonoObject = null;
            entity.IsAlive = false;
            entity.Dispose();
        }

        protected static T Instantiate<T>(T entity) where T : UnitGameObject
        {
            Type type = entity.GetType();
            CheckAbstract(type);
            var handle = Framework.Res.LoadSync<GameObject>(type.Name);
            //(handle.GetAssetObject<GameObject>() is null).L();
            //实例化到场景
            GameObject instance = GameObject.Instantiate(handle.GetAssetObject<GameObject>());
            instance.name = type.Name;
            handle.Release();

            // var obj_ref = Activator.CreateInstance<T>();
            return BindUnitAndGameObject<T>(instance, entity);
        }

        protected static T Instantiate<T>(GameObject instance, UnitGameObject entity) where T : UnitGameObject
        {
            Type type = entity.GetType();
            CheckAbstract(type);


            // var obj_ref = Activator.CreateInstance<T>();
            return BindUnitAndGameObject<T>(instance, entity);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining), DebuggerHidden]
        private static void CheckAbstract(Type entity)
        {
            if (entity.IsAbstract) throw new InvalidOperationException("can't Instantiate a abstract type");
        }
        private static T BindUnitAndGameObject<T>(GameObject obj, UnitGameObject entity) where T : UnitGameObject
        {
            GameObject.DontDestroyOnLoad(obj);
            //为物体添加引用组件
            var RefCom = obj.AddComponent<MonoRef>();
            //申请实例引用
            //T obj_ref = Framework.Pool.Allocate<T>();
            //更新Entity属性
            entity.MonoObject = RefCom;
            //更新EntityRef属性
            RefCom.UnitValue = entity;
            return entity as T;
        }
    }
}
