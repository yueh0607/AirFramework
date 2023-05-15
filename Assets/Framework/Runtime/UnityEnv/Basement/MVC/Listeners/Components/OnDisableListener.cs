using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnDisableListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnDisable()
        {
            OnTigger?.Invoke();
        }
    }
}
