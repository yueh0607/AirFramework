using System;
using UnityEngine;




namespace AirFramework.Internal
{



    public class UnityEnvStarter : MonoSingleton<UnityEnvStarter>
    {



        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterLoadSceneInitialize()
        {
            SingletonInitializeAfterSceneLoad();
            //Async 异常处理器
            Action<Exception> handler = (x) => x.Throw();
            Async_Setting.ExceptionHandler += handler;
            //初始值资源系统
            Framework.Res.Initialize();

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
