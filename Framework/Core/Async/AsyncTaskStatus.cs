using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum AsyncTaskStatus
    {
        //在等待的
        Pending,
        //已结束的
        Closed,
        //挂起的
        Yield
    }

    public static class AsyncStatusExtensions
    {
        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsRunning(this AsyncTaskStatus status)
        {
            return status == AsyncTaskStatus.Pending;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsEffective(this AsyncTaskStatus status)
        {
            return status != AsyncTaskStatus.Closed;
        }
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsYield(this AsyncTaskStatus status)
        {
            return status == AsyncTaskStatus.Yield;
        }
    }
}
