/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 17:33:02
 * Description : Describe the function here.
************************************************************************************/


using AirFramework;
using System;
using UnityEngine;

namespace MyNamespace
{
    public class CubeModel : IModel
    {
        public BindableProperty<Vector3> Pos = new(Vector3.zero);
        private MessageOperatorBox<IGenericMessage<Collision>> action_list = new();

        public event Action<Collision> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnCollisionExit(Collision collision)
        {
            action_list.Publish(collision);
        }
    }
}

