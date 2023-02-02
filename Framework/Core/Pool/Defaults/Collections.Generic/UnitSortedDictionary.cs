using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收SortedList
    /// </summary>
    /// <typeparam name="TKey"></typeparam>
    /// <typeparam name="TValue"></typeparam>
    public class UnitSortedList<TKey,TValue> : PoolableValueObject<SortedDictionary<TKey,TValue>> 
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
