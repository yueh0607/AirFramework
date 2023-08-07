using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class UnitySupportLogger : AirFramework.ILogger
    {
        void ILogger.Error(object message)
        {
            Debug.LogError(message);
        }

        void ILogger.Exception(Exception exception)
        {
            Debug.LogException(exception);
        }

        void ILogger.Log(object message)
        {
            Debug.Log(message);
        }

        void ILogger.Warn(object message)
        {
            Debug.LogWarning(message);
        }
    }
}
