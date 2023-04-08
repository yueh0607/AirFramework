using System;
using UnityEngine;

namespace AirFramework
{
    public class EntityRef : MonoBehaviour
    {
        private Entity mono = null;
        public Entity EntityValue
        {
            get => mono;
            set
            {
                mono = value;
            }
        }
        public Type EntityType;

        public T GetEntity<T>() where T : Entity
        {
            if (!EntityType.IsSubclassOf(typeof(T))) throw new MissingComponentException("Error EntityType");
            return EntityValue as T;
        }

        public static implicit operator Entity(EntityRef entityRef)
        {
            return entityRef.EntityValue;
        }

    }

    public static partial class GameObjectExtensions
    {
        public static EntityRef GetEntity(this GameObject gameObject)
        {
            return gameObject.GetComponent<EntityRef>();
        }
        public static T GetEntity<T>(this GameObject gameObject) where T : Entity
        {
            return gameObject.GetComponent<EntityRef>()?.GetEntity<T>();
        }
    }

}
