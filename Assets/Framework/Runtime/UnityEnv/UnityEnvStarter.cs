using UnityEngine;

namespace AirFramework.Internal
{
    public class UnityEnvStarter : MonoSingleton<UnityEnvStarter>
    {



        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterLoadSceneInitialize()
        {
            SingletonInitializeAfterSceneLoad();
            Framework.Res.Initialize("DefaultPackage");
            Starter.AfterLoadSceneEvent();


        }


        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void BeforeLoadSceneInitialize()
        {
            Starter.BeforeLoadSceneEvent();
        }


        private void LateUpdate()
        {
            Starter.LateUpdateEvent();
        }
        private void FixedUpdate()
        {
            Starter.FixedUpdateEvent(Time.fixedTime);
        }

        private void Update()
        {
            Starter.UpdateEvent(Time.deltaTime);

        }
    }
}
