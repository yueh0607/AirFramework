using AirFramework.Internal;
using System;
using UnityEngine;

namespace AirFramework
{
    public class OnParticleTriggerListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnParticleTrigger()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnParticleTriggerListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
