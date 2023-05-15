using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCanvasGroupChangedListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnCanvasGroupChanged()
        {
            OnTigger?.Invoke();
        }
    }
}
