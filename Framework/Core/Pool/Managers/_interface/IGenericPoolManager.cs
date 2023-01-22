using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IGenericPoolManager
    {
        public IObjectPool GetPool<T>() where T : class, IPoolable;
       
        public T Allocate<T>() where T : class, IPoolable;
       
        public void Recycle<T>(T item) where T : class, IPoolable;
     

       
    }
}
