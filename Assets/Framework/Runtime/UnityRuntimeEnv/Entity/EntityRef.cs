using System;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 带有Mono字段的Entity
    /// </summary>
    public class EntityRef : MonoBehaviour
    {
        private EntityMono mono = null;
        public EntityMono EntityValue
        {
            get => mono;
            set
            {
                mono= value;
            }
        }
        public Type EntityType;

        public T GetEntityValue<T>() where T : EntityMono
        {
            if (!EntityType.IsSubclassOf(typeof(T))) throw new MissingComponentException("Error EntityType");


            return EntityValue as T;
        }

    }


}
