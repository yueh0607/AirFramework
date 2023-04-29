
using System;
using UnityEngine;

namespace AirFramework
{

    public abstract partial class UnitGameObject 
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
        public Transform transform => MonoObject?.transform;

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
            if (IsAlive)
                gameObject.SetActive(active);

        }


        public void SetParent(UnitGameObject obj_ref)
        {
            transform.SetParent(obj_ref.transform);
        }
        public void SetAsFisrtSlibing() => transform.SetAsFirstSibling();

        public void SetAsLastSlibing() => transform.SetAsLastSibling();


    }

    public abstract partial class UnitGameObject : Unit, IPoolable
    {

        IObjectPool IPoolable.ThisPool { get; set; }

        public void OnAllocate()
        {
            this.SetActive(true);
        }
        public void OnRecycle()
        {
            this.SetActive(false);

        }

        protected override void OnDispose()
        {
            if (IsAlive)
                this.RecycleSelf();
        }

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
        public abstract void OnLoad();
        public abstract void OnUnload();


        ~UnitGameObject() => Unload();
        /// <summary>
        /// 释放后禁止使用，除非再进行加载,也只有释放只会才能重复加载
        /// </summary>
        /// <param name="entity"></param>
        public virtual void Unload()
        {
            OnUnload();
            //如果托管资源没释放，则
            if (IsAlive)
                UnityEngine.Object.Destroy(gameObject);
            MonoObject = null;
            OnCompleted = null;

        }

        /// <summary>
        /// 实例化一个UnitGameObject，需要等待这个异步任务完成才能使用，一定要传入一个继承UnitGameObject的非抽象类型
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        public async AsyncTask UnsafeBindAsync(Type type, UnitGameObject parent = null)
        {
            if (IsAlive) throw new InvalidOperationException("Cannot initialize repeatly.");
            type.CheckAbstract();
            CheckUnitGameObjectAlive(parent);
            var handle = Framework.Res.LoadAsync<GameObject>(type.Name);
            await handle;
            if (handle.AssetObject == null) throw new InvalidOperationException("Null Reference");
            //实例化到场景
            GameObject instance = parent == null ? GameObject.Instantiate(handle.GetAssetObject<GameObject>()) :
                GameObject.Instantiate(handle.GetAssetObject<GameObject>(), parent.transform);
            instance.name = type.Name;
            handle.Release();

            BindUnitAndGameObject(instance, this);
            return;

        }
        /// <summary>
        /// 异步绑定
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AsyncTask BindAsync<T>(UnitGameObject parent = null) where T : UnitGameObject
        {
            await UnsafeBindAsync(typeof(T), parent);
        }
        /// <summary>
        /// 同步绑定,注意，一定要传入一个继承UnitGameObject的非抽象类型
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        /// <param name="entity"></param>
        /// <returns></returns>
        public void UnsafeBindSync(Type type, UnitGameObject parent = null)
        {
            if (IsAlive) throw new InvalidOperationException("Cannot initialize repeatly.");
            CheckUnitGameObjectAlive(parent);
            type.CheckAbstract();
            var handle = Framework.Res.LoadSync<GameObject>(type.Name);
            if (handle.AssetObject == null) throw new InvalidOperationException("Null Reference");
            //实例化到场景
            //实例化到场景
            GameObject instance = parent == null ? GameObject.Instantiate(handle.GetAssetObject<GameObject>()) :
                GameObject.Instantiate(handle.GetAssetObject<GameObject>(), parent.transform);
            instance.name = type.Name;
            handle.Release();

            BindUnitAndGameObject(instance, this);

        }

        /// <summary>
        /// 同步绑定
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        /// <param name="entity"></param>
        /// <returns></returns>
        public void BindSync<T>(UnitGameObject parent = null) where T : UnitGameObject
        {
            UnsafeBindSync(typeof(T), parent);
        }

        /// <summary>
        /// 手动绑定进行实例化,注意，一定要传入一个继承UnitGameObject的非抽象类型
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        /// <param name="entity"></param>
        /// <returns></returns>
        public void UnsafeBindInstance(Type type, GameObject instance, UnitGameObject parent = null)
        {
            if (IsAlive) throw new InvalidOperationException("Cannot initialize repeatly.");
            
            type.CheckAbstract();
            if (instance == null) throw new InvalidOperationException("Null Reference");
            TrySetParent(this,parent);
            // var obj_ref = Activator.CreateInstance<T>();
            BindUnitAndGameObject(instance, this);

        }
        /// <summary>
        /// 手动绑定进行实例化
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        /// <param name="entity"></param>
        /// <returns></returns>
        public void BindInstance<T>(GameObject instance, UnitGameObject parent = null) where T : UnitGameObject
        {

            UnsafeBindInstance(typeof(T), instance);
        }

        private void TrySetParent(UnitGameObject current,UnitGameObject parent)
        {
            if (parent == null) return;
            if (!parent.IsAlive||!this.IsAlive) throw new InvalidOperationException("You must initialize this UnitGameObject! Try call LoadAsync or BindAsync Method");
            current.SetParent(parent);
        }
        private void CheckUnitGameObjectAlive(UnitGameObject unit)
        {
            if(unit == null) return;
            if(unit.IsAlive) throw new InvalidOperationException("You must initialize this UnitGameObject! Try call LoadAsync or BindAsync Method");
        }
        //绑定
        private static void BindUnitAndGameObject(GameObject obj, UnitGameObject entity)
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
            entity.OnLoad();
        }
    }
}
