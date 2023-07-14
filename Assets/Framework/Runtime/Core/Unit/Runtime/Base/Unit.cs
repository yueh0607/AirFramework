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
    public abstract partial class Unit : IDisposedUnit
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

            Parent?.Remove(this, false);
            Parent= null;
            foreach(var c in Childs.Value)
            {
                c.Value.Dispose();
            }
            foreach(var c in Components.Value)
            {
                c.Value.Dispose();
            }
       
        }

        /// <summary>
        /// 当调用Dispose时调用
        /// </summary>
        protected abstract void OnDispose();



    }

    public abstract partial class Unit : IUniqueID
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
            childs?.Dispose();
            components?.Dispose();
            childs= null;
            components= null;
        }
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

    public abstract partial class Unit
    {

        private UnitDictionary<long, Unit> childs=null;
        public UnitDictionary<long, Unit> Childs
        {
            get
            {
                if(childs==null) childs = Framework.Pool.Allocate<UnitDictionary<long, Unit>>();
                return childs;
            }
        }
        private UnitDictionary<Type,Unit> components=null;

        public UnitDictionary<Type, Unit> Components
        {
            get
            {
                if (components == null) components = Framework.Pool.Allocate<UnitDictionary<Type, Unit>>();
                return components;
            }
        }

        public bool IsComponent { get; set; } = false;
        public Unit Parent { get; private set; } = null;

        public void Add(Unit child, bool throwEx = true)
        {
            child.Parent = this;
            if (child.IsComponent)
            {
                Type type = child.GetType();
                if (throwEx && Components.Value.ContainsKey(type)) throw new InvalidOperationException("An entity is prohibited from having two identical components");
                Components.Value.Add(type, child);
            }
            else
            {
                if (throwEx && Childs.Value.ContainsKey(child.ID)) throw new InvalidOperationException("The entity is already a child of that entity");
                Childs.Value.Add(child.ID, child);
            }
        }
        public void Remove(Unit child, bool throwEx = false)
        {
            if (child.IsComponent)
            {
                Type type = child.GetType();
                if (throwEx && !Components.Value.ContainsKey(type)) throw new InvalidOperationException("The component does not exist");
                else Components.Value.Remove(type);
            }
            else
            {
                if (throwEx && !Childs.Value.ContainsKey(child.ID)) throw new InvalidOperationException("The child does not exist");
                else Childs.Value.Remove(child.ID);
            }
        }

        public Unit GetChild(long id)
        {
            if(Childs.Value.ContainsKey(id)) return Childs.Value[id];
            return null;
        }
        public Unit GetComponent(Type type)
        {
            if(Components.Value.ContainsKey(type)) return Components.Value[type];
            return null;
        }

        public T GetComponent<T>() where T:Unit
        {
            return (T) GetComponent(typeof(T));
        }
        public UnitList<T> GetComponents<T>() where T:Unit
        {
            UnitList<T> list = Framework.Pool.Allocate<UnitList<T>>();
            foreach(var component in Components.Value)
            {
                if (component.Value is T) list.Value.Add((T)(component.Value));
            }
            return list;
        }
    }



}
