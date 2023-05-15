using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnAudioFilterReadListener : MonoBehaviour
    {
        public event Action<float[],int> OnTrigger;


        private void OnAudioFilterRead(float[] data, int channels)
        {
            OnTrigger?.Invoke(data,channels);
        }
    }
}
