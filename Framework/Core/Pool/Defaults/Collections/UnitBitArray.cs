using System.Collections;

namespace AirFramework
{
    public class UnitBitArray : PoolableObject<BitArray> 
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
