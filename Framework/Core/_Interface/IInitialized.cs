using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 是否初始化
    /// </summary>
    public interface IInitialized
    {
        bool Initialized { get; }
    }
}
