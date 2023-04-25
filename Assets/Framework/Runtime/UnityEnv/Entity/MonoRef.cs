using System;
using UnityEngine;
namespace AirFramework
{
    public class MonoRef : MonoBehaviour
    {
        private WeakReference<UnitGameObject> mono = new(null);
        public UnitGameObject UnitValue
        {
            get
            {
                bool x = mono.TryGetTarget(out UnitGameObject unit);
                return x ? unit : null;
            }
            set
            {
                mono.SetTarget(value);
            }
        }
        public Type UnitType => UnitValue.GetType();

        public T GetUnitGameObject<T>() where T : UnitGameObject
        {
            if (!UnitType.IsSubclassOf(typeof(T))) throw new MissingComponentException("Error UnitType");
            return UnitValue as T;
        }

        public static implicit operator UnitGameObject(MonoRef monoRef)
        {
            return monoRef.UnitValue;
        }

        private void OnDestroy()
        {
            if (UnitValue != null)
            {
                UnitValue.IsAlive= false;
                
            }    
        }
    }

    public static partial class GameObjectExtensions
    {
        public static MonoRef GetMonoRef(this GameObject gameObject)
        {
            return gameObject.GetComponent<MonoRef>();
        }
        public static T GetUnitGameObject<T>(this GameObject gameObject) where T : UnitGameObject
        {
            return gameObject.GetComponent<MonoRef>()?.GetUnitGameObject<T>();
        }
    }

}
