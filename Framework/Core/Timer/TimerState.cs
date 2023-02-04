using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public enum TimerState
    {
        /// <summary>
        /// 计时器闲置
        /// </summary>
        Idle,
        /// <summary>
        /// 计时器已经开始，正在运行
        /// </summary>
        Started,
        /// <summary>
        /// 计时器已经被终结
        /// </summary>
        Stoped,
        /// <summary>
        /// 计时器被暂停
        /// </summary>
        Paused
    }

    public static partial class Extensions
    {
        /// <summary>
        /// 允许开始
        /// </summary>
        /// <param name="state"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool AllowStart(this TimerState state)
        {
            return state != TimerState.Started;
        }
        /// <summary>
        /// 允许暂停
        /// </summary>
        /// <param name="state"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool AllowPause(this TimerState state)
        {
            return state == TimerState.Started;
        }
        /// <summary>
        /// 允许停止
        /// </summary>
        /// <param name="state"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]

        public static bool AllowStop(this TimerState state)
        {
            return state != TimerState.Stoped;
        }
        /// <summary>
        /// 正在运行
        /// </summary>
        /// <param name="state"></param>
        /// <returns></returns>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]

        public static bool IsRunning(this TimerState state)
        {
            return state == TimerState.Started;
        }
    }


}
