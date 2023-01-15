using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 用于实现可被对象池管理的对象
    /// </summary>
    public interface IPoolable
    {
        /// <summary>
        /// 回收时
        /// </summary>
        void OnRecycle();
        /// <summary>
        /// 申请时
        /// </summary>
        void OnAllocate();
    }
}
