using UnityEngine;


namespace AirFramework
{
    public class UnityEnvStarter : MonoSingleton<UnityEnvStarter>
    {



        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterLoadSceneInitialize()
        {
            InitializeAfterSceneLoad();
            GameBucket.TryCreateByReflection();
        }


        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void BeforeLoadSceneInitialize()
        {
            Framework.LifeCycle.AddLifeCycle<IUpdate, UpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate, LateUpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate, FixedUpdateHandler>();
        }


        private void LateUpdate()
        {
            Framework.LifeCycle.Publish<ILateUpdate>();
        }
        private void FixedUpdate()
        {
            Framework.LifeCycle.Publish<IFixedUpdate>();
        }

        private void Update()
        {
#if UNITY_EDITOR
            UnityEngine.Profiling.Profiler.BeginSample("AirFranework.Update");
            Framework.LifeCycle.Publish<IUpdate>();
            UnityEngine.Profiling.Profiler.EndSample();
#endif

        }
    }
}
