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
        public static AirTask<T> GetAwaiter<T>(this T operation) where T : AsyncOperation
        {
            AirTask<T> task = Framework.Pool.Allocate<AirTask<T>>();
            operation.completed += (A) => task.SetResult(A as T);
            return task;
        }

        public static AirTask<AsyncOperationHandle<T>> GetAwaiter<T>(this AsyncOperationHandle<T> handle)
        {
            var task = Framework.Pool.Allocate<AirTask<AsyncOperationHandle<T>>>();
            handle.Completed += task.SetResult;
            return task;
        }
    }
}
