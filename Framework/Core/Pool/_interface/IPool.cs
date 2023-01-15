using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
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
