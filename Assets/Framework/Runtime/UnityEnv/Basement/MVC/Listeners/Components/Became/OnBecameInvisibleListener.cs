using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnBecameInvisibleListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnBecameInvisible()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnBecameInvisibleListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
