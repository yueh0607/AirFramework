using System;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 带有Mono字段的Entity
    /// </summary>
    public class EntityRef : MonoBehaviour
    {
        public EntityMono EntityValue;
        public Type EntityType;

        public T GetEntityValue<T>() where T : EntityMono
        {
            if (!EntityType.IsSubclassOf(typeof(T))) throw new MissingComponentException("Error EntityType"); 


            return EntityValue as T;
        }
        
    }


}
