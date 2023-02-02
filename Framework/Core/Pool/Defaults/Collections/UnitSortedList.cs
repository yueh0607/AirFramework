using System.Collections;

namespace AirFramework
{
    public class UnitSortedList : PoolableValueObject<SortedList> 
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
