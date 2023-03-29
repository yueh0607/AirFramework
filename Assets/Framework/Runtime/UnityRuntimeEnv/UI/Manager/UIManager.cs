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
        public bool Initialized => canvas != null;



        protected override void OnDispose()
        {

        }

        private Dictionary<string, GameObject> mapper = new();

     
        private Stack<GameObject> panel_stack = new(); 

        public ModelManager Models { get; protected set; } = new ModelManager();


        private void EnStack<T>(GameObject panel)
        {
            if(panel.transform.IsChildOf(canvas.transform))
            {
                
            }
        }

        public void Open<T>() where T : Controller
        {
            string path = typeof(T).Name;

        }
        public void Close<T>() where T : Controller
        {
            
        }


     
       
    }
}
