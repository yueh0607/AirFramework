using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public sealed class UnitList<T> : UnitPoolObject<List<T>>
    {
        public override void OnAllocateItem()
        {
            
        }

        public override void OnRecycleItem()
        {
            Value.Clear();
        }
    }

}
