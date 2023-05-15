using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionEnter2DListener : MonoBehaviour
    {
        public event Action<Collision2D> OnTrigger;


        private void OnCollisionEnter2D(Collision2D collision)
        {
            OnTrigger?.Invoke(collision);
        }
    }
}
