using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor.VersionControl;
using UnityEngine;

namespace AirFramework
{
    public partial class LogManager : GlobalManager
    {
        
        //输出器
        public ILogger Logger { get; set; }

        //记录器，在拦截器内进行绑定，负责写入消息
        private IRecorder Recorder{get; set; }
        //拦截器，负责拦截消息内容写入到记录器
        private IInterceptor Interceptor { get; set; }
        //设置拦截器和记录器
        public void SetInterceptor<TInterceptor,TRecorder>() where TInterceptor : IInterceptor,new() where TRecorder : IRecorder,new()
        {
            if(Recorder!=null)Interceptor?.UnIntercept(Recorder);
            Recorder = new TRecorder();
            
            Interceptor = new TInterceptor();
            
            Interceptor.Intercept(Recorder);
        }



        public override string Name => "LogManager";
        /// <summary>
        /// 日志记录位置
        /// </summary>
        public string LogPath { get; set; } = "";
        /// <summary>
        /// 记录位置的子目录
        /// </summary>
        public string LogDirectory { get; set; } = "Log";

        /// <summary>
        /// 日志记录编码，与输出无关
        /// </summary>
        public Encoding encoding { get; set; } = Encoding.UTF8;
        /// <summary>
        /// 全部堆栈跟踪
        /// </summary>
        public bool AllStatckTrace { get; set; } = false;

        #region 方法
        /// <summary>
        /// 普通日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void L(object message)=>Logger.Log(message);
        /// <summary>
        /// 警告日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void W(object message) => Logger.LogWarning(message);
  
        /// <summary>
        /// 错误日志
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parm"></param>
        public void E(object message)=> Logger.LogError(message);
        /// <summary>
        /// 异常
        /// </summary>
        /// <param name="exception"></param>
        public void Throw(Exception exception) => Logger.LogException(exception);

        #endregion
        protected override void OnDispose()
        {
            
        }


        
    }
}
