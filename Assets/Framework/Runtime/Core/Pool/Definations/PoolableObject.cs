/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 通过实现IPooable和IAutoPoolable来实现托管池和自回收，再通过Dispose实现using释放
 * 实现本模板可以快捷创建密封类和非密封类的完整托管池类型，通过Value封装调用
 * 直接调用Dispose方法直接回收到池内，如果是通过PoolManager申请，回收时将自动重置
 */

using System;

namespace AirFramework
{
    /// <summary>
    /// 用于实现支持using释放，可以自主回收到池的类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class PoolableObject<T> : NotDisposedUnit, IPoolable where T : class
    {

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
        /// 当申请时由对象池调用,如非必要请勿主动调用
        /// </summary>
        public abstract void OnAllocate();

        /// <summary>
        /// 当回收时由对象池调用，如非必要请勿主动调用
        /// </summary>
        public abstract void OnRecycle();


        /// <summary>
        /// 回收时调用，自动进入对象池
        /// </summary>
        protected override void OnDispose()
        {
            this.RecycleSelf();
        }


        private Action disposeAction = null;
        public Action DisposeAction
        {
            get
            {
                if (disposeAction == null) disposeAction = Dispose;
                return disposeAction;
            }
        }
    }
}
