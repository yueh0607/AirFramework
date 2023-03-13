//using AirFrameworkEditor;
//using System.Text;
//using UnityEngine;

//namespace AirFramework
//{
//    public partial class LogManager : GlobalManager
//    {

//        //记录器，在拦截器内进行绑定，负责写入消息
//        private IRecorder Recorder { get; set; }
//        //拦截器，负责拦截消息内容写入到记录器
//        private IInterceptor Interceptor { get; set; }
//        //设置拦截器和记录器
//        public void SetInterceptor<TInterceptor, TRecorder>() where TInterceptor : IInterceptor, new() where TRecorder : IRecorder, new()
//        {
//            //实例化
//            if (Recorder != null) Interceptor?.UnIntercept(Recorder);
//            Recorder = new TRecorder(); 
//            Interceptor = new TInterceptor();
//            //读取配置表参数
//            var rc = FrameworkEditor.RuntimeGetRuntimeConfig();
//            if (rc.is_release) return;

//            //初始化记录器
//            Recorder.StateList[LogType.Log] = rc.logger_log_enable;
//            Recorder.StateList[LogType.Warning] = rc.logger_warn_enable;
//            Recorder.StateList[LogType.Error] = rc.logger_error;
//            Recorder.StateList[LogType.Exception] = rc.logger_exception;

//            //拦截日志
//            Interceptor.Intercept(Recorder);
//        }

//        public LogManager()
//        {
//            SetInterceptor<UInterceptor, URecorder>();
//        }

//        public override string Name => "LogManager";
//        /// <summary>
//        /// 日志记录位置
//        /// </summary>
//        public static string LogPath { get; set; } = Application.persistentDataPath;

//        //分离计划内容
//        /// <summary>
//        /// 记录位置的子目录
//        /// </summary>
//        public static string LogDirectory { get; set; } = "Log";

//        /// <summary>
//        /// 日志记录编码，与输出无关
//        /// </summary>
//        public Encoding encoding { get; set; } = Encoding.UTF8;

//        protected override void OnDispose()
//        {

//        }



//    }
//}
