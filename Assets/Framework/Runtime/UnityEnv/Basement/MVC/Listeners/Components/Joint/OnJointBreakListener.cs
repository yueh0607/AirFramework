using System;
using UnityEngine;

namespace AirFramework
{
    public class OnJointBreakListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<float>> action_list = new();

        public event Action<float> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnJointBreak(float breakForce)
        {
            action_list.Publish(breakForce);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnJointBreakListener listener, Action<float> action)
        {
            listener.OnTrigger += action;
        }
    }
}
