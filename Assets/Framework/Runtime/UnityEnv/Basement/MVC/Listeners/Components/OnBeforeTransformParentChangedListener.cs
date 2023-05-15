using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnBeforeTransformParentChangedListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnBeforeTransformParentChanged()
        {
            OnTigger?.Invoke();
        }
    }
}
