using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnControllerColliderHitListener : MonoBehaviour
    {
        public event Action<Collider> OnTrigger;


        private void OnControllerColliderHit(Collider other)
        {
            OnTrigger?.Invoke(other);
        }
    }
}
