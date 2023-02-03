using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum AsyncTaskStatus
    {
        /// <summary>
        /// 表面当前任务正在执行
        /// </summary>
        Pending,
        /// <summary>
        /// 表明当前任务成功完成
        /// </summary>
        Successful,

        /// <summary>
        /// 表明任务已经失败
        /// </summary>
        Faulted,
    }
}
