using System;
using System.Collections.Generic;
using UnityEditor.PackageManager;
using UnityEngine;
using YooAsset;
using Object = UnityEngine.Object;
namespace AirFramework
{
    public class ResManager
    {
        #region Ĭ��������Ϣ
        /// <summary>
        /// Ĭ�ϰ�����Ҫ����Initialze�������ȡΪnull
        /// </summary>
        public ResourcePackage DefaultPackage { get; private set; }
        /// <summary>
        /// Ĭ���������ã��󶨵�DefaultPackage
        /// </summary>
        public DownloadConfig DefaultDownloadConfig { get; set; } = new();

        #endregion

        #region ����
        public AssetOperationHandle LoadSync<T>(string path) where T : Object
        {
            return YooAssets.LoadAssetSync<T>(path);
        }
        public AssetOperationHandle LoadAsync<T>(string path) where T : Object
        {
            return YooAssets.LoadAssetAsync<T>(path);
        }
        #endregion

        #region -1.��������ʼ��
        /// <summary>
        /// -1.��Դ��������ʼ��
        /// </summary>
        /// <param name="packageName"></param>
        public void Initialize(string packageName)
        {
            YooAssets.Initialize();
            // ����Ĭ�ϵ���Դ��
            DefaultPackage = YooAssets.CreatePackage(packageName);
            // ���ø���Դ��ΪĬ�ϵ���Դ��������ʹ��YooAssets��ؼ��ؽӿڼ��ظ���Դ�����ݡ�
            YooAssets.SetDefaultPackage(DefaultPackage);
        }

        #endregion
        #region 0.����ʼ��

        /// <summary>
        /// Ĭ�ϰ���ʼ��
        /// </summary>
        /// <param name="Mode"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        public async AsyncTask InitializePackage(EPlayMode Mode,string serverPath=null,string serverPath2=null)
        {
            await InitializePackage(DefaultPackage,Mode,serverPath,serverPath2);
        }
       
        /// <summary>
        /// ����ʼ��
        /// </summary>
        /// <param name="package"></param>
        /// <param name="Mode"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        public async AsyncTask InitializePackage(ResourcePackage package, EPlayMode Mode, string serverPath = null, string serverPath2 = null)
        {
            switch (Mode)
            {
                case EPlayMode.EditorSimulateMode:
                    {
                        await SimulateInitAsync(package);
                        break;
                    }
                case EPlayMode.OfflinePlayMode:
                    {
                        await SingleInitAsync(package);
                        break;
                    }
                case EPlayMode.HostPlayMode:
                    {
                        if (serverPath == null) throw new ArgumentNullException("HostPlayMode cannot receive null server path");
                        await NetInitAsync(package, serverPath, serverPath2);
                        break;
                    }

            }
        }

        /// <summary>
        /// �༭��ģ���ʼ����
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        private async AsyncTask SimulateInitAsync(ResourcePackage package)
        {
            var initParameters = new EditorSimulateModeParameters();
            initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(package.PackageName);
            await package.InitializeAsync(initParameters);
        }
        /// <summary>
        /// �����ڽ���ʼ����
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        private async AsyncTask SingleInitAsync(ResourcePackage package)
        {
            var initParameters = new OfflinePlayModeParameters();
            await package.InitializeAsync(initParameters);
        }
        /// <summary>
        /// �������³�ʼ��
        /// </summary>
        /// <param name="package"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        private async AsyncTask NetInitAsync(ResourcePackage package, string serverPath, string serverPath2 = null)
        {
            var initParameters = new HostPlayModeParameters();

            initParameters.QueryServices = new QueryStreamingAssetsFileServices();

            //����Դ��������ַ
            initParameters.DefaultHostServer = serverPath;
            //������Դ��������ַ
            initParameters.FallbackHostServer = serverPath2 == null ? serverPath : serverPath2;

            await package.InitializeAsync(initParameters);

        }
        #endregion
        #region 1.���°汾��

        /// <summary>
        /// 1.���°汾�ţ����سɹ�״̬
        /// </summary>
        /// <returns></returns>
        public async AsyncTask<bool> UpdateVersion() => await UpdateVersion(DefaultPackage);
        /// <summary>
        /// 1.���°汾�ţ����سɹ�״̬
        /// </summary>
        /// <returns></returns>
        public async AsyncTask<bool> UpdateVersion(ResourcePackage package)
        {
            //2.��ȡ��Դ�汾
            var operation = package.UpdatePackageVersionAsync();
            await operation;
            if (operation.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }
        #endregion
        #region 2.������Դ�嵥

        /// <summary>
        /// 2.������Դ�嵥
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        public async AsyncTask<bool> UpdateMainfest() => await UpdateManifest(DefaultPackage);
        /// <summary>
        /// 2.������Դ�嵥
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        public async AsyncTask<bool> UpdateManifest(ResourcePackage package)
        {

            var op = package.UpdatePackageManifestAsync(package.GetPackageVersion(), 60);
            await op;
            if (op.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }
        #endregion
        #region 3.������Դ
        /// <summary>
        /// �������ص�������Ϣ
        /// </summary>
        public class DownloadConfig
        {

            private bool IsDefaultPackage = true;

            private ResourcePackage package = null;

            /// <summary>
            /// Ĭ���������������޸�
            /// </summary>
            public ResourcePackage Package
            {
                get
                {
                    return IsDefaultPackage ? Framework.Res.DefaultPackage : package;
                }
                set
                {
                    IsDefaultPackage = false;
                    package = value;
                }
            }

            /// <summary>
            /// ���ͬʱ��������
            /// </summary>
            public int DownloadMaxNum { get; set; } = 10;
            /// <summary>
            /// ��ʱ��ֵ
            /// </summary>
            public int TimeOut { get; set; } = 60;
            /// <summary>
            /// ��������
            /// </summary>
            public int FailedTryAgain { get; set; } = 3;
            /// <summary>
            /// ���ִ���ص�
            /// </summary>
            public DownloaderOperation.OnDownloadError ErrorCallback { get; set; } = null;
            /// <summary>
            /// �����ص�
            /// </summary>
            public DownloaderOperation.OnDownloadOver OverCallback { get; set; } = null;
            /// <summary>
            /// ���Ȼص�
            /// </summary>
            public DownloaderOperation.OnDownloadProgress ProgressCallback { get; set; } = null;
            /// <summary>
            /// ��ʼ����ÿ���ļ��ص�
            /// </summary>
            public DownloaderOperation.OnStartDownloadFile StartDownloadFileCallback { get; set; } = null;

        }

        /// <summary>
        /// 3.������Դ����
        /// </summary>
        /// <returns></returns>
        public async AsyncTask<bool> Download() => await Download(DefaultDownloadConfig);
        /// <summary>
        /// 3.������Դ����
        /// </summary>
        /// <returns></returns>
        public async AsyncTask<bool> Download(DownloadConfig config)
        {
            var downloader = config.Package.CreateResourceDownloader(config.DownloadMaxNum, config.FailedTryAgain, config.TimeOut);
            //����������0��ֱ�Ӿ������
            if (downloader.TotalDownloadCount == 0)
            {
                return true;
            }

            //ע��һЩ�ص�
            downloader.OnDownloadErrorCallback += config.ErrorCallback;
            downloader.OnDownloadProgressCallback += config.ProgressCallback;
            downloader.OnDownloadOverCallback += config.OverCallback;
            downloader.OnStartDownloadFileCallback += config.StartDownloadFileCallback;

            //��ʼ����
            downloader.BeginDownload();
            //�ȴ��������
            await downloader;
            //���״̬
            if (downloader.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }
        #endregion
    }
}
