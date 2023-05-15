using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionStayListener : MonoBehaviour
    {
        public event Action<Collision> OnTrigger;


        private void OnCollisionStay(Collision collision)
        {
            OnTrigger?.Invoke(collision);
        }

    }
}
