using System;
using UnityEngine;

namespace AirFramework
{
    public class OnBeforeTransformParentChangedListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnBeforeTransformParentChanged()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnBeforeTransformParentChangedListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
