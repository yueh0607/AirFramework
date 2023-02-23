using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface ILogger
    {

        public bool Enable { get; set; }

        /// <summary>
        /// 常规日志
        /// </summary>
        public void Log(object obj);
        /// <summary>
        /// 警告日志
        /// </summary>
        public void LogWarning(object obj);
        /// <summary>
        /// 错误日志
        /// </summary>
        public void LogError(object obj);
        /// <summary>
        /// 异常日志
        /// </summary>
        public void LogException(Exception exception);
       

    }
}
