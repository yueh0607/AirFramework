using System.IO;
using UnityEngine;
using YooAsset;

namespace AirFramework
{
    internal class QueryStreamingAssetsFileServices : IQueryServices
    {
        public bool QueryStreamingAssets(string fileName)
        {
            string buildinFolderName = YooAssets.GetStreamingAssetBuildinFolderName();
            return File.Exists($"{Application.streamingAssetsPath}/{buildinFolderName}/{fileName}");
        }
    }
}