using UnityEngine;
namespace AirFramework
{
    public class UnityEnvStarter : MonoSingleton<UnityEnvStarter>
    {



        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterLoadSceneInitialize()
        {
            InitializeAfterSceneLoad();
            Starter.AfterLoadSceneInitialize();
        }


        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void BeforeLoadSceneInitialize()
        {
            Starter.BeforeLoadSceneInitialize();
        }


        private void LateUpdate()
        {
            Starter.LateUpdate();
        }
        private void FixedUpdate()
        {
            Starter.FixedUpdate();
        }

        private void Update()
        {
            Starter.Update();

        }
    }
}
