using log4net.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnLevelWasLoadedListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<int>> action_list = new();

        public event Action<int> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnLevelWasLoaded(int level)
        {
            action_list.Publish(level);
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnLevelWasLoadedListener listener, Action<int> action)
        {
            listener.OnTrigger += action;
        }
    }
}
