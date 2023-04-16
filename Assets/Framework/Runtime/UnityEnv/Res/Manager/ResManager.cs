using UnityEngine;
using YooAsset;
namespace AirFramework
{
    public class ResManager
    {

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
        }

    }
}
