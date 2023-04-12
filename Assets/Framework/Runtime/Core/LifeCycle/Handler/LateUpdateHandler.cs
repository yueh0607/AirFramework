

using UnityEngine;

namespace AirFramework
{

    public class LateUpdateHandler : LifeCycleHandler<ILateUpdate>
    {
        public override void OnLifeCycleRegister(ILateUpdate item)
        {
           
            Framework.Message.Operator<ILateUpdate>().Subscribe(item.LateUpdate);
        }

        public override void OnLifeCycleUnRegister(ILateUpdate item)
        {
            Framework.Message.Operator<ILateUpdate>().UnSubscribe(item.LateUpdate);
        }
    }
}
