﻿using System;
using UnityEngine;

namespace AirFramework
{
    public class OnMouseUpListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnMouseUp()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnMouseUpListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
