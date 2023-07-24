using AirFramework.Internal;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    internal static class ReflectionProcess
    {
        public static void RegisterProcess()
        {
            AirEngine.InitialReflection += LifeCycleAdder.AddAllLifeCycle;
            AirEngine.InitialReflection += FrameworkInitializer.CreateByReflection;
       
        }


    }
}
