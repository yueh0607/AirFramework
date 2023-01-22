using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IUnitPoolManager
    {
        public IObjectPool GetPool<T>() where T : Unit, IUnitPoolable, new();


        public T Allocate<T>() where T : Unit, IUnitPoolable, new();


        public void Recycle<T>(T item) where T : Unit, IUnitPoolable, new();




    }
}
