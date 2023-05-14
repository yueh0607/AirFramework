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
    public class OnCollisionEnterListener:MonoBehaviour
    {
        public event Action<Collision> OnTrigger;


        private void OnCollisionEnter(Collision collision)
        {
            OnTrigger?.Invoke(collision);
        }

    }
}

