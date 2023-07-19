using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
