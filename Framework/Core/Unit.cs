using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class Unit : IUnit
    {
        protected bool _disposed = false;
        public bool Disposed => _disposed;

        /// <summary>
        /// using时主动释放
        /// </summary>
        public virtual void Dispose()
        {
            _disposed= true;
            OnDispose();
        }

        /// <summary>
        /// 释放时调用
        /// </summary>
        protected abstract void OnDispose();



    }
}
