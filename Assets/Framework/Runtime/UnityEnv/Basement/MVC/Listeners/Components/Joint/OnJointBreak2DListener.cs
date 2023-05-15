using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnJointBreak2DListener : MonoBehaviour
    {
        public event Action<Joint2D> OnTrigger;


        private void OnJointBreak2D(Joint2D joint)
        {
            OnTrigger?.Invoke(joint);
        }
    }
}
