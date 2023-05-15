using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationPauseListener : MonoBehaviour
    {
        public event Action<bool> OnTrigger;


        private void OnApplicationPause(bool pause)
        {
            OnTrigger?.Invoke(pause);
        }
    }
}
