using System.Collections.Generic;
namespace AirFramework
{
    /// <summary>
    /// 可回收Dictionary
    /// </summary>
    /// <typeparam name="TKey"></typeparam>
    /// <typeparam name="TValue"></typeparam>
    public class UnitDictionary<TKey, TValue> : PoolableValueObject<Dictionary<TKey, TValue>>
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
