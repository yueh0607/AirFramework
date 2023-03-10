using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{

    public enum LogState
    {
        /// <summary>
        /// 不会记录
        /// </summary>

        None,
        /// <summary>
        /// 只记录内容
        /// </summary>

        Simple,
        /// <summary>
        /// 完全日志，带有堆栈跟踪
        /// </summary>

        All
    }



    public static partial class MessageExtensions
    {
        /// <summary>
        /// 输出普通日志
        /// </summary>
        /// <param name="any"></param>
        public static void L(this object any)
        {
            Debug.Log(any);
        }
        /// <summary>
        /// 输出警告日志
        /// </summary>
        /// <param name="any"></param>
        public static void W(this object any)
        {
            Debug.LogWarning(any);
        }
        /// <summary>
        /// 输出错误日志
        /// </summary>
        /// <param name="any"></param>
        public static void E(this object any)
        {
            Debug.LogError(any);
        }
        /// <summary>
        /// 抛出异常到控制台
        /// </summary>
        /// <param name="ex"></param>
        public static void Throw(this Exception ex)
        {
            Debug.LogException(ex);
        }

    }
}
