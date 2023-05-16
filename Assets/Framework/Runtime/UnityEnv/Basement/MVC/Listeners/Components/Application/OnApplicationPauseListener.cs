using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationPauseListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<bool>> action_list = new();

        public event Action<bool> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnApplicationPause(bool pause)
        {
            action_list.Publish(pause);
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnApplicationPauseListener listener, Action<bool> action)
        {
            listener.OnTrigger += action;
        }
    }
}
