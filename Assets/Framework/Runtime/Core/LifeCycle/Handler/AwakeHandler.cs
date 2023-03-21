

namespace AirFramework
{

    public class AwakeHandler : LifeCycleHandler<IAwake>
    {
        public override void OnLifeCycleRegister(IAwake item)
        {
            Framework.LifeCycle.Register<IAwake>(item.Awake);
        }

        public override void OnLifeCycleUnRegister(IAwake item)
        {
            Framework.LifeCycle.UnRegister<IAwake>(item.Awake);
        }
    }
}
