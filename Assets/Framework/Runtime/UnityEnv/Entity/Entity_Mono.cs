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

        public GameObject gameObject=>Mono.gameObject;
        public Transform trasnform=>Mono.transform;
        public T GetComponent<T>()where T:Component=>Mono.GetComponent<T>();


       

    }
}
