using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnValidateListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnValidate()
        {
            OnTigger?.Invoke();
        }
    }
}
