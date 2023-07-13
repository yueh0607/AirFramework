/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 跳过一帧的任务
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
namespace AirFramework
{

    [AsyncMethodBuilder(typeof(AsyncTaskCompletedMethodBuilder))]
    public struct AsyncTaskCompleted : ICriticalNotifyCompletion
    {

        [DebuggerHidden]
        public AsyncTaskCompleted GetAwaiter() => this;
        [DebuggerHidden]
        public bool IsCompleted => true;
        [DebuggerHidden]
        public void GetResult() { }
        [DebuggerHidden]
        public void OnCompleted(Action continuation) { }

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation) { }


    }
}
