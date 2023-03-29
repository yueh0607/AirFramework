/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 该池的行为自动添加生命解析,如果非生命对象加入，不会解析
 */

using System;

namespace AirFramework
{
    /// <summary>
    /// 能自动管理生命的池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class LifeCyclePool<T> : AutoBindPool<T> where T : class, IPoolable
    {

        public void OnAddItemLifeCycle(T item)
        {
            //注册生命周期
            if (item is ILifeCycle) Framework.LifeCycle.AnalyseAddAll(item);
        }


        public void OnRemoveItemLifeCycle(T item)
        {
            //移除生命周期
            if (item is ILifeCycle) Framework.LifeCycle.AnalyseRemoveAll(item);
        }

        public LifeCyclePool(Func<T> onCreate = null, Action<T> onDestroy = null) : base(onCreate, onDestroy)
        {
            base.onRecycle += OnRemoveItemLifeCycle;
            base.onAllocate += OnAddItemLifeCycle;
        }

    }
}
