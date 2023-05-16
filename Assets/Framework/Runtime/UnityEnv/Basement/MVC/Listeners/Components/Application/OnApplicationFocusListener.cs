using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationFocusListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<bool>> action_list = new();

        public event Action<bool> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnApplicationFocus(bool focus)
        {
            action_list.Publish(focus);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnApplicationFocusListener listener, Action<bool> action)
        {
            listener.OnTrigger += action;
        }
    }
}
