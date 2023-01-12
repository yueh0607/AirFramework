using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 通用类型对象池
    /// </summary>
    /// <typeparam name="T">缓存对象类型</typeparam>
    public class GenericPool<T> : BasePool where T : class
    {

        /// <summary>
        /// 缓存对象类型
        /// </summary>
        public override Type ObjectType => typeof(T);

        /// <summary>
        /// 申请一个对象
        /// </summary>
        /// <returns></returns>
        public new T Allocate()
        {
            return base.Allocate() as T;
        }

        /// <summary>
        /// 缓存对象行为
        /// </summary>
        protected Func<T> onCreateItem = null;
        /// <summary>
        /// 缓存对象行为
        /// </summary>
        protected Action<T> onDestroyItem = null, onReleaseItem = null, onAllocateItem = null;


        /// <summary>
        /// 仅对子类开放的无参数构造
        /// </summary>
        protected GenericPool() { }

        /// <summary>
        /// 根据对象行为初始化
        /// </summary>
        /// <param name="onCreate">创建时委托</param>
        /// <param name="onDestroy">销毁时委托</param>
        /// <param name="onRelease">放回时委托</param>
        /// <param name="onAllocate">申请时委托</param>
        /// <exception cref="NullReferenceException"></exception>
        public GenericPool(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRelease = null, Action<T> onAllocate = null)
        {
            onCreateItem = onCreate ?? throw new NullReferenceException("OnCreate Function cannot be null!");
            onDestroyItem = onDestroy;
            onReleaseItem = onRelease;
            onAllocateItem = onAllocate;
        }

        /// <summary>
        /// 当创建对象时调用
        /// </summary>
        /// <returns>对象实例引用</returns>
        protected override object OnCreateItem()
        {
            return onCreateItem();
        }

        /// <summary>
        /// 当申请对象时调用
        /// </summary>
        /// <param name="item"></param>
        protected override void OnAllocateItem(object item)
        {
            onAllocateItem?.Invoke((T)item);
        }

        /// <summary>
        /// 当对象销毁时调用
        /// </summary>
        /// <param name="item"></param>
        protected override void OnDestroyItem(object item)
        {
            onDestroyItem?.Invoke((T)item);
        }

        /// <summary>
        /// 当对象放回时调用
        /// </summary>
        /// <param name="item"></param>
        protected override void OnReleaseItem(object item)
        {
            onReleaseItem?.Invoke((T)item);
        }

        /// <summary>
        /// 用于转换为字符串类型，包含数量和类型
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return $"GenericPool{{Count={pool.Value.Count},Type={ObjectType.Name}}}";
        }
    }
}
