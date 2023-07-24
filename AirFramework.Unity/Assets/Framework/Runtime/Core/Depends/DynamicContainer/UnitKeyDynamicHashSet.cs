using System;

namespace AirFramework
{
    public class UnitKeyDynamicHashSet<T> : PoolableValueObject<DynamicHashSet<T>> where T : IDisposable
    {
        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Value.ClearAndDispose();
        }
    }
}
