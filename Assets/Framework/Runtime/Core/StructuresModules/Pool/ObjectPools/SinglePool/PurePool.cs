using System;
using System.Collections.Generic;
namespace AirFramework
{
    /// <summary>
    /// 纯净池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class PurePool<T> : Unit, IPool<T>
    {
        /// <summary>
        /// 缓存数量
        /// </summary>
        public int Count => queue.Count;
 

        private readonly Queue<T> queue = new Queue<T>();


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

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public T Allocate()
        {
            if (Count == 0) return onCreate();
            var item = queue.Dequeue();
            onAllocate?.Invoke(item);
            return item;
        }
        /// <summary>
        /// 回收对象
        /// </summary>
        /// <param name="item"></param>
        public void Recycle(T item)
        {
            onRecycle?.Invoke(item);
            queue.Enqueue(item);
        }
        /// <summary>
        /// 清空缓存
        /// </summary>
        public void Clear()
        {
            while (Count != 0) onDestroy?.Invoke(queue.Dequeue());
        }

        protected override void OnDispose()
        {
            Clear();
        }


        public PurePool(Func<T> onCreate, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null)
        {
            this.onCreate = onCreate;
            this.onAllocate += onAllocate;
            this.onRecycle += onRecycle;
            this.onDestroy += onDestroy;
        }
    }
}
