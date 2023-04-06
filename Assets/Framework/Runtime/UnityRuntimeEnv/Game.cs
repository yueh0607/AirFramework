using UnityEngine;

namespace AirFramework
{
    public class Game : MonoBehaviour
    {

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Init()
        {
            return;
            Framework.LifeCycle.AddLifeCycle<IAwake, AwakeHandler>();
            Framework.LifeCycle.AddLifeCycle<IStart, StartHandler>();
            Framework.LifeCycle.AddLifeCycle<IUpdate, UpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate, LateUpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate, FixedUpdateHandler>();
        }


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
