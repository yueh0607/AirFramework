using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IGenericPoolManager
    {
        public IGenericPool<T> GetPool<T>() where T : class, IPoolable;
        public IGenericPool<T> GetPool<T>(Func<T> onCreate=null, Action<T> onDestroy=null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T :class;
       
        public T Allocate<T>() where T : class, IPoolable;
       
        public void Recycle<T>(T item) where T : class, IPoolable;
     
        
       
    }
}
