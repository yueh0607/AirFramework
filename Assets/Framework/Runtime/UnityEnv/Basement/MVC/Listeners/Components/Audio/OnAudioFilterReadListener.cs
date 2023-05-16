using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnAudioFilterReadListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<float[],int>> action_list = new();

        public event Action<float[],int> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnAudioFilterRead(float[] data, int channels)
        {
            action_list.Publish(data,channels);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnAudioFilterReadListener listener, Action<float[],int> action)
        {
            listener.OnTrigger += action;
        }
    }
}
