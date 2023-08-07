using AirFramework.Internal;
using HybridCLR;
using Sirenix.Utilities;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using YooAsset;

namespace AirFramework
{
    public class HotUpdateModule : AbstractModule
    {
        public override void OnCreate()
        {

        }

        public override void Update(float deltaTime)
        {

        }

        protected override void OnDispose()
        {

        }
        public async AirTask Initialize()
        {
            AssetInfo[] metaDataAssetInfos = YooAssets.GetAssetInfos("MetaDataAssembly");
            AssetInfo[] hotUpdateAssetInfos = YooAssets.GetAssetInfos("HotUpdateAssembly");

            await LoadAndSupplementaryMetaData(metaDataAssetInfos);
            await LoadHotUpdateAssembly(hotUpdateAssetInfos);


            Debug.Log("HCLR初始化完成");
        }

        /// <summary>
        /// 加载DLL，补充AOT程序集元数据
        /// </summary>
        /// <returns></returns>
        private async AirTask LoadAndSupplementaryMetaData(AssetInfo[] AOTMetaAssemblyFiles)
        {
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            foreach (var aotDll in AOTMetaAssemblyFiles)
            {
                var handle = YooAssets.LoadRawFileAsync(aotDll);
                await handle;
                byte[] dllBytes = handle.GetRawFileData();
                handle.Dispose();
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
                //Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
            }
        }

        private async AirTask LoadHotUpdateAssembly(AssetInfo[] infos)
        {
            List<Assembly> assemblies = new List<Assembly>();
            foreach (var aotDll in infos)
            {
                var handle = YooAssets.LoadRawFileAsync(aotDll);
                await handle;
                var data = handle.GetRawFileData();
                assemblies.Add(Assembly.Load(data));
                handle.Dispose();
            }
            AirEngine.HotUpdateReflectInitliaze(assemblies);
        }
    }
}
