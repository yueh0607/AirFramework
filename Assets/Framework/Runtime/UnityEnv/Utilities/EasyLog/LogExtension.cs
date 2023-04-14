using System;
using System.Diagnostics;
using Debug = UnityEngine.Debug;
namespace AirFramework
{



    public static partial class LogExtensions
    {
        /// <summary>
        /// 输出普通日志
        /// </summary>
        /// <param name="any"></param>
        [DebuggerHidden]
        public static void L(this object any, string message = null)
        {

            Debug.Log($"{message}{(message == null ? string.Empty : ":")}{any}");
        }
        /// <summary>
        /// 输出警告日志
        /// </summary>
        /// <param name="any"></param>
        [DebuggerHidden]
        public static void W(this object any, string message = null)
        {
            Debug.LogWarning($"{message}{(message == null ? string.Empty : ":")}{any}");
        }
        /// <summary>
        /// 输出错误日志
        /// </summary>
        /// <param name="any"></param>
        [DebuggerHidden]
        public static void E(this object any, string message = null)
        {
            Debug.LogError($"{message}{(message == null ? string.Empty : ":")}{any}");
        }
        /// <summary>
        /// 抛出异常到控制台
        /// </summary>
        /// <param name="ex"></param>
        [DebuggerHidden]
        public static void Throw(this Exception ex)
        {
            Debug.LogException(ex);
        }

    }
}
