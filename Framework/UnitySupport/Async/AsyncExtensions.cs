

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
        public static AirTask<T> GetAwaiter<T>(this T operation) where T : AsyncOperation
        {
            AirTask<T> task = Framework.Pool.Allocate<AirTask<T>>();
            operation.completed += (A) => task.SetResult(A as T);
            return task;
        }


    }
}
