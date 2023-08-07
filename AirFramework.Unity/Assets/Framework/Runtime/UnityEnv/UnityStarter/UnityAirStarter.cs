/***********************************************************************************
 * Author      : #unknown#
 * Version     : 2021.3.24f1c1
 * Date        : 2023/7/15 16:19:45
 * Description : Describe the function here.
************************************************************************************/


using AirFramework.Internal;
using System;
using System.Collections;
using System.IO;
using UnityEngine;
using YooAsset;

namespace AirFramework
{
    public class UnityAirStarter : MonoSingleton<UnityAirStarter>
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        static void Initialize()
        {
            SingletonInitializeAfterSceneLoad();
        }

        private async void Awake()
        {
            
            gameObject.name = $"[{nameof(AirFramework)}.{nameof(UnityEngine)}]";
            //初始协程执行器
            Action<IEnumerator> coroutineRunner = (x) =>
            {
                this.StartCoroutine(x);
            };

            //初始化核心部分
            AirEngine.Initialize(coroutineRunner, new UnitySupportLogger());

            //创建资源模块
            Framework.CreateModule<ResModule>();
            //初始化资源模块，更新资源
            var module = Framework.GetModule<ResModule>();
            module.Initialize();

          
            RuntimeConfigData config = RuntimeConfigData.Read();
            RuntimeMode mode = config.initializeType;

            static EPlayMode ToYooAssetPlayMode(RuntimeMode mode)
            {
                switch (mode)
                {
                    case RuntimeMode.Simulated: return EPlayMode.EditorSimulateMode;
                    case RuntimeMode.Offline: return EPlayMode.OfflinePlayMode;
                    case RuntimeMode.Host: return EPlayMode.HostPlayMode;
                }
                throw new NotImplementedException($"NotImplemented PlayMode:{mode}");
            }
            await module.InitializePackage(ToYooAssetPlayMode(mode));

           


            //创建模型模块
            Framework.CreateModule<ModelModule>();
            //创建视图模块
            Framework.CreateModule<ViewModule>();
            //创建热更模块
            Framework.CreateModule<HotUpdateModule>();
            //补充元数据并加载热更程序集
            await Framework.GetModule<HotUpdateModule>().Initialize(mode);
     
            //发布框架初始化事件
            Framework.Message.Dispatcher<IFrameworkInitialize>().Publish();
        }


        #region LifeCycles

        //int i = 0;
        private void Update()
        {
            //Debug.Log(i++);
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
        #endregion
    }
}

