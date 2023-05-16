using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class OnJointBreak2DListener : MonoBehaviour
    {
        private MessageOperatorBox<IGenericMessage<Joint2D>> action_list = new();

        public event Action<Joint2D> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }

        private void OnJointBreak2D(Joint2D joint2D)
        {
            action_list.Publish(joint2D);
        }
       
    }

    public static partial class ComponentEx
    {
        public static void Bind(this OnJointBreak2DListener listener, Action<Joint2D> action)
        {
            listener.OnTrigger += action;
        }
    }
}
