/***********************************************************************************
 * Author      : #unknown#
 * Version     : 2021.3.24f1c1
 * Date        : 2023/7/15 16:19:45
 * Description : Describe the function here.
************************************************************************************/


using AirFramework.Internal;
using System;
using System.Collections;
using UnityEngine;

namespace AirFramework
{
    public class UnityAirStarter : MonoSingleton<UnityAirStarter>
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        static void Initialize()
        {
            SingletonInitializeAfterSceneLoad();
        }

        private void Awake()
        {
            gameObject.name = $"[{nameof(AirFramework)}.{nameof(UnityEngine)}]";
            Action<IEnumerator> coroutineRunner = (x) =>
            {
                this.StartCoroutine(x);
            };

            AirEngine.Initialize(coroutineRunner);


        }

        private void Update()
        {
            Framework.GetModule<MessageManager>().Dispatcher<IUpdate>().Publish(Time.deltaTime);
        }

        private void FixedUpdate()
        {
            Framework.GetModule<MessageManager>().Dispatcher<IFixedUpdate>().Publish(Time.fixedDeltaTime);
        }

        private void LateUpdate()
        {
            Framework.GetModule<MessageManager>().Dispatcher<ILateUpdate>().Publish();
        }

        private void OnDestroy()
        {
            Framework.GetModule<MessageManager>().Operator<IUpdate>().UnSubscribe(AirEngine.DriveUpdate);
        }
    }
}

