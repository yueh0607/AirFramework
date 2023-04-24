/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * Unit为Framework全局基类，所有来着Framework的一般类型均继承Unit，统一死亡周期
 * 同时实现IUnit接口，实现using释放对象内资源
 * 在设计思路里Unit基类的Disposed代表对象已经被释放，此时不该继续使用这个对象，即时对象的实例仍然被用户持有
 * 同时Unit接入ID，方便调试和索引
 */

namespace AirFramework
{
    /// <summary>
    /// 框架内所有类型的基类
    /// </summary>
    public abstract partial class Unit : IUnit,IMessageReceiver
    {
        private bool _disposed = false;
        bool IUnit.Disposed
        {
            get { return _disposed; }
            set { _disposed = value; }
        }
        public bool Disposed => _disposed;

        /// <summary>
        /// 释放非托管资源
        /// </summary>

        public virtual void Dispose()
        {
            if(_disposed) return;    
            _disposed = true;
            OnDispose();
        }

        /// <summary>
        /// 当调用Dispose时调用
        /// </summary>
        protected abstract void OnDispose();



    }

    public abstract partial class Unit :
        IUnit
    {
        /// <summary>
        /// ID管理器
        /// </summary>
        public static UIDGenerator IDs { get; private set; } = new(100);


        private ulong _id;
        //唯一ID
        public ulong ID
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
            IDs.Recycle(_id);
            Dispose();
        }

    }
}
