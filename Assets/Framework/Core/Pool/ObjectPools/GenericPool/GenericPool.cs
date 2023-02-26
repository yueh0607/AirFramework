/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 实现存储System.Object类型的通用池，该池提供了统一规范的对象池功能
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;

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
        public Func<T> onCreate = null;
        /// <summary>
        /// 当申请对象时，回收对象时，销毁对象时，分别调用的委托对象
        /// </summary>
        public Action<T> onAllocate = null, onRecycle = null, onDestroy = null;

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
            this.onCreate = onCreate ?? Pool.DefaltActivatorCreate<T>;
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
            if (pool.Count == 0 ) item = onCreate();
            else item = pool.Dequeue();
            //执行申请时行为委托
            onAllocate?.Invoke(item);
            return item;
        }
        
        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>
        public override void RecycleObj(object item)
        {
            //如果不属于该池，则不回收
            T it = item as T;
            if (it == null) return;
            //执行回收委托
            onRecycle?.Invoke(it);
            //入池
            if (Count < MaxCapacity) pool.Enqueue(it);
            else onDestroy?.Invoke(it);
        }

        #endregion
    }
}
