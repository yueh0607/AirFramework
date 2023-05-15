using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionExit2DListener : MonoBehaviour
    {
        public event Action<Collision2D> OnTrigger;


        private void OnCollisionExit2D(Collision2D collision)
        {
            OnTrigger?.Invoke(collision);
        }
    }
}
