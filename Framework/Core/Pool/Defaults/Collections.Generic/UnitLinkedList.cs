using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收LinkedList
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitLinkedList<T> : PoolableObject<LinkedList<T>> 
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
