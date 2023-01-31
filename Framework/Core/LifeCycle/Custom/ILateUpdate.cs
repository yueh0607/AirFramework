namespace AirFramework
{
    public interface ILateUpdate : ILifeCycle
    {
        void LateUpdate() { }
        void ILifeCycle.OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<ILateUpdate>(LateUpdate);
        }
        void ILifeCycle.OnLifeCycleUnRegister()
        {
            Framework.LifeCycle.UnRegister<ILateUpdate>(LateUpdate);
        }
    }
}
