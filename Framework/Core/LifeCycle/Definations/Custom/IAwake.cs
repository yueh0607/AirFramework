namespace AirFramework
{
    public interface IAwake : ILIfeCycle
    {
        void Awake() { }

        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IAwake>(Awake);
        }
    }
}
