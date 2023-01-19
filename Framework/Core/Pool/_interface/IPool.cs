using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IPool : IUnit
    {
        /// <summary>
        /// 池容量
        /// </summary>
        int Count { get; }

        /// <summary>
        /// 清空缓存
        /// </summary>
        void Clear();
        
    }
}
