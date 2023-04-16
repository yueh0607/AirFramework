using UnityEngine;
using YooAsset;

namespace AirFramework.Internal
{
    public class UnityEnvStarter : MonoSingleton<UnityEnvStarter>
    {



        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterLoadSceneInitialize()
        {
            SingletonInitializeAfterSceneLoad();
            Starter.AfterLoadSceneEvent();
            Framework.Res.Initialize();
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
