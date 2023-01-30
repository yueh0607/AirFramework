using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 继承此抽象类实现自定义行为的池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class AbstractPool<T> : GenericPool<T> where T : class
    {


        public abstract T OnCreateItem();
        public abstract void OnAllocateItem(T item);
        public abstract void OnDestroyItem(T item);
        public abstract void OnRecycleItem(T item);

        public AbstractPool()  : base()
        { 
            base.onCreate = OnCreateItem;
            base.onDestroy = OnDestroyItem;
            base.onAllocate = OnAllocateItem;
            base.onDestroy = OnDestroyItem;
        }

    }
}
