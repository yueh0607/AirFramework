using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface IViewShow: ICallEvent<AirTask>
    {
        AirTask OnViewShow();
    }
    public interface IViewHide : ICallEvent<AirTask> 
    {
        AirTask OnViewHide();
    }

    public class ViewShowHandler : LifeCycleHandler<IViewShow>
    {
        public override void OnLifeCycleRegister(IViewShow item)
        {
            item.Operator<IViewShow>().Subscribe(item.OnViewShow);
        }

        public override void OnLifeCycleUnRegister(IViewShow item)
        {
            item.Operator<IViewShow>().UnSubscribe(item.OnViewShow);
        }
    }
    public class ViewHideHandler : LifeCycleHandler<IViewHide>
    {
        public override void OnLifeCycleRegister(IViewHide item)
        {
            item.Operator<IViewShow>().Subscribe(item.OnViewHide);
        }

        public override void OnLifeCycleUnRegister(IViewHide item)
        {
            item.Operator<IViewShow>().UnSubscribe(item.OnViewHide);
        }
    }
    public interface IViewInitialize : ICallEvent<AirTask>
    {
        AirTask OnViewInitialize();
    }
    public class ViewInitializeHandler : LifeCycleHandler<IViewHide>
    {
        public override void OnLifeCycleRegister(IViewHide item)
        {
            item.Operator<IViewShow>().Subscribe(item.OnViewHide);
        }

        public override void OnLifeCycleUnRegister(IViewHide item)
        {
            item.Operator<IViewShow>().UnSubscribe(item.OnViewHide);
        }
    }
}
