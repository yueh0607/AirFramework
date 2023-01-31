namespace AirFramework
{
    public interface IUpdate : ILIfeCycle
    {
        void Update() { }
        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IUpdate>(Update);
        }
    }
}
