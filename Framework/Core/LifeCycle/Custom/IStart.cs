namespace AirFramework
{
    public interface IStart : ILifeCycle
    {
        void Start() { }
        void ILifeCycle.OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IStart>(Start);
        }
        void ILifeCycle.OnLifeCycleUnRegister()
        {
            Framework.LifeCycle.UnRegister<IStart>(Start);
        }
    }
}
