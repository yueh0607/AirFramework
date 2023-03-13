using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine.AddressableAssets;

namespace AirFramework
{
    public class ResManager : GlobalManager
    {

        public T LoadAsset<T>(string path) where T : UnityEngine.Object
        {
            return Addressables.LoadAssetAsync<T>(path).WaitForCompletion();
        }
       
        public async AsyncTask<T> LoadAssestAsync<T>(string path) where T : UnityEngine.Object
        {
            return (await Addressables.LoadAssetAsync<T>(path)).Result;
        }
        
        public void Release(string path)
        {

        }


        public override string Name =>"ResManager";

        protected override void OnDispose()
        {
            
        }
    }
}
