using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收Queue
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitQueue<T> : PoolableObject<Queue<T>> 
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
