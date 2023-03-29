using System.Collections;

namespace AirFramework
{
    public class UnitHashtable : PoolableValueObject<Hashtable>
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
