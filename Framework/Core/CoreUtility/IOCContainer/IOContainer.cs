using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class IOContainer
    {
        private Dictionary<Type, object> container = new Dictionary<Type, object>();

        public void Register<T,K>()   where K : class, T 
        {
            Register<T>(Activator.CreateInstance<K>());
        }
        public void Register<T>(T instance) 
        {
            Type key = typeof(T);
            if (container.ContainsKey(key))
            {
                container[key] = instance;
            }
            else
            {
                container.Add(key, instance);
            }
        }

        public T Reslove<T>() where T : class
        {
            if (container.ContainsKey(typeof(T)))
            {
                return container[typeof(T)] as T;
            }
            throw new NullReferenceException("No such type in this IOCContainer!");
        }


    }
}
