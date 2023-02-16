using AirFramework;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;


namespace AirFramework
{
    public static partial class Pool
    {

        /// <summary>
        /// 使UnityEngine.AsyncOperation
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

        public static AsyncTask<AsyncOperationHandle<T>> GetAwaiter<T>(this AsyncOperationHandle<T> handle)
        {
            var task = Framework.Pool.Allocate<AsyncTask<AsyncOperationHandle<T>>>();
            handle.Completed += task.SetResult;
            return task;
        }
    }
}
