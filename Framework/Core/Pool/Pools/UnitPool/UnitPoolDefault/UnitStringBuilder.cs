using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public sealed class UnitStringBuilder : UnitSealed<StringBuilder>
    {
        public override IObjectPool ThisPool => throw new NotImplementedException();

        public override void OnAllocateItem()
        {
            
        }

        public override void OnRecycleItem()
        {
            value.Clear();
        }


        
    }
   
}
