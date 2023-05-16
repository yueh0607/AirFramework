using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnTriggerExitListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Collider>> action_list = new();

        public event Action<Collider> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnTriggerExit(Collider other)
        {
            action_list.Publish(other);
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnTriggerExitListener listener, Action<Collider> action)
        {
            listener.OnTrigger += action;
        }
    }
}
