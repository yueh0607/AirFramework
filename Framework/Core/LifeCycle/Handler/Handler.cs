namespace AirFramework
{


    public interface IHandler
    {

    }
    public abstract class Handler<T>:IHandler where T : ILifeCycle
    {

        public abstract void OnLifeCycleRegister(T item);


        public abstract void OnLifeCycleUnRegister(T item);
       
    }
}
