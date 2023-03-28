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
        private Canvas canvas = null;
        protected override void OnDispose()
        {

        }

        public ModelManager Models { get; protected set; } = new ModelManager();


        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        private void CheckInit()
        {
            if (canvas is null) throw new System.Exception("Init UI Module before first call.");
        }

        public void Initialize(Canvas canvas)
        {
            this.canvas = canvas;
        }

        public void Open<T>() where T : Controller
        {
            CheckInit();

        }
        public void Close<T>() where T : Controller
        {
            CheckInit();
        }



        public async AsyncTask PreloadAsync<T>() where T : Controller
        {
            //await Framework.Res.LoadAssestAsync<GameObject>(typeof(T).Name);
                
        }
    }
}
