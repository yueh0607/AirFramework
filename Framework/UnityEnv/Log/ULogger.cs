using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class ULogger : ILogger
    {
        public bool Enable
        {
            get => Debug.unityLogger.logEnabled; 
            set => Debug.unityLogger.logEnabled=value; 
        }
        public void Log(object obj)
        {
            Debug.Log(obj);
        }

        public void LogError(object obj)
        {
              
            Debug.LogError(obj);
        }

        public void LogException(Exception exception)
        {
            throw exception;
        }

        public void LogWarning(object obj)
        {
            Debug.LogWarning(obj);
        }
    }
}
