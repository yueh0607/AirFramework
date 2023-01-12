using AirFramework.Assets.AirFramework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 对象池基类
    /// </summary>
    public abstract class BasePool : Unit, IPool,IFormattable
    {
        /// <summary>
        /// 缓加载缓存池,线程安全容器
        /// </summary>
        protected Lazy<Stack<object>> pool = new Lazy<Stack<object>>();

        /// <summary>
        /// 对象类型
        /// </summary>
        public virtual Type ObjectType => typeof(object);


        /// <summary>
        /// 缓存数量
        /// </summary>
        public virtual int Count => pool.Value.Count;
        public virtual int MaxCount => int.MaxValue;

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public virtual object Allocate()
        {
            if(Count>MaxCount)
            {
                object item = OnCreateItem();
                OnReleaseItem(item);
                OnAllocateItem(item);
                return item;
            }
            if (Count == 0) Release(OnCreateItem());
            OnAllocateItem(pool.Value.Peek());
            return pool.Value.Pop();
        }

        /// <summary>
        /// 清空缓存
        /// </summary>
        public virtual void Clear()
        {
            Unload(Count);
        }

        /// <summary>
        /// 缓存预加载，可能阻塞
        /// </summary>
        /// <param name="count"></param>
        public virtual void Preload(int count)
        {
            for(int i=0;i<count;++i)
            {
                pool.Value.Push(OnCreateItem());
            }
        }
        public virtual void PreloadTo(int count)
        {
            int nCount = count - Count;
            for (int i = 0; i < nCount; ++i)
            {
                pool.Value.Push(OnCreateItem());
            }
        }
        /// <summary>
        /// 释放对象
        /// </summary>
        /// <param name="item"></param>
        public virtual void Release(object item)
        {
            if(item==null) throw new NullReferenceException("Cannot release a null item to pool!");
            if(Count>=MaxCount)
            {
                OnReleaseItem(item);
                OnDestroyItem(item);
                return;
            }
            OnReleaseItem(item);
            pool.Value.Push(item);
        }

        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public virtual void Unload(int count)
        {
            for(int i=0;i<count;++i)
            OnDestroyItem(pool.Value.Pop());
        }
        public virtual void UnloadTo(int count)
        {
            int nCount = Count - count;
            for (int i = 0; i < nCount; ++i)
                OnDestroyItem(pool.Value.Pop());
        }
        public virtual void AdjustTo(int count)
        {
            if (Count == count) return;
            if(Count>count) UnloadTo(Count);
            else PreloadTo(count);
        }


        /// <summary>
        /// 创建时调用
        /// </summary>
        /// <returns></returns>
        protected abstract object OnCreateItem();
        /// <summary>
        /// 销毁时调用
        /// </summary>
        /// <param name="item"></param>
        protected abstract void OnDestroyItem(object item);
        /// <summary>
        /// 申请时调用
        /// </summary>
        /// <param name="item"></param>
        protected abstract void OnAllocateItem(object item);
        /// <summary>
        /// 释放时调用
        /// </summary>
        /// <param name="item"></param>
        protected abstract void OnReleaseItem(object item);

        /// <summary>
        /// 池生命结束时调用
        /// </summary>
        protected override void OnDispose()
        {
            Clear();
        }

        public virtual string ToString(string format, IFormatProvider formatProvider)
        {
            return $"BasePool:{{Count={pool.Value.Count},Type=Object}}";
        }
    }
}
