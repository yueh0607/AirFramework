using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnBecameInvisibleListener : MonoBehaviour
    {
        public event Action OnTrigger;


        private void OnBecameInvisible()
        {
            OnTrigger?.Invoke();
        }
    }
}
