using System;

namespace AirFramework
{
    public interface IUnit : IDisposable
    {
        /// <summary>
        /// 是否已经释放
        /// </summary>
        bool Disposed { get; }


       
        
    }
}
