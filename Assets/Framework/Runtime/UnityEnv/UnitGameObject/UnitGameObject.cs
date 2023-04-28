
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using YooAsset;

namespace AirFramework
{
    public abstract partial class UnitGameObject : IMessageReceiver
    {

        public bool IsAlive => MonoObject != null;
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
            if (!active) this.CloseLife();
            else this.StartLife();
            gameObject.SetActive(active);

        }


        public void SetParent(UnitGameObject obj_ref)
        {
            trasnform.SetParent(obj_ref.trasnform);
        }
        public void SetAsFisrtSlibing() => trasnform.SetAsFirstSibling();

        public void SetAsLastSlibing() => trasnform.SetAsLastSibling();


    }

    public abstract partial class UnitGameObject : Unit, IPoolable
    {

        IObjectPool IPoolable.ThisPool { get; set; }

        public void OnAllocate()
        {
            if (IsAlive)
                gameObject.SetActive(true);
            OnAllocateObject();
        }
        public void OnRecycle()
        {
            if (IsAlive)
                gameObject.SetActive(false);
            OnRecycleObject();
        }

        protected override void OnDispose()
        {
            if (IsAlive)
                this.RecycleSelf();
        }

        /// <summary>
        /// 在申请时调用
        /// </summary>
        protected abstract void OnAllocateObject();
        /// <summary>
        /// 在回收到池时调用
        /// </summary>
        protected abstract void OnRecycleObject();

        /// <summary>
        /// 在完成初始化时调用
        /// </summary>
        public event Action OnCompleted = null;

        /// <summary>
        /// 用于将UnitGameObject隐式转换为GameObject，但是要求完成初始化
        /// </summary>
        /// <param name="entity"></param>
        public static implicit operator GameObject(UnitGameObject entity)
        {
            return entity.gameObject;
        }
    }
    public abstract partial class UnitGameObject
    {
        /// <summary>
        /// 释放后禁止使用，除非再进行加载,也只有释放只会才能重复加载
        /// </summary>
        /// <param name="entity"></param>
        internal protected void Destroy()
        {
            //如果托管资源没释放，则
            if (IsAlive)
                UnityEngine.Object.Destroy(gameObject);
            MonoObject = null;
            OnCompleted = null;

        }

        /// <summary>
        /// 实例化一个UnitGameObject，需要等待这个异步任务完成才能使用
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        internal protected async AsyncTask<T> Bind<T>() where T : UnitGameObject
        {
            if (IsAlive) throw new InvalidOperationException("Cannot initialize repeatly.");
            Type type = typeof(T);
            type.CheckAbstract();
            var handle = Framework.Res.LoadAsync<GameObject>(type.Name);
            await handle;

            //实例化到场景
            GameObject instance = GameObject.Instantiate(handle.GetAssetObject<GameObject>());
            instance.name = type.Name;
            handle.Release();

            return BindUnitAndGameObject<T>(instance, this);
        }
        /// <summary>
        /// 手动绑定进行实例化
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        /// <param name="entity"></param>
        /// <returns></returns>
        internal protected T Bind<T>(GameObject instance) where T : UnitGameObject
        {
            if (IsAlive) throw new InvalidOperationException("Cannot initialize repeatly.");
            Type type = typeof(T);
            type.CheckAbstract();

            // var obj_ref = Activator.CreateInstance<T>();
            return BindUnitAndGameObject<T>(instance, this);
        }
        //绑定
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
            entity.OnCompleted?.Invoke();

            return entity as T;
        }
    }
}
