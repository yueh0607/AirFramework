using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 基类接口
    /// </summary>
    public interface IUnit : IDisposable
    {
        /// <summary>
        /// 是否已经释放
        /// </summary>
        bool Disposed { get; }
    }
}
