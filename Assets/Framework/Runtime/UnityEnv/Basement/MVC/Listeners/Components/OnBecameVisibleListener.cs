using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnBecameVisibleListener : MonoBehaviour
    {
        public event Action OnTrigger;


        private void OnBecameVisible()
        {
            OnTrigger?.Invoke();
        }
    }
}
