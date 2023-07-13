using System;

namespace AirFramework.Internal
{
    internal class Async_Setting
    {
        public static Action<Exception> ExceptionHandler = (x) => throw x;

    }
}
