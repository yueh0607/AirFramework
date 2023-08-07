using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public interface ILogger
    {
        public void Log(object message);

        public void Warn(object message);
        public void Error(object message);
        public void Exception(Exception exception);

    }
}
