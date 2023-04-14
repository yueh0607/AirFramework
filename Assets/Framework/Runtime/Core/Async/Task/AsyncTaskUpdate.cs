/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 这个类主要是表示任务立刻完成，比如在if里缺少await的情况可以试试用这个配位
 */


using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{

    //[AsyncMethodBuilder(typeof(AsyncTaskMethodBuilder))]
    public class AsyncTaskUpdate : PoolableObject<AsyncTaskUpdate>, ICriticalNotifyCompletion, IAsyncTokenProperty, IUpdate
    {
        public static void Create() => Framework.Pool.Allocate<AsyncTaskUpdate>();
        public AsyncTaskUpdate() => Token = new(this, this);

        [DebuggerHidden]
        public AsyncTaskUpdate GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted { get; private set; } = false;
        private Action continuation = null;

        #region Token
        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }



        public bool Authorization { get; internal set; } = true;
        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }


        #endregion


        [DebuggerHidden]
        public void GetResult()
        {

        }

        [DebuggerHidden]
        public void OnCompleted(Action continuation)
        {
            UnsafeOnCompleted(continuation);
        }

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation)
        {
            this.continuation = continuation;

        }

        private void SetResult()
        {
            if (Authorization)
            {
                if (IsCompleted) throw new InvalidOperationException("AsyncTask dont allow SetResult repeatly.");
                //执行await以后的代码
                continuation?.Invoke();
            }
            IsCompleted = true;
            //回收到Pool
            this.Dispose();
        }


        public override void OnAllocate()
        {
            Token.Current = this;
            Token.Root = this;
            IsCompleted = false;
            Authorization = true;
            Token = new(this, this);
        }
        [DebuggerHidden]
        public override void OnRecycle()
        {
            Authorization = false;
            FrameCount = 1;
            current = 0;
            
        }
        public void SetException(Exception exception)
        {
            SetResult();
        }

        public int FrameCount { get; set; } = 1;
        int current = 0;
    
        void IUpdate.Update(float deltaTime)
        {
            if(current++>=FrameCount)
            {
                SetResult();
            }
          
        }
    }
}
