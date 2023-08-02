using System;
using UnityEngine;

namespace AirFramework
{
    public class OnTriggerStayListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent<Collider>> action_list = new();

        public event Action<Collider> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnTriggerStay(Collider other)
        {
            action_list.Publish(other);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnTriggerStayListener listener, Action<Collider> action)
        {
            listener.OnTrigger += action;
        }
    }
}

