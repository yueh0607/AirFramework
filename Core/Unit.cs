using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework.Assets.AirFramework
{
    /// <summary>
    /// 框架基类
    /// </summary>
    public abstract class Unit : IUnit
    {
        private bool disposed;
        /// <summary>
        /// 是否已经释放
        /// </summary>
        public bool Disposed => disposed;

        /// <summary>
        /// 当释放时调用
        /// </summary>
        protected abstract void OnDispose();

        /// <summary>
        /// 释放对象
        /// </summary>
        public virtual void Dispose()
        {
            if (!disposed)
            {
                OnDispose();
                disposed = true;
            }
        }

    }
}
