using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class CSLogger : ILogger
    {
        public void Log(object obj)
        {
            Console.WriteLine($"Log: {obj}");
        }

        public void LogError(object obj)
        {
              
            Console.WriteLine($"Error: {obj}");
        }

        public void LogException(Exception exception)
        {
            Console.WriteLine($"Exception: {exception}");
            throw exception;
        }

        public void LogWarning(object obj)
        {
            Console.WriteLine($"[{DateTime.Now}] Warnning: {obj}");
        }
    }
}
