using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class LogManager : GlobalManager
    {

        public ILogger Logger { get; set; }

        /// <summary>
        /// 是否开启日志
        /// </summary>
        public bool Enable { get; set; } = true;
        public bool Record { get; set; } = true;
        public override string Name => "LogManager";




        /// <summary>
        /// 普通日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void L(object message,params object[] parm)
        {
            if(Enable)
            Logger.Log(message, parm);
        }
        /// <summary>
        /// 警告日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void W(object message, params object[] parm)
        {
            if (Enable)
                Logger.LogWarnning(message, parm);
        }
        /// <summary>
        /// 错误日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void E(object message, params object[] parm)
        {
            if (Enable)
                Logger.LogError(message, parm);
        }
        /// <summary>
        /// 异常
        /// </summary>
        /// <param name="exception"></param>
        public void E(Exception exception)
        {
            if (Enable)
                Logger.LogException(exception);
        }

        protected override void OnDispose()
        {
          
        }
    }
}
