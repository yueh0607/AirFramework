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
            Framework.Message.Operator<ILateUpdate>().Publish();
        }
        private void FixedUpdate()
        {
            Framework.Message.Operator<IFixedUpdate>().Publish(Time.fixedDeltaTime);
        }

        private void Update()
        {
#if UNITY_EDITOR
            UnityEngine.Profiling.Profiler.BeginSample("AirFranework.Update");
            Framework.Message.Operator<IUpdate>().Publish(Time.deltaTime);
            UnityEngine.Profiling.Profiler.EndSample();
#endif

        }
    }
}
