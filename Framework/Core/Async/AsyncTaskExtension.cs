

using UnityEngine;
namespace AirFramework
{
    public static partial class Extensions
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
            operation.completed += (A) =>task.SetResult(A as T);
            return task;
        }


    }
}
