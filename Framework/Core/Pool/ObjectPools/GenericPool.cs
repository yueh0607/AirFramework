/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 实现存储System.Object类型的通用池，该池提供了统一规范的对象池功能，处理了IAutoPoolable相关的逻辑
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 反射创建的通用泛型池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class GenericPool<T> : ObjectPool, IGenericPool<T> where T : class
    {
        #region 行为委托

        /// <summary>
        /// 创建时调用该委托对象返回引用对象
        /// </summary>
        protected Func<T> onCreate = null;
        /// <summary>
        /// 当申请对象时，回收对象时，销毁对象时，分别调用的委托对象
        /// </summary>
        protected Action<T> onAllocate = null, onRecycle = null, onDestroy = null;

        #endregion

        #region 关键字段
        //通用池缓存队列
        private Queue<T> pool = new Queue<T>();
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
        public GenericPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null)
        {
            this.onCreate = onCreate ?? Extensions.DefaltActivatorCreate<T>;
            this.onDestroy += onDestroy;
            this.onRecycle += onRecycle;
            this.onAllocate += onAllocate;
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
            if (pool.Count == 0 || Count > MaxCapacity) item = onCreate();
            else item = pool.Dequeue();
            //执行申请时行为委托
            onAllocate?.Invoke(item);

            //如果可以被池自动管理，则绑定到池，标记未回收
            if (item is IAutoPoolable) { var it = ((IAutoPoolable)item); it.ThisPool = this; it.IsRecycled = false; }
            //注册生命周期
            if(item is ILifeCycle) Framework.LifeCycle.AnalyseAddAll(item);
            return item;

        }
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public virtual T Allocate() { return (T)AllocateObj(); }
        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>
        public override void RecycleObj(object item)
        {
            //如果不属于该池，则不回收
            T it = item as T;
            if (it == null) return;
            //如果是池类型，则抛出异常
            //if (item is IPool) throw new Exception("IPool cannot be recycled!");

            //执行回收委托
            onRecycle?.Invoke(it);
            //实现可被池自动管理的对象，标记回收
            if (item is IAutoPoolable) ((IAutoPoolable)item).IsRecycled = true;
            //移除生命周期
            if (item is ILifeCycle) Framework.LifeCycle.AnalyseRemoveAll(item);
            //入池
            pool.Enqueue(it);
        }

        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>
        public virtual void Recycle(T item)
        {
            RecycleObj(item);
        }
        #endregion

        #region 拓展行为
        /// <summary>
        /// 清空缓存
        /// </summary>
        public override void Clear()
        {
            while (pool.Count != 0) onDestroy?.Invoke(pool.Dequeue());
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
                item = onCreate();
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
                onDestroy?.Invoke(pool.Dequeue());
            }

        }
        #endregion
    }
}
