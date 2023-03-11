using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceLocations;

namespace AirFramework
{

    public class UIManager : GlobalManager
    {
        public override string Name => "UIManager";
        public Canvas canvas { get; private set; } = null;
        protected override void OnDispose()
        {

        }

        public ModelManager Models { get; protected set; } = new ModelManager();


        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void CheckInit()
        {
            if (canvas is null) throw new System.Exception("Init UI Module before first call.");
        }
        public void Open<T>() where T : Controller
        {
            CheckInit();

        }
        public void Close<T>( ) where T : Controller
        {
            CheckInit();
        }


        private Dictionary<string, GameObject> panels = new(); 
        public async AsyncTask PreloadAsync<T>(string name) where T : Controller
        {
            var x = (await Addressables.LoadAssetAsync<GameObject>(name)).Result;
            var y = (await Addressables.InstantiateAsync(x,canvas)).Result;
            y.SetActive(false);
            panels.TryAdd(name, x);
            
        }
    }
}
