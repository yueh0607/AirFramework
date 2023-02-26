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
        public static void L(this object any)
        {
            Debug.Log(any);
        }
        public static void W(this object any)
        {
            Debug.LogWarning(any);
        }
        public static void E(this object any)
        {
            Debug.LogError(any);
        }

        public static void Throw(this Exception ex)
        {
            Debug.LogException(ex);
        }


        public static T Throw<T>(this Exception ex)
        {
            Throw(ex);
            return default;
        }
    }
}
