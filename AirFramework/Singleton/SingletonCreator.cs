using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class SingletonCreator
    {
        public static T CreateSingleton<T>() where T : ISingleton
        {
            throw new NotImplementedException();
        }

    }
}
