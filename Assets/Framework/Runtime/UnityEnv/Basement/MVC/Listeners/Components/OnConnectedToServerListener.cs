using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnConnectedToServerListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnConnectedToServer()
        {
            OnTigger?.Invoke();
        }
    }
}
