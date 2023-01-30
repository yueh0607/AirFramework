using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 可回收Stack
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class UnitStack<T> : PoolableObject<Stack<T>> 
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
