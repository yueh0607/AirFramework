using System.Collections;
using System.Collections.Generic;
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
        

        public override string Name => "ResManager";

        protected override void OnDispose()
        {
            
        }
    }
}
