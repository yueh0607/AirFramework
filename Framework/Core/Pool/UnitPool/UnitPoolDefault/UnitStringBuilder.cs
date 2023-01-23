using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public class UnitStringBuilder : UnitPoolObject<StringBuilder>
    {


        public override void OnAllocateItem()
        {
            
        }


        public override void OnRecycleItem()
        {
            value.Clear();
        }


        
    }
   
}
