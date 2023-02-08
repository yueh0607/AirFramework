using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class CSLogger : ILogger
    {
        public void Log(object obj, params object[] param)
        {
            Console.WriteLine($"[{DateTime.Now}] Log: {obj}",param);
        }

        public void LogError(object obj, params object[] param)
        {
              
            Console.WriteLine($"[{DateTime.Now}] Error: {obj}",param);
        }

        public void LogException(Exception exception)
        {
            Console.WriteLine($"[{DateTime.Now}] Exception: {exception}");
            throw exception;
        }

        public void LogWarnning(object obj,params object[] param)
        {
            Console.WriteLine($"[{DateTime.Now}] Warnning: {obj}",param);
        }
    }
}
