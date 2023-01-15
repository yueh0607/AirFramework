using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum ModuleState
    {
        /// <summary>
        /// 加载中
        /// </summary>
        Loading = 1,
        /// <summary>
        /// 启用状态
        /// </summary>
        Enabled= 2,
        /// <summary>
        /// 禁用状态
        /// </summary>
        Disabled = 4,
        
        /// <summary>
        /// 已经卸载
        /// </summary>
        Unloaded = 8
        

    }
}
