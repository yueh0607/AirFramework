﻿/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * Unit为Framework全局基类，所有来着Framework的一般类型均继承Unit，统一死亡周期
 * 同时实现IUnit接口，实现using释放对象内资源
 * 在设计思路里Unit基类的Disposed代表对象已经被释放，此时不该继续使用这个对象，即时对象的实例仍然被用户持有
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine.Pool;

namespace AirFramework
{
    /// <summary>
    /// 框架内所有类型的基类
    /// </summary>
    public abstract partial class Unit : IUnit
    {
        protected bool _disposed = false;
        public bool Disposed => _disposed;

        /// <summary>
        /// 释放非托管资源
        /// </summary>
        
        public virtual void Dispose()
        {
            _disposed= true;
            OnDispose();
        }

        /// <summary>
        /// 当调用Dispose时调用
        /// </summary>
        protected abstract void OnDispose();

     
    }

    public abstract partial class Unit:IUnit
    {
        private static UIDGenerator generator = new(100);

        private ulong _id;
        //唯一ID
        public ulong ID
        {
            get => _id;
            private set=> _id = value;
        }
        public Unit()
        {
            _id=generator.Allocate();
        }
        ~Unit()
        {
            generator.Recycle(_id);
        }



    }
}
