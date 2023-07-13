﻿/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.24
 * Description : 
 * 该池的行为自动添加池绑定，对象将自动绑定该池
 */

using System;
namespace AirFramework
{
    /// <summary>
    /// 管理可以自动管理的对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class ManagedPool<T> : TimeRecyclePool<T>, IManagedPool where T : class, IPoolable
    {

        #region 管理逻辑

        //回收
        public void OnEnterPool(T item)
        {
            item.Disposed = true;
            item.OnRecycle();
        }

        //申请
        public void OnExitPool(T item)
        {
            item.Disposed = false;
            item.ThisPool = this;
            item.OnAllocate();
        }

        public ManagedPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate, onDestroy, onRecycle, onAllocate)
        {
            base.OnRecycle += OnEnterPool;
            base.OnAllocate += OnExitPool;
        }
        #endregion

    }

}
