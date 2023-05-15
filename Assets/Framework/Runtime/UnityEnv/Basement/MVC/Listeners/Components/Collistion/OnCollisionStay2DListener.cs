using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionStay2DListener : MonoBehaviour
    {
        public event Action<Collision2D> OnTrigger;


        private void OnCollisionStay2D(Collision2D collision)
        {
            OnTrigger?.Invoke(collision);
        }
    }
}
