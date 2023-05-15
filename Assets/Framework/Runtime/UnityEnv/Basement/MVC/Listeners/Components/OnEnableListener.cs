using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnEnableListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnEnable()
        {
            OnTigger?.Invoke();
        }
    }
}
