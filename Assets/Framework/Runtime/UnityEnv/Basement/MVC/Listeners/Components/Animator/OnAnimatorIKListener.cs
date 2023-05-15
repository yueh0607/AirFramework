using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnAnimatorIKListener : MonoBehaviour
    {
        public event Action<int> OnTrigger;


        private void OnAnimatorIK(int layerIndex)
        {
            OnTrigger?.Invoke(layerIndex);
        }
    }
}
