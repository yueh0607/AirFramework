﻿using System;
using UnityEngine;

namespace AirFramework
{
    public class OnApplicationPauseListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent<bool>> action_list = new();

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

    public static partial class Listener_Ex
    {
        public static void Bind(this OnApplicationPauseListener listener, Action<bool> action)
        {
            listener.OnTrigger += action;
        }
    }
}