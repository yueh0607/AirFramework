

namespace AirFramework
{
    public class UpdateHandler : LifeCycleHandler<IUpdate>
    {
        public override void OnLifeCycleRegister(IUpdate item)
        {
            Framework.LifeCycle.Register<IUpdate>(item.Update);
        }

        public override void OnLifeCycleUnRegister(IUpdate item)
        {
            Framework.LifeCycle.UnRegister<IUpdate>(item.Update);
        }
    }
}
