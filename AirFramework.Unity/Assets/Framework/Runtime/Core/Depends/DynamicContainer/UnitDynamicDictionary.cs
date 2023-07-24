﻿namespace AirFramework
{
    public class UnitDynamicDictionary<T, K> : PoolableValueObject<DynamicDictionary<T, K>>
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
