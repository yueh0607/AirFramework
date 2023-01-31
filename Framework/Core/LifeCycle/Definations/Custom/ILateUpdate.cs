namespace AirFramework
{
    public interface ILateUpdate : ILIfeCycle
    {
        void LateUpdate() { }
        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<ILateUpdate>(LateUpdate);
        }
    }
}
