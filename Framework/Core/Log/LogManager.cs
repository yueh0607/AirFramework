using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor.VersionControl;
using UnityEngine;

namespace AirFramework
{
    public class LogManager : GlobalManager
    {

        public ILogger Logger { get; set; }
        public IRecorder Recorder { get; set; }
        /// <summary>
        /// 是否开启日志
        /// </summary>
        public bool Enable { get; set; } = true;
        /// <summary>
        /// 是否记录日志
        /// </summary>
        public bool Record { get; set; } = true;

        public override string Name => "LogManager";
        /// <summary>
        /// 日志记录位置
        /// </summary>
        public string LogPath { get; set; } = "";
        /// <summary>
        /// 日志记录编码
        /// </summary>
        public Encoding encoding { get; set; } = Encoding.UTF8;

        public string FileName { get; set; } = "Log.txt";
        public long MaxSize { get; set; } = 104857600; //100MB


        /// <summary>
        /// 普通日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void L(object message)
        {
            if(Enable)
            Logger.Log(message);

            if(Record)
            {
                Recorder.Write("[Log]", message.ToString());
            }
        }
        /// <summary>
        /// 警告日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void W(object message)
        {
            if (Enable)
                Logger.LogWarning(message);
            if (Record)
            {
                Recorder.Write("[War]", message.ToString());
            }
        }
        /// <summary>
        /// 错误日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void E(object message)
        {
            if (Enable)
                Logger.LogError(message);
            if (Record)
            {
                Recorder.Write("[Err]", message.ToString());
            }
        }
        /// <summary>
        /// 异常
        /// </summary>
        /// <param name="exception"></param>
        public void Throw(Exception exception)
        {
            if (Record)
            {
                Recorder.Write("[Exc]", exception.ToString());
            }
            if (Enable)
                Logger.LogException(exception);   
        }

        protected override void OnDispose()
        {
          
        }


        
    }
}
