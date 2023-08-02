using System;
using UnityEngine;

namespace AirFramework
{
    public class OnParticleCollisionListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent<GameObject>> action_list = new();

        public event Action<GameObject> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnParticleCollision(GameObject other)
        {
            action_list.Publish(other);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnParticleCollisionListener listener, Action<GameObject> action)
        {
            listener.OnTrigger += action;
        }
    }
}

