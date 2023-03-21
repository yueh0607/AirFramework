

namespace AirFramework
{
    public class FixedUpdateHandler : LifeCycleHandler<IFixedUpdate>
    {
        public override void OnLifeCycleRegister(IFixedUpdate item)
        {
            Framework.LifeCycle.Register<IFixedUpdate>(item.FixedUpdate);
        }

        public override void OnLifeCycleUnRegister(IFixedUpdate item)
        {
            Framework.LifeCycle.UnRegister<IFixedUpdate>(item.FixedUpdate);
        }
    }
}
