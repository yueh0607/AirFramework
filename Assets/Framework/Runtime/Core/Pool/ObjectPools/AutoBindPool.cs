/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.24
 * Description : 
 * 该池的行为自动添加池绑定，对象将自动绑定该池
 */

using System;

namespace AirFramework
{
    /// <summary>
    /// 管理可以自动绑定的对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class AutoBindPool<T> : GenericPool<T> where T : class, IPoolable
    {
        //回收
        public void OnEnterPool(T item)
        {
            item.IsRecycled = true;
            item.OnRecycle();
        }

        //申请
        public void OnExitPool(T item)
        {
            item.IsRecycled = false;
            item.ThisPool = this;
            item.OnAllocate();
        }

        public AutoBindPool(Func<T> onCreate = null, Action<T> onDestroy = null) : base(onCreate, onDestroy, null, null)
        {
            base.onRecycle += OnEnterPool;
            base.onAllocate += OnExitPool;


        }

    }
}
