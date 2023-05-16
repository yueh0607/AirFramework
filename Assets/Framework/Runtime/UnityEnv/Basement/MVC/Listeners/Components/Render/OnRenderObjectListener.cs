using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnRenderObjectListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnRenderObject()
        {
            action_list.Publish();
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnRenderObjectListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
