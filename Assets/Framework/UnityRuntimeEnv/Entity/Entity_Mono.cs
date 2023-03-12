using System;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 带有Mono字段的Entity
    /// </summary>
    public abstract class EntityMono : Entity
    {
        public MonoBehaviour Mono { get; set; }

        public GameObject gameObject;
        public Transform trasnform;

        
        
        public T GetComponent<T>()where T:Component
        {
            
            return Mono.GetComponent<T>();
        }

       
    }
}
