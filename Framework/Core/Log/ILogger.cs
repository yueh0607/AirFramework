using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface ILogger
    {
        /// <summary>
        /// 常规日志
        /// </summary>
        public void Log(object obj,params object[] param);
        /// <summary>
        /// 警告日志
        /// </summary>
        public void LogWarnning(object obj, params object[] param);
        /// <summary>
        /// 错误日志
        /// </summary>
        public void LogError(object obj, params object[] param);
        /// <summary>
        /// 异常日志
        /// </summary>
        public void LogException(Exception exception);
       

    }
}
