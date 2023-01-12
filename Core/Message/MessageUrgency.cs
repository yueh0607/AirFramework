using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum MessageUrgency
    {
        /// <summary>
        /// 立刻的
        /// </summary>
        Immediately = 0,

        /// <summary>
        /// 非常紧急的
        /// </summary>
        VeryUrgent = 1,

        /// <summary>
        /// 紧急的
        /// </summary>
        Urgent=2,

        /// <summary>
        /// 重要的
        /// </summary>
        Important = 4,

        /// <summary>
        /// 平常的
        /// </summary>
        Common = 8,

        /// <summary>
        /// 不重要的
        /// </summary>
        UnImportant = 16,

        /// <summary>
        /// 可有可无的
        /// </summary>
        Dispensable = 32
    }
}
