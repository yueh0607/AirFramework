﻿using System;
using UnityEngine;

namespace AirFramework
{
    public class OnRenderObjectListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent> action_list = new();

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

    public static partial class Listener_Ex
    {
        public static void Bind(this OnRenderObjectListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
