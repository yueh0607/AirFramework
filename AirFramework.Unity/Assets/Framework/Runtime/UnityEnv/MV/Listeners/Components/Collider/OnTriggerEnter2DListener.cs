﻿using System;
using UnityEngine;

namespace AirFramework
{
    public class OnTriggerEnter2DListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent<Collider2D>> action_list = new();

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

    public static partial class Listener_Ex
    {
        public static void Bind(this OnTriggerEnter2DListener listener, Action<Collider2D> action)
        {
            listener.OnTrigger += action;
        }
    }
}
