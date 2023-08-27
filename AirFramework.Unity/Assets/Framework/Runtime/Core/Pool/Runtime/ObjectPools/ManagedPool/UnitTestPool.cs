﻿using System;

namespace AirFramework
{

    /// <summary>
    /// Unit测试池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitTestPool<T> : GenericPool<T> where T : class
    {

        protected override void OnItemAllocate(T item)
        {
         
            if (item is Unit unit)
            {
                unit.Disposed = false;
            }
            base.OnItemAllocate(item);
        }

        protected override void OnItemRecycle(T item)
        {
            
            if (item is Unit unit)
            {
                unit.Disposed = true;
            }
            base.OnItemRecycle(item);
        }

        public UnitTestPool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate, onDestroy, onRecycle, onAllocate)
        {


        }
    }
}
