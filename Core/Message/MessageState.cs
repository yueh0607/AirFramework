using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum MessageState
    {
        /// <summary>
        /// 休息中
        /// </summary>
        Rset = 1,

        /// <summary>
        /// 等待中
        /// </summary>
        Wait = 2,


        /// <summary>
        /// 发布中
        /// </summary>
        Lock = 4
    }
}
