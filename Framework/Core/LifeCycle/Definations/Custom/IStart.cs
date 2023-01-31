namespace AirFramework
{
    public interface IStart : ILIfeCycle
    {
        void Start() { }
        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IStart>(Start);
        }
    }
}
