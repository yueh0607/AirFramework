using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收HashSet
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitHashSet<T> : PoolableValueObject<HashSet<T>>
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
