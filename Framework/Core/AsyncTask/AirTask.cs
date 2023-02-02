using AirFramework.Assets.Framework.Core;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class AirAwaiter : PoolableObject<AirAwaiter>, IAsyncTaskAwaiter
    {
        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            Status = TaskStatus.Pending;
        }
    }
    public partial class AirAwaiter : PoolableObject<AirAwaiter>, IAsyncTaskAwaiter
    {
        public AirTask Task { get; set; }


        public TaskStatus Status { get; set; }
        public Action continuation;
        public bool IsCompleted {get;set;}

        

        public void GetResult()
        {
            switch (Status)
            {
                //仅失败时选择抛出异常
                case TaskStatus.Succeeded:
                    {
                      
                    }break;
                case TaskStatus.Faulted:
                    {
                        if(Task.ThrowException) throw Task.Exception;
                       
                    }break;
                case TaskStatus.Canceled:
                    {

                    }break;
                    //提前调用GetResult不允许
                default: throw new InvalidOperationException("Framework can not allow you call \"GetResult Method\" before Task end! Please use\"await\" instead.");
            }

            this.Dispose();
        }

        public void OnCompleted(Action continuation)
        {
            UnsafeOnCompleted(continuation);
        }



        /// <summary>
        /// 状态机调用：当切换到此状态时交出控制权
        /// </summary>
        /// <exception cref="InvalidOperationException"></exception>
        public void SetResult()
        {
            if(IsCompleted)
            {
                throw new InvalidOperationException("Task already completed!");
            }

            this.Status= TaskStatus.Succeeded;

            continuation?.Invoke();
        }



        public void UnsafeOnCompleted(Action continuation)
        {
            if(IsCompleted)
            {
                continuation?.Invoke();
                return;
            }
            this.continuation = continuation;
        }

        

        public void SetException(Exception exception)
        {
            Task.Exception = exception;
        }


        public AirAwaiter()
        {

        }

        private async AirVoid InnerCoroutine()
        {
            await Task;
        }
        public void Coroutine()
        {
            InnerCoroutine().Coroutine();
        }

    }

    [AsyncMethodBuilder(typeof(AirTaskMethodBuilder))]
    public class AirTask : IAwaitable<AirAwaiter>
    {
        public AirAwaiter Awaiter { get; private set; }
        public Exception Exception { get;internal set; }
        public bool ThrowException { get; set; }
        public TaskStatus Status=> Awaiter.Status;
        public AirAwaiter GetAwaiter()
        {
            Awaiter =  Framework.Pool.Allocate<AirAwaiter>();
            Awaiter.Task = this;
            return Awaiter;
        }
    }
}
