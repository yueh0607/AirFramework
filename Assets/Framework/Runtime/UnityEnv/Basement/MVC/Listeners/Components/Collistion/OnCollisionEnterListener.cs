/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 23:02:23
 * Description : Describe the function here.
************************************************************************************/


using System;
using UnityEngine;

namespace AirFramework
{
    public class OnCollisionEnterListener : MonoBehaviour
    {

        private MessageOperatorBox<IGenericMessage<Collision>> action_list = new();

        public event Action<Collision> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnCollisionEnter(Collision collision)
        {
            action_list.Publish(collision);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnCollisionEnterListener listener, Action<Collision> action)
        {
            listener.OnTrigger += action;
        }
    }
}
