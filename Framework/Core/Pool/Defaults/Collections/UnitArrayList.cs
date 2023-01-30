using System.Collections;

namespace AirFramework
{
    public class UnitArrayList : PoolableObject<ArrayList> 
    {
        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            Value.Clear();
        }
    }
}
