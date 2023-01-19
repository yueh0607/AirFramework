using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Reflection;
namespace AirFramework
{
    public class LifeCycleContainer
    {
        
        public Dictionary<Type,ICustomLifeCycle> lifeCycles = new Dictionary<Type, ICustomLifeCycle>();

        private void RegisterCustomLife<T>() where T : class,ICustomLifeCycle,new()
        {
            if(!lifeCycles.ContainsKey(typeof(T)))
            {
                lifeCycles.Add(typeof(T),new T());
            }
        }
        private void EnLifeCycle(Unit unit)
        {
            Type[] lifes= unit.GetType().GetInterfaces();
            foreach(Type life in lifes)
            {
                
            }
        }


        private void LifeCase<T>(Unit unit) where T : ILifeCycle
        {
            
        }
        

    }
}
