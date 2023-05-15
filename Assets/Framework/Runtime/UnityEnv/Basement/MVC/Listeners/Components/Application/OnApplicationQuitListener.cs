using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationQuitListener : MonoBehaviour
    {
        public event Action OnTrigger;


        private void OnApplicationQuit()
        {
            OnTrigger?.Invoke();
        }
    }
}
