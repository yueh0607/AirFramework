using System.Collections.Generic;
namespace AirFramework
{
    /// <summary>
    /// 可回收SortedSet
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitSortedSet<T> : PoolableValueObject<SortedSet<T>>
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
