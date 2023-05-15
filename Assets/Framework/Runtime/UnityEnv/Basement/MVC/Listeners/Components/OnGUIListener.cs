using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnGUIListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnGUI()
        {
            OnTigger?.Invoke();
        }
    }
}
