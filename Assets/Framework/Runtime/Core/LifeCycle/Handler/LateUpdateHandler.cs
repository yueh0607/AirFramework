

namespace AirFramework
{

    public class LateUpdateHandler : LifeCycleHandler<ILateUpdate>
    {
        public override void OnLifeCycleRegister(ILateUpdate item)
        {
            Framework.LifeCycle.Register<ILateUpdate>(item.LateUpdate);
        }

        public override void OnLifeCycleUnRegister(ILateUpdate item)
        {
            Framework.LifeCycle.UnRegister<ILateUpdate>(item.LateUpdate);
        }
    }
}
