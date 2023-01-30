/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * Unit为Framework全局基类，所有来着Framework的一般类型均继承Unit，统一死亡周期
 */

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
