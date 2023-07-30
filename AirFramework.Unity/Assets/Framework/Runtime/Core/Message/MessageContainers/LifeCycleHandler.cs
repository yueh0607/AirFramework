using AirFramework.Internal;
namespace AirFramework
{


    public interface ILifeCycleHandler
    {

    }

    public abstract class LifeCycleHandler : ILifeCycleHandler
    {
        internal abstract void OnLifeCycleRegister(object item);


        internal abstract void OnLifeCycleUnRegister(object item);

    }


    public abstract class LifeCycleHandler<T> : LifeCycleHandler, ILifeCycleHandler where T : IEventBase
    {

        internal override void OnLifeCycleRegister(object item)
        {
            this.OnLifeCycleRegister((T)item);
        }
        internal override void OnLifeCycleUnRegister(object item)
        {
            this.OnLifeCycleUnRegister((T)item);
        }


        public abstract void OnLifeCycleRegister(T item);


        public abstract void OnLifeCycleUnRegister(T item);

    }
}
