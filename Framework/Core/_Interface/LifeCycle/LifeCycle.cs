using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public interface ICustomLifeCycle<T> where T : ILifeCycle
    {
        public bool IsOnce { get; }
        public int SortingLayer { get; }

        public Action GetLifeFunc(T life);


    }
    

}
