/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * Unit为Framework全局基类，所有来着Framework的一般类型均继承Unit，统一死亡周期
 * 同时实现IUnit接口，实现using释放对象内资源
 * 在设计思路里Unit基类的Disposed代表对象已经被释放，此时不该继续使用这个对象，即时对象的实例仍然被用户持有
 * 同时Unit接入ID，方便调试和索引
 */

using System;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 框架内所有类型的基类
    /// </summary>
    public abstract partial class Unit : IUnit, IMessageReceiver
    {
        private bool _disposed = false;
        public bool Disposed
        {
            get { return _disposed; }
            set { _disposed = value; }
        }


        /// <summary>
        /// 释放
        /// </summary>

        public virtual void Dispose()
        {
            if (_disposed)
            {
                throw new InvalidOperationException("Repeat Dispose!");
            }
            _disposed = true;
            OnDispose();
        }

        /// <summary>
        /// 当调用Dispose时调用
        /// </summary>
        protected abstract void OnDispose();

        

    }

    public abstract partial class Unit : IUnit
    {
        /// <summary>
        /// ID管理器
        /// </summary>
        public static UIDGenerator IDs { get; private set; } = new UIDGenerator();


        private long _id;
        /// <summary>
        /// 存活唯一ID
        /// </summary>
        public long ID
        {
            get => _id;
            private set => _id = value;
        }



        public Unit()
        {
            _id = IDs.Allocate();
        }
        ~Unit()
        {
            IDs.Release(_id);
            if (!Disposed) Dispose();
        }

        //private static Dictionary<long,WeakReference> _references= new Dictionary<long,WeakReference>();
        //public static object GetRef(long id)
        //{
        //    if() 
        //}
        //public static T GetRef<T>(long id)
        //{

        //}


    }



    public abstract partial class Unit : IEquatable<Unit>
    {
        public bool Equals(Unit other) => this.ID == other.ID;

        public override bool Equals(object obj) => base.Equals(obj);

        public override int GetHashCode() => base.GetHashCode();

        public override string ToString() => $"[{this.GetType().FullName},ID={ID}]";
        public static bool operator ==(Unit a, Unit b) => a.ID == b.ID;
        public static bool operator !=(Unit a, Unit b) => a.ID != b.ID;


    }
}
