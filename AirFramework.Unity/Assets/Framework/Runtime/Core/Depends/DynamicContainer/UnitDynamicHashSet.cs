using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class UnitDynamicHashSet<T> : PoolableValueObject<DynamicHashSet<T>>
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
