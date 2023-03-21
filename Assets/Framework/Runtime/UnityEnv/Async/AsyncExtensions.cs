using AirFramework;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

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
        /// <summary>
        /// 针对Addressable的拓展
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="handle"></param>
        /// <returns></returns>
        public static AsyncTask<AsyncOperationHandle<T>> GetAwaiter<T>(this AsyncOperationHandle<T> handle)
        {
            
            var task = Framework.Pool.Allocate<AsyncTask<AsyncOperationHandle<T>>>();
            handle.Completed += task.SetResult;
            return task;
        }



        
    }
}
