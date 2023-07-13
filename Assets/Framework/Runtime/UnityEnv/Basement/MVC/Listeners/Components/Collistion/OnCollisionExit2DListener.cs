using System;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionExit2DListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Collision2D>> action_list = new();

        public event Action<Collision2D> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnCollisionExit2D(Collision2D collision2D)
        {
            action_list.Publish(collision2D);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnCollisionExit2DListener listener, Action<Collision2D> action)
        {
            listener.OnTrigger += action;
        }
    }
}

