using System;

namespace AirFramework
{
    /// <summary>
    /// 用于实现支持using释放，可以自主回收到池的类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class PoolableObject<T>:Unit,IValueContainer<T>,IPoolable,IAutoPoolable where T:class,new()
    {
        /// <summary>
        /// 模板对象的真实值
        /// </summary>
        public T Value { get => value; }
        protected T value = new();

        /// <summary>
        /// 绑定回收到的池
        /// </summary>
        public IObjectPool ThisPool { get; set; } = null;

        
        /// <summary>
        /// 当前对象是否已经回收
        /// </summary>
        public bool IsRecycled { get => isRecycled; set => isRecycled = value; }
        private bool isRecycled = false;


        /// <summary>
        /// 当获取时调用
        /// </summary>
        public abstract void OnAllocate();

        /// <summary>
        /// 当回收时调用
        /// </summary>
        public abstract void OnRecycle();

  
        /// <summary>
        /// 调用立刻回收对象到池，不会再刷新Disposed属性
        /// </summary>
        public override void Dispose()
        {
            OnDispose();
        }

        /// <summary>
        /// 回收时调用，自动进入对象池
        /// </summary>
        protected override void OnDispose()
        {
            this.RecycleSelf();
        }

    }
}
