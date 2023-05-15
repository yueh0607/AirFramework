using log4net.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnLevelWasLoadedListener : MonoBehaviour
    {
        public event Action<int> OnTrigger;


        private void OnLevelWasLoaded(int level)
        {
            OnTrigger?.Invoke(level);
        }
    }
}
