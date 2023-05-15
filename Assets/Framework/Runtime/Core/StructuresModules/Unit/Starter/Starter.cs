using System;
using UnityEngine;
namespace AirFramework.Internal
{
    public static class Starter
    {
        private static void AfterLoadSceneInitialize()
        {
            Initializer.TryCreateByReflection();
        }

        private static void BeforeLoadSceneInitialize()
        {
            Framework.LifeCycle.AddLifeCycle<IUpdate, UpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<ILateUpdate, LateUpdateHandler>();
            Framework.LifeCycle.AddLifeCycle<IFixedUpdate, FixedUpdateHandler>();
        }

        private static void LateUpdate()
        {
            Framework.Message.Operator<IFixedUpdate>().Publish(Time.fixedDeltaTime);
        }
        private static void FixedUpdate(float fixedTime)
        {
            Framework.Message.Operator<IFixedUpdate>().Publish(Time.fixedDeltaTime);
        }
        private static void Update(float deltaTime)
        {
            Framework.Message.Operator<IUpdate>().Publish(Time.deltaTime);
        }

        public static Action LateUpdateEvent = LateUpdate;
        public static Action<float> FixedUpdateEvent = FixedUpdate;
        public static Action<float> UpdateEvent = Update;
        public static Action BeforeLoadSceneEvent = BeforeLoadSceneInitialize;
        public static Action AfterLoadSceneEvent = AfterLoadSceneInitialize;


    }
}
