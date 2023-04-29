using System;
using System.Runtime.ExceptionServices;

namespace AirFramework.Internal
{
    internal class Async_Tools
    {
        public static event Action<Exception> ExceptionHandler = null;

        public static void Capture(Exception ex)
        {
            var exi = ExceptionDispatchInfo.Capture(ex);
            ExceptionHandler?.Invoke(exi.SourceException);
        }
    }
}
