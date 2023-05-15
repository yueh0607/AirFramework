using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnDestroyListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnDestroy()
        {
            OnTigger?.Invoke();
        }
    }
}
