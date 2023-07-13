/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 
 */


using AirFramework.Internal;
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
namespace AirFramework
{

    public class AsyncTaskTimer : PoolableObject, ICriticalNotifyCompletion, IAsyncTokenProperty, IUpdate
    {

        [DebuggerHidden]
        public AsyncTaskTimer GetAwaiter() => this;

        [DebuggerHidden]
        public bool IsCompleted { get; set; } = false;
        private Action continuation = null;


        AsyncTreeTokenNode IAsyncTokenProperty.Token { get => Token; set => Token = value; }
        public AsyncTreeTokenNode Token { get; internal set; }

        public bool Authorization { get; internal set; } = true;
        bool IAuthorization.Authorization { get => Authorization; set => Authorization = value; }

        [DebuggerHidden]
        public void GetResult() { }

        [DebuggerHidden]
        public void OnCompleted(Action continuation) => UnsafeOnCompleted(continuation);

        [DebuggerHidden]
        public void UnsafeOnCompleted(Action continuation) => this.continuation = continuation;


        private void SetResult()
        {
            if (Authorization)
            {
                //执行await以后的代码
                continuation?.Invoke();
            }
            //回收到Pool
            this.Dispose();
        }

        public AsyncTaskTimer() => Token = new(this, this);


        [DebuggerHidden]
        public override void OnAllocate()
        {
            Token.Current = this;
            Token.Root = this;
            currentTime = 0;
            EndTime = 1000f;
            Authorization = true;
        }
        [DebuggerHidden]
        public override void OnRecycle() => Authorization = false;

        public void SetException(Exception exception)
        {
            SetResult();
            Async_Setting.ExceptionHandler?.Invoke(exception);
        }


        public float EndTime { get; set; } = 1000f;
        private float currentTime = 0f;
        void IUpdate.Update(float deltaTime)
        {
            if (Authorization)
            {
                currentTime += deltaTime;
                if (currentTime >= EndTime)
                {
                    SetResult();
                }
            }
        }

        public void SetCancel() => SetResult();
    }
}
