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
            throw new NotImplementedException();
        }

        public override void OnRecycleItem()
        {
            throw new NotImplementedException();
        }
    }

}
