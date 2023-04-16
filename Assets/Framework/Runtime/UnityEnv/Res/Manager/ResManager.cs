using UnityEngine;

namespace AirFramework
{
    public class ResManager
    {

        public T Load<T>(string path)
        {
            return Addressables.LoadAssetAsync<T>(path).WaitForCompletion();
        }
        public AsyncOperationHandle<T> LoadAsync<T>(string path)
        {
            return Addressables.LoadAssetAsync<T>(path);
        }
        public void Release<T>(T res)
        {
            Addressables.Release(res);
        }
        public void ReleaseInstance(GameObject instance)
        {
            Addressables.ReleaseInstance(instance);
        }
        public AsyncOperationHandle InstantiateAsync(GameObject gameObject)
        {
            return Addressables.InstantiateAsync(gameObject);
        }
        public AsyncOperationHandle InstantiateAsync(GameObject gameObject, Vector3 position)
        {
            return Addressables.InstantiateAsync(gameObject);

        }



    }
}
