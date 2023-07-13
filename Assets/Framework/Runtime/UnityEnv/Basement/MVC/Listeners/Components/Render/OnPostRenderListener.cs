﻿using System;
using UnityEngine;

namespace AirFramework
{
    public class OnPostRenderListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnPostRender()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnPostRenderListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
