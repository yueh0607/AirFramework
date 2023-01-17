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
        


        private static void EnLifeCycle(Unit unit)
        {
            Type[] lifes= unit.GetType().GetInterfaces();
            foreach(Type life in lifes)
            {
                
            }
        }


        private static void LifeCase<T>(Unit unit) where T : ILifeCycle
        {
            
        }
        private static void 

    }
}
