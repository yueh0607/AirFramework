using System.Runtime.CompilerServices;

namespace AirFramework
{
    public interface IAwaiter : INotifyCompletion
    {
        bool IsCompleted { get; }

        void GetResult();
    }

    public interface IAwaiter<T> : INotifyCompletion
    {

        bool IsCompleted { get; }
        T GetResult();
    }
    public interface ICriticalAwaiter : IAwaiter, ICriticalNotifyCompletion
    {

    }

    public interface ICriticalAwaiter<T> : IAwaiter<T>, ICriticalNotifyCompletion
    {

    }
}
