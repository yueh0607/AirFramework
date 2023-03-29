namespace AirFramework
{


    public interface ILifeCycleHandler
    {

    }
    public abstract class LifeCycleHandler<T> : ILifeCycleHandler where T : ILifeCycle
    {

        public abstract void OnLifeCycleRegister(T item);


        public abstract void OnLifeCycleUnRegister(T item);

    }
}
