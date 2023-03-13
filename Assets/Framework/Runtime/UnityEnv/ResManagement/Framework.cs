using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Framework
    {


        /// <summary>
        /// 调试日志管理器
        /// </summary>
        [DebuggerHidden]
        public static ResManager Res { get; } = new ResManager();
    }

}
