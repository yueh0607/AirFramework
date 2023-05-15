using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationFocusListener : MonoBehaviour
    {
        public event Action<bool> OnTrigger;


        private void OnApplicationFocus(bool focus)
        {
            OnTrigger?.Invoke(focus);
        }
    }
}
