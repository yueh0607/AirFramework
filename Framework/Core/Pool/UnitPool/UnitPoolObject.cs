using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 通过继承本类实现密封类默认池模板
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class UnitPoolObject<T> : GenericPoolObject, IValueContainer<T>, IUnitPoolable where T:new()
    {
        /// <summary>
        /// 模板值
        /// </summary>
        protected T value =new();

        /// <summary>
        /// 需要令该属性返回对应的池
        /// </summary>
        public IObjectPool ThisPool { get; set; } = null;

        /// <summary>
        /// 判定是否已经回收
        /// </summary>
        protected bool isRecycled = false;
        /// <summary>
        /// 判定是否已经回收
        /// </summary>
        public bool IsRecycled { get => isRecycled; }

        /// <summary>
        /// 获取密封类的值
        /// </summary>
        public T Value { get => value; }

        /// <summary>
        /// 当获取时调用
        /// </summary>
        public abstract void OnAllocateItem();

        /// <summary>
        /// 当回收时调用
        /// </summary>
        public abstract void OnRecycleItem();


        /// <summary>
        /// 由池调用，申请时
        /// </summary>
        public override void OnAllocate()
        {
            isRecycled = false;
            OnAllocateItem();
        }
        /// <summary>
        /// 由池调用，回收时
        /// </summary>
        public override void OnRecycle()
        {
            isRecycled= true;
            OnRecycleItem();
        }

        /// <summary>
        /// 回收时调用，自动进入对象池
        /// </summary>
        protected override void OnDispose()
        {
            if (ThisPool != null)
            {
                if (IsRecycled != true && !ThisPool.Disposed)
                {
                    ThisPool.RecycleObj(this);
                }
            }
        }
    }
}
