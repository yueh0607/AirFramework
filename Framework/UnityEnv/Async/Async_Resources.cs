using AirFramework;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

namespace AirFramework
{
    public static partial class Async
    {

        public static async AsyncTask<T> AddressableLoadAssetAsync<T>(IResourceLocation location)
        {
            return (await Addressables.LoadAssetAsync<T>(location)).Result;
        }
        public static async AsyncTask<SceneInstance> AddressableLoadSceneAsync(IResourceLocation location, LoadSceneMode loadMode = LoadSceneMode.Single, bool activateOnLoad = true, int priority = 100)
        {
            return (await Addressables.LoadSceneAsync(location, loadMode, activateOnLoad, priority)).Result;
        }
        public static async AsyncTask<SceneInstance> AddressableUnLoadSceneAsync(IResourceLocation location, LoadSceneMode loadMode = LoadSceneMode.Single, bool activateOnLoad = true, int priority = 100)
        {
            return (await Addressables.LoadSceneAsync(location, loadMode, activateOnLoad, priority)).Result;
        }

        public static async AsyncTask<T> ResoucesLoadAssetAsync<T>(string path) where T : UnityEngine.Object
        {
            return (await Resources.LoadAsync(path)).asset as T;
        }


      
    }
}
