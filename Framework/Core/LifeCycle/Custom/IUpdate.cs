namespace AirFramework
{
    public interface IUpdate : ILifeCycle
    {
        void Update() { }
        void ILifeCycle.OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IUpdate>(Update);
        }
        void ILifeCycle.OnLifeCycleUnRegister()
        {
            Framework.LifeCycle.UnRegister<IUpdate>(Update);
        }
    }
}
