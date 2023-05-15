using log4net.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnJointBreakListener : MonoBehaviour
    {
        public event Action<float> OnTrigger;


        private void OnJointBreak(float breakForce)
        {
            OnTrigger?.Invoke(breakForce);
        }
    }
}
