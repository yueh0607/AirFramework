using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnTriggerEnterListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Collider>> action_list = new();

        public event Action<Collider> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnTriggerEnter(Collider other)
        {
            action_list.Publish(other);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnTriggerEnterListener listener, Action<Collider> action)
        {
            listener.OnTrigger += action;
        }
    }
}
