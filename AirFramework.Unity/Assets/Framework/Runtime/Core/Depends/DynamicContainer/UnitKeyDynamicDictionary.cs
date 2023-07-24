using System;

namespace AirFramework
{
    public class UnitKeyDynamicDictionary<T, K> : PoolableValueObject<DynamicDictionary<T, K>> where K : IDisposable
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
