using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnAnimatorMoveListener : MonoBehaviour
    {
        public event Action OnTrigger;


        private void OnAnimatorMove()
        {
            OnTrigger?.Invoke();
        }
    }
}
