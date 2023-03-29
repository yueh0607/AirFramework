using System;
using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 带有Mono字段的Entity
    /// </summary>
    public class EntityMono : Entity
    {
        public MonoBehaviour MonoEntity { get; private set; }

        public GameObject gameObject=>MonoEntity?.gameObject;
        public Transform trasnform=>MonoEntity?.transform;
        public T GetComponent<T>()where T:Component=>MonoEntity?.GetComponent<T>();

        

        public override void OnAllocate()
        {
            base.OnAllocate();
            gameObject.SetActive(true);
        }

        public override void OnRecycle()
        {
            base.OnRecycle();
            gameObject.SetActive(false);
        }


        ~EntityMono() 
        {
            GameObject.Destroy(gameObject);
        
        }
    }
}
