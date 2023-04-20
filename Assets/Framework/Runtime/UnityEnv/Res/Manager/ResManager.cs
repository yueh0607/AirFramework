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
            // ����Ĭ�ϵ���Դ��
            DefaultPackage = YooAssets.CreatePackage("DefaultPackage");
     
            // ���ø���Դ��ΪĬ�ϵ���Դ��������ʹ��YooAssets��ؼ��ؽӿڼ��ظ���Դ�����ݡ�
            YooAssets.SetDefaultPackage(DefaultPackage);
        }

    }
}
