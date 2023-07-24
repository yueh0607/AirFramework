using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ILifeEvent<T> : ISendEvent
    {
        public void OnRegister()
        {
            
        }
    }
}
