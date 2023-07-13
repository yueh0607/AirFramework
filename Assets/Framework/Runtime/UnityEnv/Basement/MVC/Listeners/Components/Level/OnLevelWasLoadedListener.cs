using System;
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

    public static partial class Listener_Ex
    {
        public static void Bind(this OnLevelWasLoadedListener listener, Action<int> action)
        {
            listener.OnTrigger += action;
        }
    }
}
