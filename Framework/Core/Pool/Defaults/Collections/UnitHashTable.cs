using System.Collections;

namespace AirFramework
{
    public class UnitHashtable : PoolableObject<Hashtable> 
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
