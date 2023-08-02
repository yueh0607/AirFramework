using System;
using YooAsset;
using Object = UnityEngine.Object;
namespace AirFramework
{
    public class ResModule:AbstractModule
    {
        #region 默认配置信息
        /// <summary>
        /// 默认包，需要经过Initialze，否则获取为null
        /// </summary>
        public ResourcePackage DefaultPackage { get; private set; }
        /// <summary>
        /// 默认下载配置，绑定到DefaultPackage
        /// </summary>
        public DownloadConfig DefaultDownloadConfig { get; set; } = new();

        #endregion

        #region 加载
        public AssetOperationHandle LoadSync<T>(string path) where T : Object
        {
            return YooAssets.LoadAssetSync<T>(path);
        }
        public AssetOperationHandle LoadAsync<T>(string path) where T : Object
        {
            return YooAssets.LoadAssetAsync<T>(path);
        }

        #endregion

        #region -1.管理器初始化
        /// <summary>
        /// -1.资源管理器初始化
        /// </summary>
        /// <param name="packageName"></param>
        public void Initialize(string packageName = "DefaultPackage")
        {
            YooAssets.Initialize();
            // 创建默认的资源包
            DefaultPackage = YooAssets.CreatePackage(packageName);
            // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
            YooAssets.SetDefaultPackage(DefaultPackage);
        }

        #endregion
        #region 0.包初始化

        /// <summary>
        /// 默认包初始化
        /// </summary>
        /// <param name="Mode"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        public async AirTask InitializePackage(EPlayMode Mode = EPlayMode.EditorSimulateMode, string serverPath = null, string serverPath2 = null)
        {
            await InitializePackage(DefaultPackage, Mode, serverPath, serverPath2);
        }

        /// <summary>
        /// 包初始化
        /// </summary>
        /// <param name="package"></param>
        /// <param name="Mode"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        /// <exception cref="ArgumentNullException"></exception>
        public async AirTask InitializePackage(ResourcePackage package, EPlayMode Mode, string serverPath = null, string serverPath2 = null)
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
        /// 编辑器模拟初始化包
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        private async AirTask SimulateInitAsync(ResourcePackage package)
        {
            var initParameters = new EditorSimulateModeParameters();
            initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(package.PackageName);
            await package.InitializeAsync(initParameters);
        }
        /// <summary>
        /// 单机内建初始化包
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        private async AirTask SingleInitAsync(ResourcePackage package)
        {
            var initParameters = new OfflinePlayModeParameters();
            await package.InitializeAsync(initParameters);
        }
        /// <summary>
        /// 联网更新初始化
        /// </summary>
        /// <param name="package"></param>
        /// <param name="serverPath"></param>
        /// <param name="serverPath2"></param>
        /// <returns></returns>
        private async AirTask NetInitAsync(ResourcePackage package, string serverPath, string serverPath2 = null)
        {
            var initParameters = new HostPlayModeParameters();

            initParameters.QueryServices = new QueryStreamingAssetsFileServices();

            //initParameters.RemoteServices = new IRemoteServices(serverPath,serverPath2);
            //主资源服务器地址
            initParameters.DefaultHostServer = serverPath;
            //备用资源服务器地址
            initParameters.FallbackHostServer = serverPath2 ?? serverPath2;

            await package.InitializeAsync(initParameters);

        }
        #endregion
        #region 1.更新版本号

        /// <summary>
        /// 1.更新版本号，返回成功状态
        /// </summary>
        /// <returns></returns>
        public async AirTask<bool> UpdateVersion() => await UpdateVersion(DefaultPackage);
        /// <summary>
        /// 1.更新版本号，返回成功状态
        /// </summary>
        /// <returns></returns>
        public async AirTask<bool> UpdateVersion(ResourcePackage package)
        {
            //2.获取资源版本
            var operation = package.UpdatePackageVersionAsync();
            await operation;
            if (operation.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }
        #endregion
        #region 2.更新资源清单

        /// <summary>
        /// 2.更新资源清单
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        public async AirTask<bool> UpdateMainfest() => await UpdateManifest(DefaultPackage);
        /// <summary>
        /// 2.更新资源清单
        /// </summary>
        /// <param name="package"></param>
        /// <returns></returns>
        public async AirTask<bool> UpdateManifest(ResourcePackage package)
        {

            var op = package.UpdatePackageManifestAsync(package.GetPackageVersion(), true, DefaultDownloadConfig.TimeOut);
            await op;
            if (op.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }
        #endregion
        #region 3.下载资源
        /// <summary>
        /// 用于下载的配置信息
        /// </summary>
        public class DownloadConfig
        {

            private bool IsDefaultPackage = true;

            private ResourcePackage package = null;

            /// <summary>
            /// 默认是主包，允许修改
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
            /// 最大同时下载数量
            /// </summary>
            public int DownloadMaxNum { get; set; } = 10;
            /// <summary>
            /// 超时阈值
            /// </summary>
            public int TimeOut { get; set; } = 60;
            /// <summary>
            /// 重连次数
            /// </summary>
            public int FailedTryAgain { get; set; } = 3;
            /// <summary>
            /// 出现错误回调
            /// </summary>
            public DownloaderOperation.OnDownloadError ErrorCallback { get; set; } = null;
            /// <summary>
            /// 结束回调
            /// </summary>
            public DownloaderOperation.OnDownloadOver OverCallback { get; set; } = null;
            /// <summary>
            /// 进度回调
            /// </summary>
            public DownloaderOperation.OnDownloadProgress ProgressCallback { get; set; } = null;
            /// <summary>
            /// 开始下载每个文件回调
            /// </summary>
            public DownloaderOperation.OnStartDownloadFile StartDownloadFileCallback { get; set; } = null;

        }

        /// <summary>
        /// 3.下载资源到包
        /// </summary>
        /// <returns></returns>
        public async AirTask<bool> Download() => await Download(DefaultDownloadConfig);
        /// <summary>
        /// 3.下载资源到包
        /// </summary>
        /// <returns></returns>
        public async AirTask<bool> Download(DownloadConfig config)
        {
            var downloader = config.Package.CreateResourceDownloader(config.DownloadMaxNum, config.FailedTryAgain, config.TimeOut);
            //下载数量是0，直接就完成了
            if (downloader.TotalDownloadCount == 0)
            {
                return true;
            }

            //注册一些回调
            downloader.OnDownloadErrorCallback += config.ErrorCallback;
            downloader.OnDownloadProgressCallback += config.ProgressCallback;
            downloader.OnDownloadOverCallback += config.OverCallback;
            downloader.OnStartDownloadFileCallback += config.StartDownloadFileCallback;

            //开始下载
            downloader.BeginDownload();
            //等待下载完成
            await downloader;
            //检查状态
            if (downloader.Status != EOperationStatus.Succeed)
            {
                return false;
            }
            return true;
        }

        public override void OnCreate()
        {
    
        }

        public override void Update(float deltaTime)
        {
     
        }

        protected override void OnDispose()
        {

        }
        #endregion
    }
}
