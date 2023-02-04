

namespace AirFramework
{

    public class LateUpdateHandler : Handler<ILateUpdate>
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
