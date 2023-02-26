using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收List
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitList<T> : PoolableValueObject<List<T>> 
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
