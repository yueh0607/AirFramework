namespace AirFramework
{
    public interface IBeforeUpdate : ILIfeCycle
    {
        void BeforeUpdate() { }
        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IBeforeUpdate>(BeforeUpdate);
        }
    }
}
