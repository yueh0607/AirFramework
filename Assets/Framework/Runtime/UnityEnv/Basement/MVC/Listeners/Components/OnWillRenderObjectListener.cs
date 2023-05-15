using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnWillRenderObjectListener : MonoBehaviour
    {
            public event Action OnTrigger;


            private void OnApplicationQuit()
            {
                OnTrigger?.Invoke();
            }
    }
}
