using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnTriggerEnter2DListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Collider2D>> action_list = new();

        public event Action<Collider2D> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnTriggerEnter2D(Collider2D other)
        {
            action_list.Publish(other);
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnTriggerEnter2DListener listener, Action<Collider2D> action)
        {
            listener.OnTrigger += action;
        }
    }
}

