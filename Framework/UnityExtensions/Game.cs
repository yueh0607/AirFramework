using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class Game : MonoBehaviour
    {

        
#if UNITY_2020_1_OR_NEWER
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Init()
        {
            Framework.LifeCycle.AddLifeCycle<IAwake>();
            Framework.LifeCycle.AddLifeCycle<IStart>();
            Framework.LifeCycle.AddLifeCycle<IUpdate>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate>();
            //Debug.Log("LifeCycleInit");
        }
#endif
        private void Awake()
        {
            Framework.LifeCycle.Publish<IAwake>();
        }
        private void LateUpdate()
        {
            Framework.LifeCycle.Publish<ILateUpdate>();
        }
        private void FixedUpdate()
        {
            Framework.LifeCycle.Publish<IFixedUpdate>();
        }
        private void Start()
        {
            Framework.LifeCycle.Publish<IStart>();
        }

        private void Update()
        {
            Framework.LifeCycle.Publish<IUpdate>();
        }
    }
}
