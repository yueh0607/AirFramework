using UnityEngine;
using YooAsset;
namespace AirFramework
{
    public class ResManager
    {
        public ResourcePackage DefaultPackage { get; private set; }
        public AssetOperationHandle LoadSync<T>(string path) where T : Object
        {
            return YooAssets.LoadAssetSync<T>(path);
        }
        public AssetOperationHandle LoadAsync<T>(string path) where T : Object
        {



            return YooAssets.LoadAssetAsync<T>(path);
        }
        public void Initialize()
        {
            YooAssets.Initialize();
            // 创建默认的资源包
            DefaultPackage = YooAssets.CreatePackage("DefaultPackage");
     
            // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
            YooAssets.SetDefaultPackage(DefaultPackage);
        }

    }
}
