/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 该池的行为自动添加生命解析
 */

using System;

namespace AirFramework
{
    /// <summary>
    /// 能自动管理生命的池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class AutoBindPool<T> : GenericPool<T> where T : class 
    {

        public void OnBindItemPool(T item)
        {
            //如果可以被池自动管理，则绑定到池，标记未回收
            if (item is IPoolBindable) { var it = ((IPoolBindable)item); it.ThisPool = this; it.IsRecycled = false; }
        }
   

        public void OnUnBindItemPool(T item)
        {
            //实现可被池自动管理的对象，标记回收
            if (item is IPoolBindable) ((IPoolBindable)item).IsRecycled = true;
        }

        public AutoBindPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate,onDestroy,onRecycle,onAllocate)
        {
            base.onRecycle += OnUnBindItemPool;
            base.onAllocate += OnBindItemPool;
        }

    }
}
