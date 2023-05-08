﻿using UnityEngine;
using YooAsset;
namespace AirFramework
{
    public static partial class AsyncExtensions
    {

        /// <summary>
        /// 使UnityEngine.AsyncOperation的拓展
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="operation"></param>
        /// <returns></returns>
        public static AsyncTask<T> GetAwaiter<T>(this T operation) where T : AsyncOperation
        {
            AsyncTask<T> task = Framework.Pool.Allocate<AsyncTask<T>>();
            operation.completed += (A) => task.SetResult(A as T);
            return task;
        }


        #region YooAsset

        public static AsyncTask<AssetOperationHandle> GetAwaiter(this AssetOperationHandle handle)
        {
            var task = Framework.Pool.Allocate<AsyncTask<AssetOperationHandle>>();
            handle.Completed += task.SetResult;
            return task;
        }
        public static AssetOperationHandle WaitForComplete(this AssetOperationHandle thisHandle)
        {
            thisHandle.WaitForAsyncComplete();
            return thisHandle;
        }

        public static AsyncTask<AsyncOperationBase> GetAwaiter(this AsyncOperationBase operation)
        {
            var task = Framework.Pool.Allocate<AsyncTask<AsyncOperationBase>>();
            operation.Completed += task.SetResult;
            return task;
        }

        public static AssetOperationHandle GetAsset<TAsset>(this AssetOperationHandle thisHandle, out TAsset asset) where TAsset : UnityEngine.Object
        {
            if (thisHandle.Status != EOperationStatus.Succeed)
            {
                var assetInfo = thisHandle.GetAssetInfo();
                Debug.LogWarning($"The {assetInfo.AssetPath}[{assetInfo.AssetType}] is not success. Error[{thisHandle.LastError}]");
            }
            asset = thisHandle.AssetObject as TAsset;
            return thisHandle;
        }
        #endregion

    }
}