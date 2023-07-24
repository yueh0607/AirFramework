using System;

namespace AirFramework
{
    public class PoolRepeater
    {
        public T Allocate<T>() where T : IAllocate
        {
            var item = Activator.CreateInstance<T>();
            item.OnAllocate();
            return item;
        }

        public void Recycle<T>(T item) where T : IRecycle
        {
            item.OnRecycle();

        }
    }
}
