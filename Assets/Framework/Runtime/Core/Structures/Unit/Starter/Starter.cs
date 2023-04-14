using UnityEngine;
namespace AirFramework
{
    public static class Starter
    {
        public static void AfterLoadSceneInitialize()
        {
            GameBucket.TryCreateByReflection();
        }

        public static void BeforeLoadSceneInitialize()
        {
            Framework.LifeCycle.AddLifeCycle<IUpdate, UpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate, LateUpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate, FixedUpdateHandler>();
        }


        public static void LateUpdate()
        {
            Framework.Message.Operator<ILateUpdate>().Publish();
        }
        public static void FixedUpdate()
        {
            Framework.Message.Operator<IFixedUpdate>().Publish(Time.fixedDeltaTime);
        }

        public static void Update()
        {
            Framework.Message.Operator<IUpdate>().Publish(Time.deltaTime);
        }
    }
}
