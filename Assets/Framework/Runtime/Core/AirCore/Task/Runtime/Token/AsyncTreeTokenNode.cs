/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 此类为异步令牌的底层实现，要求形成任务树结构
 */

using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace CoFramework.Tasks.Internal
{
    public class AsyncTreeTokenNode : IAuthorization
    {

        /// <summary>
        /// 授权状态，代表当前任务是否被挂起，也决定了状态机是否能够继续前进
        /// </summary>
        [DebuggerHidden]
        public bool Authorization { get; internal set; } = true;
        /// <summary>
        /// 当前AsyncTaskMethodBuilder执行的子任务，如果任务不实现IAsyncTokenProperty，为空
        /// </summary>
        public IAsyncTokenProperty Current;


        /// <summary>
        /// AsyncTaskMethodBuilder代表的根任务
        /// </summary>
        public IAsyncTokenProperty Root;


        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public AsyncTreeTokenNode(IAsyncTokenProperty Root, IAsyncTokenProperty Current)
        {
            this.Current = Current;
            this.Root = Root;
        }

        /// <summary>
        /// 任务是否已经取消
        /// </summary>
        [DebuggerHidden]
        public bool IsCanceld { get; internal set; } = false;


        /// <summary>
        /// 挂起任务，暂停任务
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Yield()
        {
            Authorization = false;
            //非Builder任务则空
            if (Current != Root) this.Current.Token?.Yield();
        }

        /// <summary>
        /// 继续任务
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Continue()
        {
            Authorization = true;
            if (Current != Root) this.Current.Token?.Continue();
        }

        /// <summary>
        /// 取消任务
        /// </summary>
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Cancel()
        {
            Authorization = false;
            if (Current != Root)
            {
                this.Current.Token?.Cancel();
            }
            IsCanceld = true;
        }


    }

}
