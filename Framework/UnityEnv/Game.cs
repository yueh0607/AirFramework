using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Profiling;

namespace AirFramework
{
    public class Game : MonoBehaviour
    {

        
#if UNITY_2020_1_OR_NEWER
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Init()
        {
            Framework.LifeCycle.AddLifeCycle<IAwake,AwakeHandler>();
            Framework.LifeCycle.AddLifeCycle<IStart,StartHandler>();
            Framework.LifeCycle.AddLifeCycle<IUpdate,UpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate,LateUpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate,FixedUpdateHandler>();

            //Framework.Log.Logger = new ULogger();
            //Framework.Log.LogPath = Application.persistentDataPath;
           // Framework.Log.SetInterceptor<UInterceptor, URecorder>();
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
            Profiler.BeginSample("AirFramework.Update");
            Framework.LifeCycle.Publish<IUpdate>();
            Profiler.EndSample();
        }
    }
}
