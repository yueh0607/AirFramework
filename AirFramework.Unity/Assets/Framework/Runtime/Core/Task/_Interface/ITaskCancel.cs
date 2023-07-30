using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ITaskCancel: ISendEvent
    {
   
        void OnTaskCancel();
    }

    public class TaskCancelHandler : LifeCycleHandler<ITaskCancel> 
    {
        public override void OnLifeCycleRegister(ITaskCancel item)
        {
            item.Operator<ITaskCancel>().Subscribe(item.OnTaskCancel);
        }

        public override void OnLifeCycleUnRegister(ITaskCancel item)
        {
            item.Operator<ITaskCancel>().UnSubscribe(item.OnTaskCancel);
        }
    }
}
