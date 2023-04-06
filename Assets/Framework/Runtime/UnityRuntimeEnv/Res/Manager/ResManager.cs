using UnityEngine;
using UnityEngine.AddressableAssets;

namespace AirFramework
{
    public class ResManager : GlobalManager
    {

        public T Load<T>(string path)
        {
            return Addressables.LoadAssetAsync<T>(path).WaitForCompletion();
        }
        public async AsyncTask<T> LoadAsync<T>(string path)
        {
            var res = await Addressables.LoadAssetAsync<T>(path);
            return res.Result;
        }

        public void Release<T>(T res)
        {
            Addressables.Release(res);
        }
        public async AsyncTask<GameObject> InstantiateAsync(GameObject gameObject)
        {
            return (await Addressables.InstantiateAsync(gameObject)).Result;
        }
        public async AsyncTask<GameObject> InstantiateAsync(GameObject gameObject, Vector3 position)
        {
            return (await Addressables.InstantiateAsync(gameObject)).Result;
        }
        public override string Name => "ResManager";

        protected override void OnDispose()
        {

        }
    }
}
