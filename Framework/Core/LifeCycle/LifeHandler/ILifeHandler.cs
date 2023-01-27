using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface ILifeHandler<T> where T : ILife
    {
        public void HandleLife(Entity entity,T life);

        public void TryHandleLife(Entity entity)
        {
            //T life = entity as T;
        }
        
    }
}
