using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ILIfeCycle: IMessage
    {

        void OnLifeCycleRegister() { }
        void OnLifeCycleUnRegister() { }
    }
}
