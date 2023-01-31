using System;

namespace AirFramework
{
    public class LifeHandler
    {
        public void Register<T>(Action action) where T: ILIfeCycle => Framework.Message.Operator<T>().Subscribe(action);
       

        public void Add<T>(object instance) where T : ILIfeCycle
        {
            if (instance is T) ((T)instance)?.OnLifeCycleRegister();
        }
        public void Remove<T>(object instance) where T : ILIfeCycle
        {
            if (instance is T) ((T)instance)?.OnLifeCycleUnRegister();
        }


        public void AddAll(object instance)
        {
            if(instance==null) return;

            Add<IAwake>(instance);
            Add<IStart>(instance);
            Add<IUpdate>(instance);
            Add<IFixedUpdate>(instance);
        }
        public void RemoveAll(object instance)
        {
            if (instance == null) return;

            Remove<IAwake>(instance);
            Remove<IStart>(instance);
            Remove<IUpdate>(instance);
            Remove<IFixedUpdate>(instance);
        }

    }
}
