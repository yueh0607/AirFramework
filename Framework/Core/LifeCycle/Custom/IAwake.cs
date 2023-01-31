namespace AirFramework
{
    public interface IAwake : ILifeCycle
    {
        void Awake() { }

        void ILifeCycle.OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IAwake>(Awake);
        }
        void ILifeCycle.OnLifeCycleUnRegister()
        {
            Framework.LifeCycle.UnRegister<IAwake>(Awake);
        }
    }
}
