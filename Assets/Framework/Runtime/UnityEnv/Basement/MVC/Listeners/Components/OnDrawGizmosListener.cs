using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnDrawGizmosListener : MonoBehaviour
    {
        public event Action OnTigger;

        private void OnDrawGizmos()
        {
            OnTigger?.Invoke();
        }
    }
}
