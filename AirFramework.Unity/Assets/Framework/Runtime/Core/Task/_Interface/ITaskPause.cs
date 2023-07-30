using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ITaskPause : ISendEvent
    {
        void OnTaskPause();
    }

    public class TaskPauseHandler : LifeCycleHandler<ITaskPause>
    {
        public override void OnLifeCycleRegister(ITaskPause item)
        {
            item.Operator<ITaskPause>().Subscribe(item.OnTaskPause);
        }

        public override void OnLifeCycleUnRegister(ITaskPause item)
        {
            item.Operator<ITaskPause>().UnSubscribe(item.OnTaskPause);
        }
    }
}
