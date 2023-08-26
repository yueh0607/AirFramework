/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 实现存储System.Object类型的通用池，该池提供了统一规范的对象池功能
 */

using System;
using System.Collections.Generic;
namespace AirFramework
{
    /// <summary>
    /// 反射创建的通用泛型池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public partial class GenericPool<T> : ObjectPoolBase, IGenericPool<T> where T : class
    {
        #region 行为委托

        /// <summary>
        /// 创建时调用该委托对象返回引用对象
        /// </summary>
        public Func<T> OnCreate { get; set; } = null;
        /// <summary>
        /// 当申请对象时，回收对象时，销毁对象时，分别调用的委托对象
        /// </summary>
        public Action<T> OnAllocate { get; set; } = null;
        public Action<T> OnRecycle { get; set; } = null;
        public Action<T> OnDestroy { get; set; } = null;


        protected virtual T OnItemCreate()
        {

            return OnCreate();
        }
        protected virtual void OnItemAllocate(T item)
        {
            OnAllocate?.Invoke(item);

        }

        protected virtual void OnItemRecycle(T item)
        {
            OnRecycle?.Invoke(item);
        }

        protected virtual void OnItemDestroy(T item)
        {
            OnDestroy?.Invoke(item);
        }


        #endregion

        #region 关键字段
        //通用池缓存队列
        protected readonly Queue<T> pool = new Queue<T>();




        /// <summary>
        /// 池缓存数量
        /// </summary>

        public override int Count => pool.Count;

        /// <summary>
        /// 池内对象类型
        /// </summary>

        public override Type ObjectType { get; } = typeof(T);

        /// <summary>
        /// 最大缓存容量,池内的缓存永远不会超过这个值
        /// </summary>

        public override int MaxCapacity { get; set; } = int.MaxValue;

        #endregion

        #region 构造器
        /// <summary>
        /// 只允许子类实现无参数构造方法，不指定行为
        /// </summary>

        protected GenericPool() { }

        /// <summary>
        /// 需要指定池各种行为
        /// </summary>
        /// <param name="objectType"></param>

#pragma warning disable S3427 // Method overloads with default parameter values should not overlap 
        public GenericPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null)
#pragma warning restore S3427 // Method overloads with default parameter values should not overlap 
        {
            this.OnCreate = onCreate ?? Pool.DefaltActivatorCreate<T>;
            this.OnDestroy += onDestroy;
            this.OnRecycle += onRecycle;
            this.OnAllocate += onAllocate;
        }
        /// <summary>
        /// 当对象销毁时调用
        /// </summary>

        protected override void OnDispose()
        {
            //清空池缓存
            pool.Clear();
        }
        #endregion

        #region 核心行为


        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public override object AllocateObj()
        {
            T item;
            //空池则创建,非空则从池取出
            if (pool.Count == 0) item = OnItemCreate();
            else item = pool.Dequeue();
            //执行申请时行为委托
            OnItemAllocate(item);

            return item;
        }

        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>
        public override void RecycleObj(object item)
        {
            //如果不属于该池，则不回收,需要抛出异常，以防灾难性后果
            T it = item as T;
            if (it == null) throw new ArgumentException("Error RecycleByType Operation:Not matched Type");
            //执行回收委托
            OnItemRecycle(it);
            //入池
            if (Count < MaxCapacity) pool.Enqueue(it);
            else OnItemDestroy(it);



        }


        /// <summary>
        /// 清空缓存
        /// </summary>

        public override void Clear()
        {
            while (pool.Count != 0) OnItemDestroy(pool.Dequeue());
        }

        /// <summary>
        /// 同步预加载
        /// </summary>
        /// <param name="count">缓存数量</param>

        public override void Preload(int count)
        {
            T item;
            for (int i = 0; i < count; ++i)
            {
                item = OnItemCreate();
                pool.Enqueue(item);
            }

        }

        /// <summary>
        /// 同步卸载缓存
        /// </summary>
        /// <param name="count">缓存数量</param>

        public override void Unload(int count)
        {
            //取小数量
            count = count > Count ? Count : count;
            for (int i = 0; i < count; ++i)
            {
                if (pool.Count != 0)
                    OnItemDestroy(pool.Dequeue());
            }
        }

        protected T GetOne()
        {
            return pool.Dequeue();
        }

        #endregion


    }
}
