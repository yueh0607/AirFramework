using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public interface IAsyncTaskAwaiter : ICriticalAwaiter
    {
       
        TaskStatus Status { get; }
        void SetResult();

        void SetException(Exception exception);
    }


    public interface IAsyncTaskAwaiter<TResult> : ICriticalAwiater<TResult>
    {
        TaskStatus Status { get; }
        void SetException(Exception exception);
        void SetResult(TResult result);
    }
}
