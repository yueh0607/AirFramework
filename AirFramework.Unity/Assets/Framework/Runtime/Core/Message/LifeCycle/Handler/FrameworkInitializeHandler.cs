
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class FrameworkInitializeHandler :LifeCycleHandler<IFrameworkInitialize> 
    {
        public override void OnLifeCycleRegister(IFrameworkInitialize item)
        {
            item.Operator<IFrameworkInitialize>().Subscribe(item.OnFrameworkInitialize);
        }

        public override void OnLifeCycleUnRegister(IFrameworkInitialize item)
        {
            item.Operator<IFrameworkInitialize>().UnSubscribe(item.OnFrameworkInitialize);
        }
    }
}
