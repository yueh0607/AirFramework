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
        public static UIManager UI { get; } = new UIManager();


        /// <summary>
        /// 调试日志管理器
        /// </summary>
        [DebuggerHidden]
        internal static LogManager Log { get; } = new LogManager();
    }
}
