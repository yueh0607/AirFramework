
using AirFramework;
using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class GenericPool<T> : PoolBase,IGenericPool<T> where T : class
    {

        /// <summary>
        /// 自旋锁
        /// </summary>
        private readonly object _lock = new object();

        // 池行为委托
        protected Func<T> onCreate = null;
        protected Action<T> onAllocate = null, onRecycle = null, onDestroy = null;

        //池队列
        private Queue<T> pool = new Queue<T>();
        /// <summary>
        /// 池缓存数量
        /// </summary>
        public override int Count => pool.Count;
        /// <summary>
        /// 对象类型
        /// </summary>
        public override Type ObjectType => typeof(T);

        private int maxCapacity = int.MaxValue;
        /// <summary>
        /// 最大缓存容量
        /// </summary>
        public override int MaxCapacity => maxCapacity;



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
            this.onCreate = onCreate ?? DefaultCreate;
            this.onDestroy += onDestroy;
            this.onRecycle += onRecycle;
            this.onAllocate += onAllocate;
        }

        //默认的反射创建方法
        private static T DefaultCreate() { return Activator.CreateInstance<T>(); }


        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public override object AllocateObj()
        {
            lock (_lock)
            {
                T item;
                if (pool.Count == 0)
                {
                    item = onCreate();
                    onRecycle?.Invoke(item);
                    if(Count<MaxCapacity)pool.Enqueue(item);
                }
                item = pool.Dequeue();
                onAllocate?.Invoke(item);
                if (item is IAutoPoolable) ((IAutoPoolable)item).ThisPool = this;
                return item;
            }
        }
        public virtual T Allocate() {return (T)AllocateObj(); }


        /// <summary>
        /// 清空缓存
        /// </summary>
        public override void Clear()
        {
            lock (_lock)
            {
                while (pool.Count != 0) onDestroy?.Invoke(pool.Dequeue());
            }
        }

        /// <summary>
        /// 预加载
        /// </summary>
        /// <param name="count"></param>
        public override void Preload(int count)
        {
            T item;
            for (int i = 0; i < count; ++i)
            {
                item = onCreate();
                onRecycle?.Invoke(item);
                pool.Enqueue(item);
            }
        }
        /// <summary>
        /// 回收对象
        /// </summary>
        /// <param name="item"></param>
        public override void RecycleObj(object item)
        {
            T it = item as T;
            if (it == null) return;
            //if (item is IPool) throw new Exception("IPool cannot be recycled!");
            onRecycle?.Invoke(it);
            pool.Enqueue(it);
        }
        
        public virtual void Recycle(T item)
        {
            RecycleObj(item);
        }
        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public override void Unload(int count)
        {
            lock (_lock)
            {
                for(int i=0;i<count&&pool.Count!=0;++i)
                {
                    onDestroy?.Invoke(pool.Dequeue());
                }
            }
        }
        /// <summary>
        /// 当消耗时
        /// </summary>
        protected override void OnDispose()
        {
            pool.Clear();
        }

        public override void SetMaxCapacity(int maxCapacity)
        {
            this.maxCapacity = maxCapacity > 0 ? maxCapacity : 0;
        }
    }
}
