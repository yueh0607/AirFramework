using System;
using UnityEngine;

namespace AirFramework
{
    public class OnMouseExitListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage> action_list = new();

        public event Action OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnMouseExit()
        {
            action_list.Publish();
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnMouseExitListener listener, Action action)
        {
            listener.OnTrigger += action;
        }
    }
}
