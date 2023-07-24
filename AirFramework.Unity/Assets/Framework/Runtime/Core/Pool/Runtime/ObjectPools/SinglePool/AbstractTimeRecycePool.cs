/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 20:55:07
 * Description : Describe the function here.
************************************************************************************/

namespace AirFramework
{
    public abstract class AbstractTimeRecycePool<T> : TimeManagedPool<T> where T : class
    {
        public AbstractTimeRecycePool() : base(null)
        {
            base.OnCreate += OnCreateItem;
            base.OnDestroy += OnDestroyItem;
            base.OnRecycle += OnRecycleItem;
            base.OnAllocate += OnAllocateItem;
        }


        public abstract T OnCreateItem();
        public abstract void OnAllocateItem(T item);
        public abstract void OnRecycleItem(T item);

        public abstract void OnDestroyItem(T item);
    }
}

