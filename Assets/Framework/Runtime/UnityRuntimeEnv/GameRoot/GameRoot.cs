using UnityEngine;

namespace AirFramework
{
    public class GameRoot : MonoSingleton<GameRoot>
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
            Framework.LifeCycle.Publish<IUpdate>();
        }
    }
}
