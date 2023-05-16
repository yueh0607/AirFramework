using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionStayListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Collision>> action_list = new();

        public event Action<Collision> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnCollisionStay(Collision collision)
        {
            action_list.Publish(collision);
        }

    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnCollisionStayListener listener, Action<Collision> action)
        {
            listener.OnTrigger += action;
        }
    }


}

