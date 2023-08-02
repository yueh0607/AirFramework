using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface IFrameworkInitialize:ISendEvent
    {
        public void OnFrameworkInitialize();
    }
}
