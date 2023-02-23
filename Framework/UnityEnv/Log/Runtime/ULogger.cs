using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using UnityEngine;
using Debug = UnityEngine.Debug;
namespace AirFramework
{
    
    public class ULogger : ILogger
    {
        [DebuggerHidden]
        public bool Enable
        {
            get => Debug.unityLogger.logEnabled; 
            set => Debug.unityLogger.logEnabled=value; 
        }
        [DebuggerHidden]
        public void Log(object obj)
        {
            Debug.Log(obj);
        }
        [DebuggerHidden]
        public void LogError(object obj)
        {
              
            Debug.LogError(obj);
        }
        [DebuggerHidden]
        public void LogException(Exception exception)
        {
            throw exception;
        }
        [DebuggerHidden]
        public void LogWarning(object obj)
        {
            Debug.LogWarning(obj);
        }
    }
}
