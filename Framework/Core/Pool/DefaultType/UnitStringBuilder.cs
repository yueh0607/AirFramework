using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitStringBuilder: PoolableObject<StringBuilder> 
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
