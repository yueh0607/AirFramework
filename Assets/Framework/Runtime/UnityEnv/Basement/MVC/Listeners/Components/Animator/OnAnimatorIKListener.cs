using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnAnimatorIKListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<int>> action_list = new();

        public event Action<int> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnAnimatorIK(int layerIndex)
        {
            action_list.Publish(layerIndex);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnAnimatorIKListener listener, Action<int> action)
        {
            listener.OnTrigger += action;
        }
    }
}
